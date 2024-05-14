#include <iostream>
#include <fstream>
#include <algorithm>
#include <unordered_set>

using std::cout;            using std::endl;
using std::string;          using std::unordered_set;


// Check a string whether it has characters of "#" or ":"
bool isValid(const string& link) {
    return std::all_of(link.begin(), link.end(), [](char ch){return ch != '#' && ch != ':';});
}

/*
 * Note that you have to pass in the file as a single string
 * into the findWikiLinks function!
 * So we have to turn the passed-in file into a single string...
 * does that sound familiar at all?
 */
unordered_set<string> findWikiLinks(const string& page_html) {
    // TODO: delete this return statement and implement the
    //       function!
    unordered_set<string> res;
    static const string delim = "href=\"/wiki/";
    auto href_begin = page_html.begin();
    auto end = page_html.end();
    while(true) {
       // search for the next location of "delim".
       // After so, break out ofo the while loop if there are no occurences.
       href_begin = std::search(href_begin, end, delim.begin(), delim.end());
       if(href_begin == end) {
           break;
       }

       // set herf_end to the wikilink. Start searching after the delimeter found above
       auto href_end = href_begin;
       href_end = std::find(href_end + delim.length(), end, '\"');


       // Create a string from the two iterators(herf_begin, herf_end)
       // If there is no "#" or ":", push into the unordered_set
       string link = string(href_begin + delim.length(), href_end);
       if(isValid(link)) {
           res.insert(link);
       }
       href_begin = href_end;
    }
    return res;
}

int main() {
    /* Note if your file reading isn't working, please go to the
     * projects tab on the panel on the left, and in the run section,
     * uncheck the "Run in terminal" box and re-check it. This
     * should fix things.
     */

    cout << "Enter a file name: ";
    string filename;
    getline(std::cin, filename);
    filename = "/home/overlookingview/Desktop/code/cs106L/02_WikiRacer/02_WikiRacer/WikiRacerLinks/" + filename;
    string page_html;

    // TODO: Create a filestream from the filename, and convert it into
    //       a single string of data called page_html (declared above)

    // Write code here
    std::ifstream in(filename);
    string line;
    while(getline(in, line)){
        page_html += line;
    }
    in.close();

    unordered_set<string> validLinks = findWikiLinks(page_html);

    // TODO: Print out the validLinks set above.
    //       You can print it out in any format; this is just for you
    //       to be able to compare your results with the [output] results
    //       under the /res folder.

    // Write code here
    for(auto it = validLinks.begin(); it != validLinks.end(); it++) {
        cout<<*it<<" ";
    }

    return 0;
}
