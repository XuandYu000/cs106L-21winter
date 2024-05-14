#include <iostream>     // for cout, cin
#include <fstream>      // for ifstream
#include <sstream>      // for stringstream
#include <unordered_set>
#include <vector>
#include <queue>
#include <unordered_map>
#include "wikiscraper.h"

using std::cout;            using std::endl;
using std::ifstream;        using std::stringstream;
using std::string;          using std::vector;
using std::priority_queue;  using std::unordered_map;
using std::unordered_set;   using std::cin;

/*
 * This is the function you will be implementing. It takes
 * two string representing the names of a start_page and
 * end_page and is supposed to return a ladder, represented
 * as a vector<string>, of links that can be followed from
 * start_page to get to the end_page.
 *
 * For the purposes of this algorithm, the "name" of a Wikipedia
 * page is what shows at the end of the URL when you visit that page
 * in your web browser. For ex. the name of the Stanford University
 * Wikipedia page is "Stanford_University" since the URL that shows
 * in your browser when you visit this page is:
 *
 *       https://en.wikipedia.org/wiki/Stanford_University
 */
vector<string> findWikiLadder(const string& start_page, const string& end_page) {
    // TODO: 1. Once your file reading is working, replace the below
    //          return statement with "return {};".
    //       2. Make sure that you've copied over your findWikiLinks method
    //          from Part A into wikiscraper.cpp.
    //       3. Finally, implement this function per Part B in the handout!
    //
    //                Best of luck!

    // Create WikiScraper object
    WikiScraper scraper;

    // visited_page store the items which has been found before
    unordered_set<string> visited_pages = {};

    // gets the set of links on page specified by end_page
    // variable and stores in target_set variable
    auto target_set = scraper.getLinkSet(end_page);

    //  class Compare used in the priority_queue
    auto cmpFn = [&scraper, target_set](vector<string> lad1, vector<string> lad2) {
        auto page1 = scraper.getLinkSet(lad1.back());
        auto page2 = scraper.getLinkSet(lad2.back());
        int num1 = 0, num2 = 0;
        for(auto& s : target_set) {
            if(page1.find(s) != page1.end()) {
                num1++;
            }
            if(page2.find(s) != page2.end()) {
                num2++;
            }
        }
        return num1 < num2;
    };

    // Creates a priority_queue
    std::priority_queue<vector<string>, vector<vector<string>>, decltype (cmpFn)> queue(cmpFn);
    queue.push(vector<string>{start_page});
    visited_pages.insert(start_page);


    while(!queue.empty()) {
        auto item = queue.top();
        queue.pop();
        auto current_pages = scraper.getLinkSet(item.back());
        if(current_pages.find(end_page) != current_pages.end()) {
            item.push_back(end_page);
            return item;
        }
        for(auto& link : current_pages) {
            if(visited_pages.find(link) != visited_pages.end()) {
                continue;
            }
            vector<string> newItem(item);
            newItem.push_back(link);
            visited_pages.insert(link);
            queue.push(newItem);
        }
    }
    return vector<string>{};
}

int main() {
    /* Container to store the found ladders in */
    vector<vector<string>> outputLadders;

    cout << "Enter a file name: ";
    string filename;
    getline(cin, filename);

    // TODO: Create a filestream from the filename.
    //       For each pair {start_page, end_page} in the input file,
    //       retrieve the result of findWikiLadder(start_page, end_page)
    //       and append that vector to outputLadders.

    // Write code here
    ifstream in(filename);
    int numPairs;
    // parse the first line as the number of tokens
    in >> numPairs;

    // loop through each line, paesing out page names and calling fingWikiLadder
    string start_page, end_page;
    for(int i = 0; i < numPairs; i++) {
        // parse the start and end page from each line;
        in >> start_page >> end_page;
        outputLadders.push_back(findWikiLadder(start_page, end_page));
    }

    /*
     * Print out all ladders in outputLadders.
     * We've already implemented this for you!
     */
    for (auto& ladder : outputLadders) {
        if(ladder.empty()) {
            cout << "No ladder found!" << endl;
        } else {
            cout << "Ladder found:" << endl;
            cout << "\t" << "{";

            std::copy(ladder.begin(), ladder.end() - 1,
                      std::ostream_iterator<string>(cout, ", "));
            /*
             * The above is an alternate way to print to cout using the
             * STL algorithms library and iterators. This is equivalent to:
             *    for (size_t i = 0; i < ladder.size() - 1; ++i) {
             *        cout << ladder[i] << ", ";
             *    }
             */
            cout << ladder.back() << "}" << endl;
        }
    }
    return 0;
}




