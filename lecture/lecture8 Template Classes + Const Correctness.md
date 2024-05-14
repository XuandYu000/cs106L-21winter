## lecture8 Template Classes + Const Correctness

### Classes Recap

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%228%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Template Class: A class that is parametrized over some number of types. A class that is comprised of member variables of a general type/types.”</a></span> 模板类：在一定数量的类型上参数化的类。由通用类型的成员变量组成的类。

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%228%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Writing a Template Class: Syntax”</a></span> 编写模板类：语法

    // mypair.h
    template<typename First, typename Second> class MyPair{
    	public:
    		First getFirst();
    		Second getSecond();
    		void setFirst(First f);
    		void setSecond(Second f);
    	private:
    		First first;
    		Second second;
    };

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%229%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Use generic typenames as placeholders!”</a></span> 使用通用类型名称作为占位符！

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Implementing a Template Class: Syntax”</a></span> 实现模板类：语法

    // mypair.cpp
    #include "mypair.h"

    template<class First, typename Second>
    First Mypair<First, Second>::getFirst(){
    	return first;
    }

### Template Classes

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Member Types”</a></span> 成员类型

*   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Sometimes, we need a name for a type that is dependent on our template types”</a></span>

    有时，我们需要一个依赖于我们的模板类型的类型名称

*   Recall: iterators

<!---->

    std::vector<int> a = {1, 2};
    std::vector<int>::iterator it = a.begin();

*   在这里`iterator` 是`vector` 的成员类型

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Member Types: Syntax”</a></span> 成员类型：语法

    // vector.h
    template<typename T> class vector{
    	public:
    	using iterator = T*;

    	iterator begin();
    }

<!---->

    // vector.cpp
    typename vector<T>::iterator vector<T>::begin() {}

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Aside: Type Aliases”</a></span> 类型别名

*   可以在应用代码中使用`using type_name=type`
*   当在类接口中使用类型别名时，它会定义一个简洁类型就像`vector::iterator`
*   当在应用代码中使用时（比如`main.cpp`）会在范围内为`type` 创建另一个名字

### Const Correctness

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“const: keyword indicating a variable, function or parameter can’t be modified”</a></span> const：关键字，表示变量、函数或参数不能被修改

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2255%22%2C%22position%22%3A%7B%22pageIndex%22%3A54%2C%22rects%22%3A%5B%5B62.909%2C325.4%2C351.976%2C362.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=55">“Recall: Student class”</a></span>

    // student.h
    class Student {
    	public:
    	std::string getName();
    	void setName(string name);
    	int getAge();
    	void setAge(int age);

    	private:
    	std::string name;
    	std::string state;
    	int age;
    };

<!---->

    // student.cpp
    #include "student.h"
    std::string Student::getName(){
    	return name;
    }
    void Student::setName(string name) {
    	this->name = name;
    }
    int Student::getAge() {
    	return age;
    }
    void Student::setAge(int age) {
    	if(age>=0) {
    		this->age = age;
    	}
    	else error("Age cannot be negative!");
    }

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2257%22%2C%22position%22%3A%7B%22pageIndex%22%3A56%2C%22rects%22%3A%5B%5B44.909%2C331.4%2C383.089%2C368.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=57">“Using a const Student”</a></span>

    //main.cpp
    std::string stringify(const Student& s) {
    	return s.getName() + " is " + std::to_string(s.getAge()) + " years old.";
    }
    // complie error!

*   编译器不知道`getName` 和 `getAge` 会改变s
*   我们需要保证将以上函数设为`const function`
*   将`add` 假如函数签名后

<!---->

    // student.h
    class Student {
    	public:
    	std::string getName() const;
    	void setName(string name);
    	int getAge() const;
    	void setAge(int age);

    	private:
    	std::string name;
    	std::string state;
    	int age;
    };

<!---->

    // student.cpp
    #include "student.h"
    std::string Student::getName()const{
    	return name;
    }
    void Student::setName(string name) {
    	this->name = name;
    }
    int Student::getAge() const{
    	return age;
    }
    void Student::setAge(int age) {
    	if(age>=0) {
    		this->age = age;
    	}
    	else error("Age cannot be negative!");
    }

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“const-interface: All member functions marked const in a class definition. Objects of type const ClassName may only use the const-interface.”</a></span> const-interface：类定义中标记为 const 的所有成员函数。 const ClassName 类型的对象只能使用 const 接口。

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2261%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Making StrVector‘s const-interface”</a></span> 制作 StrVector 的 const 接口

    class StrVector {
    public:
    	using iterator = std::string*;
    	const size_t kInitialSize = 2;

    	size_t size();
    	bool empty();
    	std::string& at(size_t index);
    	void insert(size_t pos, const std::string& elem);
    	void push_back(const std::string& elem);

    	iterator begin();
    	iterator end();
    }

