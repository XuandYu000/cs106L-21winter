### lecture9 template\_functions

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2210%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2210%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“Generic Programming”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2210%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 10</a></span>)</span> 泛型

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2213%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2213%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“C++ is strongly typed, but generic C++ lets you parametrize data types!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2213%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 13</a></span>)</span> C++ 是强类型的，但泛型 C++ 允许您参数化数据类型！

    int myMin(int a, int b) {
        return a < b ? a : b;
    }

可以通过函数重载解决一部分问题（设置`int`,`string`等）

### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2222%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2222%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“Template Functions”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2222%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 22</a></span>)</span> 模板函数

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2223%22%2C%22position%22%3A%7B%22pageIndex%22%3A22%2C%22rects%22%3A%5B%5B44.498%2C243.216%2C345.092%2C259.806%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2223%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=23">“Just like classes, they work regardless of type!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2223%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 23</a></span>)</span>

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2227%22%2C%22position%22%3A%7B%22pageIndex%22%3A26%2C%22rects%22%3A%5B%5B44.5%2C270.261%2C186.145%2C295.146%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2227%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=27">“Default Types”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2227%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 27</a></span>)</span>“We can define default parameter types!” (“09: Template Functions”, p. 27)

    template <typename Type = int>
    Type myMin(Type a, Type b) {
        return a < b ? a : b;
    }

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2229%22%2C%22position%22%3A%7B%22pageIndex%22%3A28%2C%22rects%22%3A%5B%5B44.5%2C270.261%2C317.101%2C295.146%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2229%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=29">“Calling template functions”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2229%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 29</a></span>)</span>

可以显示调用函数

    template <typename Type = int>
    Type myMin(Type a, Type b) {
        return a < b ? a : b;
    }

    cout<<myMin<int>(3, 4) <<endl;

也可以隐式使用交给编译器来推断类型

    templte<typename T, typename U>
    auto smarterMymin(T a, U b) {
        return a < b ? a : b;
    }
    cout<<myMin(3.2, 4) <<endl;

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2237%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2237%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“Behind the Instantiation Scenes”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2237%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 37</a></span>)</span> 实例化场景的背后

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“For each instantiation with different parameters, the compiler generates a new specific version of your template”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”</a></span>)</span>

    对于具有不同参数的每个实例化，编译器都会生成模板的新特定版本

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2237%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2237%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“After compilation, it will look like you wrote each version yourself”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2237%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 37</a></span>)</span>

    编译后，看起来每个版本都是你自己写的

### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEMPL2YVJ%22%2C%22pageLabel%22%3A%2241%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2241%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/EMPL2YVJ?page=NaN">“Template Metaprogramming”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FEYD4UGSB%22%5D%2C%22locator%22%3A%2241%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/EYD4UGSB">“09: Template Functions”, p. 41</a></span>)</span> 模板元编程

通常代码在运行时运行

在模版元编程模型下，代码只在编译时运行一次从而提高效率
