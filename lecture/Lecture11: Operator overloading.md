### Lecture11: Operator overloading

#### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2212%22%2C%22position%22%3A%7B%22pageIndex%22%3A11%2C%22rects%22%3A%5B%5B44.5%2C270.261%2C268.78%2C295.146%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2212%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=12">“Unordered maps/sets”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2212%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 12</a></span>)</span>

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2212%22%2C%22position%22%3A%7B%22pageIndex%22%3A11%2C%22rects%22%3A%5B%5B80.498%2C190.407%2C421.177%2C206.997%5D%2C%5B80.498%2C165.207%2C169.006%2C181.797%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2212%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=12">“Ordered maps/sets require a comparison operator to be defined.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2212%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 12</a></span>)</span>

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2212%22%2C%22position%22%3A%7B%22pageIndex%22%3A11%2C%22rects%22%3A%5B%5B80.498%2C140.007%2C425.607%2C156.597%5D%2C%5B80.498%2C114.807%2C132.466%2C131.397%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2212%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=12">“Unordered maps/sets require a hash function to be defined.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2212%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 12</a></span>)</span>

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“What operators can we overload?”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”</a></span>)</span> 我们可以重载哪些运算符？

Most of them, actually.

不能被重载的操作符：

Scope Resolution(范围): `::`

Ternary(三目操作符): `?`

Member Access(成员访问), Pointer(指针): `.` `.*`

Object size, type and casting: `sizeof()` `typeid()` `cast()`

### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2234%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2234%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“We can overload operators in two ways:”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2234%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 34</a></span>)</span> 我们可以通过两种方式重载运算符：

1.  成员函数：

    *   在类中声明重载的运算符
    *   使用`this->` 访问成员变量

2.  非成员函数：

    *   在类外声明
    *   需要声明两项实例作为参数

### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2239%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2239%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“Non-member overloading”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2239%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 39</a></span>)</span> 非成员重载

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2239%22%2C%22position%22%3A%7B%22pageIndex%22%3A38%2C%22rects%22%3A%5B%5B44.498%2C225.607%2C364.762%2C242.197%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2239%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=39">“Non-member overloading is preferred by the STL!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2239%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 39</a></span>)</span>

*   “It allows the LHS to be a non-class type (ex. comparing double to a Fraction)

*   Allows us to overload operators with classes we don’t own! (ex. vector to a StudentList)”

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2239%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 39</a></span>)</span>

<!---->

    bool operator< (const Student& lhs, const Student& rhs);

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“What about member variables?”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”</a></span>)</span> 那么成员变量呢？

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2244%22%2C%22position%22%3A%7B%22pageIndex%22%3A43%2C%22rects%22%3A%5B%5B44.5%2C269.205%2C397.292%2C295.146%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2244%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=44">“Everything is better with friends!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2244%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 44</a></span>)</span>

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2244%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2244%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“The friend keyword allows non-member functions or classes to access private information in another class!”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2244%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 44</a></span>)</span> `friend`关键字允许非成员函数或类访问另一个类中的私有信息！

`friend` 使用:

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2246%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2246%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“To use, declare the name of the function or class as a friend within the target class’s header!”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2246%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 46</a></span>)</span>

    要使用，请在目标类的标头中将函数或类的名称声明为友元！

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2246%22%2C%22position%22%3A%7B%22pageIndex%22%3A45%2C%22rects%22%3A%5B%5B80.498%2C114.103%2C423.483%2C131.397%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2246%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=46">“If it’s a class, you must say friend class [name];”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2246%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 46</a></span>)</span>

### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=NaN">“Overloading Strategies”</a></span> <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”</a></span>)</span> 重载策略

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2252%22%2C%22position%22%3A%7B%22pageIndex%22%3A51%2C%22rects%22%3A%5B%5B80.498%2C165.207%2C423.997%2C181.797%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2252%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=52">“Don’t go overboard; it can be confusing if overused.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2252%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 52</a></span>)</span>

### Rules and Philosophy

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22pageIndex%22%3A55%2C%22rects%22%3A%5B%5B80.498%2C225.607%2C365.591%2C242.197%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=56">“Meaning should be obvious when you see it”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 56</a></span>)</span>

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22pageIndex%22%3A55%2C%22rects%22%3A%5B%5B80.498%2C200.407%2C380.178%2C216.997%5D%2C%5B80.498%2C175.207%2C318.96%2C191.797%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=56">“Functionality should be reasonably similar to corresponding arithmetic operations”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 56</a></span>)</span>

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F944GGENW%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22pageIndex%22%3A55%2C%22rects%22%3A%5B%5B80.498%2C124.807%2C432.794%2C141.397%5D%2C%5B80.498%2C99.607%2C132.41%2C116.197%5D%5D%7D%2C%22citationItem%22%3A%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2256%22%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/944GGENW?page=56">“When the meaning isn't obvious, give it a normal name instead.”</a></span>

    <span class="citation" data-citation="%7B%22citationItems%22%3A%5B%7B%22uris%22%3A%5B%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FC35CT7VV%22%5D%2C%22locator%22%3A%2256%22%7D%5D%2C%22properties%22%3A%7B%7D%7D" ztype="zcitation">(<span class="citation-item"><a href="zotero://select/library/items/C35CT7VV">“11: Operator Overloading”, p. 56</a></span>)</span>
