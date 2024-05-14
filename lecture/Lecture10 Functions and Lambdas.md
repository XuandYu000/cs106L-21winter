## Lecture10 Functions and Lambdas

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2213%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2213%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Functions and Lambdas”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2213%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 13</a></span>)</span> 函数和 Lambda

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“a successfully templated function”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”</a></span>)</span> 成功的模板化函数

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2219%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2219%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“This code will work for any containers with any types, for a single specific target.”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2219%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 19</a></span>)</span> 此代码适用于任何类型的任何容器、单个特定目标。

    template <typename InputIt, typename DataType>
    int count_occurrences(InputIt begin, InputIt end, DataTypde val) {
    	int count = 0;
    	for(auto iter = begin; iter != end; ++iter) {
    		if(*iter == val) count++;
    	}
    	return count;
    }

    // Usage:
    std::string str = "xiadia";
    count_occurrences(str.begin(), str.end(), 'a');

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2219%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2219%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Will this work for a more general category of targets than one specific value?”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2219%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 19</a></span>)</span> 这是否适用于比某个特定值更一般的目标类别？

    // Usage:
    std::string str = "xiadia";
    count_occurrences(str.begin(), str.end(), ~~'a');

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2221%22%2C%22position%22%3A%7B%22pageIndex%22%3A20%2C%22rects%22%3A%5B%5B406.116%2C47.804%2C625.902%2C64.394%5D%2C%5B406.116%2C31.304%2C533.81%2C47.894%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2221%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=21">“What if we wanted to find all the vowels in “Xadia”?”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2221%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 21</a></span>)</span>

将`*iter = val` 换为 `isVowel(*iter)`

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2224%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2224%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Predicate Functions”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2224%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 24</a></span>)</span> 谓词函数

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2224%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2224%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Any function that returns a boolean value is a predicate!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2224%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 24</a></span>)</span> 任何返回布尔值的函数都是谓词！

    template <typename InputIt, typename DataType, typename UniPred>
    int count_occurrences(InputIt begin, InputIt end, UniPred pred) {
    	int count = 0;
    	for (auto iter = begin; iter != end; ++iter) {
    		if(*iter == val pred(*iter)) count++;
    	}
    	return count;
    }

    bool isVowel(char c) {
    	std::string vowels = "aeiou";
    	return volews.find(c) != std::string::npos;
    }

    // Usage:
    std::string str = "xadia";
    count_occurrences(str.begin(), str.end(), isVowel);

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2232%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2232%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“What type is UniPred???”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2232%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 32</a></span>)</span> UniPred是什么类型？？？

`UniPred` 被称为函数指针

*   可以被视为普通的指针
*   可以像参数变量一样传入模版函数中
*   可以像函数一样被调用

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2238%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2238%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Is this good enough?”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2238%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 38</a></span>)</span> 这够好吗？

这是一个弱泛化，考虑以下代码

    bool isMoreThan3(int num) {
     return num > 3;
    }

    bool isMoreThan4(int num) {
     return num > 4;
    }

    bool isMoreThan5(int num) {
     return num > 5;
    }

我们跟希望有以下形式

    bool isMoreThan(int num, int limit) {
      return num > limit;
    }

若可以采用以上形式，则可以应对上述弱泛化的情况

    template <typename InputIt, typename BinPred>
    int count_occurrences(InputIt begin, Input end, BinPred pred) {
    	int count = 0;
    	for (auto iter = begin; iter != end; ++iter) {
    		if(pred(*iter, ???)) count++;
    	}
    	return count;
    }

但是可以看出我们没办法船务第二个参数

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2245%22%2C%22position%22%3A%7B%22pageIndex%22%3A44%2C%22rects%22%3A%5B%5B44.5%2C270.261%2C185.221%2C295.146%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=45">“The Catch-22”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 45</a></span>)</span> 问题总结

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2245%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“We want our function to know more information about our predicate.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 45</a></span>)</span>

    我们希望我们的函数了解有关谓词的更多信息。

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2245%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“However, we can’t pass in more than one parameter.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 45</a></span>)</span>

    但是，我们不能传入多个参数。

#### lambdas

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2245%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Lambdas are inline, anonymous functions that can know about functions declared in their same scope!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2245%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 45</a></span>)</span> Lambda 是内联匿名函数，可以了解在同一作用域中声明的函数！

    auto var = [capture-clause] (auto param) -> bool
    {

    }

<!---->

    int limit = 5;
    auto isMoreThan = [limit] (int n) {return n > limit;};
    isMoreThan(6);

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Capture Clauses”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”</a></span>)</span> 捕获子句

可以捕获任意外界变量，包括引用和值

    []              //capture nothing
    [limit]         //capture lower by value
    [&limit]        //capture lower by reference
    [&limit, upper] //capture lower by reference
    [&, limit]      //capture lower by reference, higher by value
    [&]             //capture everything by reference
    [=]             //capture everything by value

<!---->

    template <typename InputIt, typename UniPred>
    int count_occurrence(InputIt begin, InputIt end, UniPred pred) {
    	int count = 0;
    	for(auto iter = begin; iter != end; ++iter) {
    		if(pred(*iter)) count++;
    	}
    	return count;
    }

    // usage:
    int limit = 5;
    auto isMoreThan = [limit] (int n) {return n > limit;};
    std::vector<int> nums = {3, 5, 6, 7, 9, 13};

    count_occurrences(nums.begin(), num.end(), isMoreThan);

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Using Lambdas”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 56</a></span>)</span> 使用 Lambda

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22pageIndex%22%3A55%2C%22rects%22%3A%5B%5B44.498%2C225.607%2C432.396%2C242.197%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=56">“Lambdas are pretty computationally cheap and a great tool!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 56</a></span>)</span>

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“Use a lambda when you need a short function or to access local variables in your function.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 56</a></span>)</span>

    当您需要短函数或访问函数中的局部变量时，请使用 lambda。

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F84Y6IJRW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/84Y6IJRW?page=NaN">“If you need more logic or overloading, use function pointers.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FAHY9QMUS%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/AHY9QMUS">“10: Functions and Lambdas”, p. 56</a></span>)</span>

    如果您需要更多逻辑或重载，请使用函数指针。
