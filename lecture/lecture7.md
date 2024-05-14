## lecture7 class

### 类简介

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%228%22%2C%22position%22%3A%7B%22pageIndex%22%3A7%2C%22rects%22%3A%5B%5B133.117%2C254.557%2C586.595%2C312.846%5D%2C%5B111.906%2C196.957%2C607.698%2C255.246%5D%2C%5B115.516%2C139.357%2C603.82%2C197.646%5D%2C%5B231.367%2C81.757%2C488.359%2C140.046%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=8">“Class: A programmerdefined custom type. An abstraction of an object or data type.”</a></span>

类：由程序员定义的特殊类型。是对一种对象或者数据类型的抽象

~~但是这个问题已经有~~`struct` <u>了</u>

`struct` 弊端：

*   内部成员默认是`public` 型
*   使用者需要初始化每个成员变量

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2218%22%2C%22position%22%3A%7B%22pageIndex%22%3A17%2C%22rects%22%3A%5B%5B62.909%2C326.206%2C312.269%2C362.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=18">“Recall: namespaces”</a></span>

*   将代码放到逻辑集合中来避免命名冲突
*   每个类有自己的命名空间
*   调用/使用命名空间的东西语法:`namespace_name::name`

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2236%22%2C%22position%22%3A%7B%22pageIndex%22%3A35%2C%22rects%22%3A%5B%5B62.909%2C326.206%2C218.339%2C362.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=36">“Destructors”</a></span>

*   删除总是发生在类的析构函数中的
*   析构函数定义:`Class_name::~Class_name()`
*   不要显式调用它。只有当`Class_name` 类越界时才会被调用。
*   就像其他成员函数，在`.h` 中声明，在`.cpp` 中实现

### 模版类

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">“Fundamental Theorem of Software Engineering: Any problem can be solved by adding enough layers of indirection.”</a></span> 软件工程基本定理：任何问题都可以通过添加足够的间接层来解决。

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">“The problem with StrVector”</a></span> StrVector 的问题

1.  设计的`vector` 应该包含任何数据类型

    *   这可能会要创建多种类比如`IntVector` , `DoubleVecor` 等

2.  如果不想为每个类型都单独写一个类呢？

    *   模版类

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2248%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">“Template Class: A class that is parametrized over some number of types. A class that is comprised of member variables of a general type/types.”</a></span> 模板类：在一定数量的类型上参数化的类。由通用类型的成员变量组成的类。

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2261%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">“Templates don’t emit code until instantiated, so include the .cpp in the .h instead of the other way around!”</a></span> 模板在实例化之前不会发出代码，因此将 .cpp 包含在 .h 中，而不是相反！

    // vector.h
    template <typename T>
    class vector<T> {
    T at(int i);
    }；

    // vector.cpp
    #include "vector.h"
    template <typename T>
    void vector<T>::at(int i) {
    }
     
    // main.cpp
    #include "vector.h"
    vector<int> a;
    a.at(5);

以上伪代码在实现时会出现编译错误

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">“What the C++ compiler does with non-template classes”</a></span> C++ 编译器对非模板类做什么？

    //main.cpp
    #include "vectorint.h"
    vectorInt a;
    a.at(5);

1.  `g++ -c vectorint.cpp main.cpp` :编译并创建 vectorint.cpp 和 main.cpp 中的所有代码。 vectorint.h 中的所有函数都有已编译的实现，main 可以访问它们，因为它包含了 vectorint.h

2.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2265%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">““Oh look she used vectorInt::at, sure glad I compiled all that code and can access vectorInt::at right now!””</a></span>

    “哦，看看她使用了 vectorInt::at，我很高兴我编译了所有这些代码并且现在就可以访问 vectorInt::at！”

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2266%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">“What the C++ compiler does with template classes”</a></span> C++ 编译器对模板类做什么?

    //main.cpp
    #include "vector.h"
    vectorInt a;
    a.at(5);

1.  `g++ -c vectorint.cpp main.cpp` :编译并创建 vectorint.cpp 和 main.cpp 中的所有代码。 但由于`vector` 是模版类，这不会创建任何代码

2.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2267%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">““Oh look she made a vector&#x3C;int>! Better go generate all the code for one of those!””</a></span>

    “哦，看她做了一个向量\<int>！最好为其中之一生成所有代码！”

3.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2269%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">““Oh no! All I have access to is vector.h! There’s no implementation for the interface in that file! And I can’t go looking for vector&#x3C;int>.cpp!””</a></span>

    “不好了！我所能访问的只是vector.h！该文件中没有该接口的实现！而且我无法去寻找 vector\<int>.cpp！”

此时需要做出改变，将`vector.cpp` 的代码包含在`vector.h` 中

    // vector.h
    #include "vector.cpp"
    template <typename T>
    class vector<T> {
    T at(int i);
    }；

    // vector.cpp
    #include "vector.h"
    template <typename T>
    void vector<T>::at(int i) {
    }
     
    // main.cpp
    #include "vector.h"
    vector<int> a;
    a.at(5);

1.  `g++ -c vectorint.cpp main.cpp` :编译并创建 vectorint.cpp 和 main.cpp 中的所有代码。 但由于`vector` 是模版类，这不会创建任何代码

2.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2267%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">““Oh look she made a vector&#x3C;int>! Better go generate all the code for one of those!””</a></span>

    “哦，看她做了一个向量\<int>！最好为其中之一生成所有代码！”

3.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2F3UBVNSVE%22%2C%22pageLabel%22%3A%2272%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/3UBVNSVE?page=NaN">““vector.h includes all the code in vector.cpp, which tells me how to create a vector&#x3C;int>::at function :)””</a></span>

    “vector.h 包含了 vector.cpp 中的所有代码，它告诉我如何创建一个 vector\<int>::at 函数:)”