<!---->

    class StrVector {
    public:
    	using iterator = std::string*;
    	const size_t kInitialSize = 2;

    	size_t size() const;
    	bool empty() const;
    	std::string& at(size_t index);
    	const std::string& at(size_t indx) const;
    	void insert(size_t pos, const std::string& elem);
    	void push_back(const std::string& elem);

    	iterator begin();
    	iterator end();
    }

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2264%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Should begin() and end() be const?”</a></span> begin() 和 end() 应该是 const 吗？

    void printVec(const StrVector& vec) {
    	cout<<"{ ";
    	for(auto it = vec.begin(); it != vec.end(); ++it) {
    		cout<<*it<<endl;
    	}
    	cout<<" }"<<endl;
    }

看起来将其设为`const` 是可行的，但会发生什么错误？

    void printVec(const StrVector& vec) {
    	cout<<"{ ";
    	for(auto it = vec.begin(); it != vec.end(); ++it) {
    	*it = "dont mind me modifying a const vector :D";”
    	}
    	cout<<" }"<<endl;
    }

以上代码会编译通过！因为`begin()` 和`end()` 并不会显式改变vec,但是这个`itertor` 确实可以改变的

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2267%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Problem: we need a way to iterate through a const vec just to access it”</a></span> 问题：我们需要一种方法来迭代 const vec 来访问它（仅限访问与迭代但是不能更改）

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2268%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Solution: cbegin() and cend()”</a></span> 解决方案：cbegin() 和 cend()

    class StrVector {
    public:
    	using iterator = std::string*;
    	using const_iterator = const std::string*;
    	const size_t kInitialSize = 2;

    	size_t size() const;
    	bool empty() const;
    	std::string& at(size_t index);
    	const std::string& at(size_t indx) const;
    	void insert(size_t pos, const std::string& elem);
    	void push_back(const std::string& elem);

    	iterator begin();
    	iterator end();
    	const_iterator begin() const;
    	const_iterator end() const;
    }

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2269%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=NaN">“Abilities of Iterator Permutations”</a></span> 迭代器排列的能力

|                       |                     |                          |
| --------------------- | ------------------- | ------------------------ |
| Iterator Type         | Increment Iterator? | Change underlying value? |
| iterator              | Y                   | Y                        |
| const\_iterator       | Y                   | N                        |
| const iterator        | N                   | Y                        |
| const const\_iterator | N                   | N                        |

可以这么理解：

`string*` 可以看作数组的头指针即数组

`const string*` 是将数组声明为常数数组内部不能更改,但是数组迭代可以

`const iterator` 是将指针所指空间声明常量，不能迭代（会改变指针所指位置）但是可以更改指针空间内存的东西

`const const_iterator` 是将数组和指针所指地址均视作常量均不能更改

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FNT9EZGZ5%22%2C%22pageLabel%22%3A%2273%22%2C%22position%22%3A%7B%22pageIndex%22%3A72%2C%22rects%22%3A%5B%5B6.75%2C343.55%2C576.63%2C379.981%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/NT9EZGZ5?page=73">“const iterator vs const_iterator: Nitty Gritty”</a></span>

    using iterator = std::string*;
    using const_iterator = const std::string*;

    const iterator it_c = vec.begin();//string * const, const ptr to non-const obj
    *it_c = "hi"; //OK! it_c is a const pointer to non-const object
    it_c++; //not ok! can’t change where a const pointer points!

    const_iterator c_it = vec.begin(); //const string*, a non-const ptr to const obj
    c_it++; // totally ok! The pointer itself is non-const
    *c_it = "hi" // not ok! Can’t change underlying const object
    cout << *c_it << endl; //allowed! Can always read a const object, just can't change

    //const string * const, const ptr to const obj
    const const_iterator c_it_c = vec.begin();
    cout << c_it_c << " points to " << *c_it_c << endl; //only reads are allowed!
    c_it_c++; //not ok! can’t change where a const pointer points!
    *c_it_c = "hi" // not ok! Can’t change underlying const object
