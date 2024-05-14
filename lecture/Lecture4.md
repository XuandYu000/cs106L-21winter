## Lecture4

### What are streams?

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22pageLabel%22%3A%2211%22%2C%22position%22%3A%7B%22pageIndex%22%3A10%2C%22rects%22%3A%5B%5B135.352%2C281.178%2C607.252%2C332.181%5D%2C%5B135.352%2C230.778%2C539.308%2C281.781%5D%2C%5B135.352%2C180.378%2C598.594%2C231.381%5D%2C%5B135.352%2C129.978%2C602.076%2C180.981%5D%2C%5B133.055%2C79.578%2C277.236%2C130.581%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=11">“stream: an abstraction for input/output. Streams convert between dataand the stringrepresentation ofdata.”</a></span>

流: 对输入输出的一种抽象。留在数据和数据的字符串表示形式之间进行转换。

典型流: `cout` 可以打印任何初始类型和大多数STL类型。

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22pageLabel%22%3A%2220%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=NaN">“std::cout is an output stream.It has type std::ostream”</a></span> std::cout 是一个输出流。它的类型为 std::ostream

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22pageLabel%22%3A%2227%22%2C%22position%22%3A%7B%22pageIndex%22%3A26%2C%22rects%22%3A%5B%5B8.909%2C338.206%2C381.119%2C374.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=27">“Two ways to classify streams”</a></span> 流分类的两种方法

1.  By Direction:

|                      |                              |
| -------------------- | ---------------------------- |
| Input streams        | reading data(‘std::istream‘) |
| Output streams       | writing data(‘std::ostream‘) |
| Input/Output streams | both(‘std::iostream‘)        |

2\. By Source or Destination:

|                 |                                            |
| --------------- | ------------------------------------------ |
| Console streams | read/write to console(‘std::out‘)          |
| File streams    | read/write to files(‘std::fstream‘)        |
| String streams  | read/write to strings(‘std::stringstream‘) |

### Output Streams

1.  有类型\`std::ostream\`

2.  只能够向流中发送数据

    1.  使用\`<<\`运算符来和流交互
    2.  将任何类型转换为字符串并且发送到流中

3.  std::cout 是转到控制台的输出流

### Output File Streams

1.  类型\`std::ofstream\`

2.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22pageLabel%22%3A%2232%22%2C%22position%22%3A%7B%22pageIndex%22%3A31%2C%22rects%22%3A%5B%5B42.75%2C265.067%2C490.883%2C295.962%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=32">“Only send data using the &#x3C;&#x3C; operator”</a></span>

    *   将任意类型的数据转换为字符串并发送给文件流

3.  必须初始化链接到您的文件的您自己的 ofstream 对象

<!---->

    std::ofstream out("out.txt");
    // out 现在是一个输出流输出目标是out.txt
    out<<5<<std::endl; //在out.txt中输出5

### Input Streams

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22pageLabel%22%3A%2242%22%2C%22position%22%3A%7B%22pageIndex%22%3A41%2C%22rects%22%3A%5B%5B62.909%2C326.206%2C413.939%2C362.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=42">“A note about nomenclature”</a></span>:关于命名的解释

*   \`>>\`是流提取操作符（从流中提取数据并把它置于变量中）
*   \`<<\`是流插入操作符(将数据从流中输出到文件，控制台或者字符串)

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=NaN">“Input Streams”</a></span> 输入流

*   \`std::istream\`
*   只能使用\`>>\`来获取字符串
*   std::cin 是从控制台获取输入的输入流

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=NaN">“Nitty Gritty Details: std::cin”</a></span> 详细信息：std::cin

*   第一次调用 std::cin >> 创建一个命令行提示符，允许用户键入直到按 Enter 键

*   每个 >> 只读取直到下一个空格

    *   <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22pageLabel%22%3A%2250%22%2C%22position%22%3A%7B%22pageIndex%22%3A49%2C%22rects%22%3A%5B%5B103.293%2C201.662%2C467.283%2C228.898%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=50">“Whitespace = tab, space, newline”</a></span>

*   第一个空格之后的所有内容都会被保存并在下次调用 std::cin >> 时使用

    *   它保存的地方称为缓冲区！

*   如果缓冲区中没有任何内容，则 std::cin >> 创建一个新的命令行提示符

*   空格被吃掉；它不会出现在输出中

#### Input Streams: When things go wrong

第一种情况：当cin输入出错时不会发生崩溃，而是会存0来暗示错误

    std::string str;
    int x;
    std::cin >> str >> x;
    std::cout << str << " " << x <<std::endl;

对于以下代码

    std::string str;
    int x;
    std::string otherStr;
    //what happens if input is blah blah blah? std::cin >> str >> x>>otherStr; std::cout << str << " " << x << " " <<otherStr<< std::endl;

|          |         |
| -------- | ------- |
| str      | blah    |
| x        | 0       |
| otherStr | NOTHING |

once an error is detected, the input stream’s fail bit is set, and it will no longer accept input

第二种情况：当输入数据类型不对时，比如接受int但是输入double，会读取直到找到不是 int 的东西！

```
// 输入2.14
int age; double hourlyWage;
cin>>age; // age 2
cin>>hourlyWage; // hourlyWage 0.14

```

### Questions

#### std::getline()

    //Used to read a line from an input stream
    //Function Signature
    istream& getline(istream& is, string& str, char delim);

*   is: getline reads from
*   str: stores output in
*   delim: Stops when read.’\n’=default

##### How it works:

1.  清空str

2.  从`is`中提取字符并且存在 `str`中,直到：

    *   文件读取完,设置`EOF` 位（checked using is.eof()）
    *   `is`下一个字符在`delim`中,会提取但是不会存储
    *   `str` 超出内存， 设置`FAIL` 位（checked using is.fail()）

3.  <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=NaN">“If no chars extracted for any reason, FAIL bit set”</a></span>

    如果由于任何原因没有提取到字符，则设置 FAIL 位

##### diffs

*   “>>“只会读取直到空格为止， 不能读入整个句子
*   “>>“会把读入的数据转化为对应的数据类型，getline只能产生字符串
*   “>>“只能停在预先定义好的空格, getline的停止可以自定义

### Don’t mix >> with getline

*   \>> 读取直到下一个空白字符并且不会超过该空白字符。
*   getline 读取到下一个分隔符（默认情况下为“\n”），并且确实会越过该分隔符。

### <span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FADH9AMPJ%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/ADH9AMPJ?page=NaN">“Stringstreams”</a></span> 字符串流

*   What: A stream that can read from or write to a string object
*   Purpose: Allows you to perform input/output operations on a string as if it were a stream

<!---->

    #include<bits/stdc++.h>

    int main() {
        std::string input = "123";
        std::stringstream stream(input);
        int num;
        stream >> num;
        std::cout << num << std::endl; // outputs 123
    }
