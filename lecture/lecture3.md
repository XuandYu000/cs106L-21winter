<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22pageLabel%22%3A%2226%22%2C%22position%22%3A%7B%22pageIndex%22%3A25%2C%22rects%22%3A%5B%5B39.155%2C269.878%2C363.18%2C290.269%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=26">“auto a, b, c; //compile error!”</a></span> :

$auto$ 不能用于声明变量

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22pageLabel%22%3A%2231%22%2C%22position%22%3A%7B%22pageIndex%22%3A30%2C%22rects%22%3A%5B%5B34.919%2C326.886%2C685.08%2C364.29%5D%2C%5B206.73%2C283.686%2C513.27%2C321.09%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=31">“Structured binding lets you initialize directly from the contents of a struct”</a></span>

结构化绑定允许您直接从结构的内容进行初始化\
before:

    auto p = std::make_pair("s",5);
    string a = p.first;
    int b = p.second;

after:

    auto p = std::make_pair("s",5);
    auto [a,b] = p;

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=NaN">“Reference: An alias (another name) for a named variable”</a></span> 参考：命名变量的别名（另一个名称）

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=NaN">““=” automatically makes a copy! Must use &#x26; to avoid this.”</a></span> “=”自动复制！必须使用 & 来避免这种情况。

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22pageLabel%22%3A%2256%22%2C%22position%22%3A%7B%22pageIndex%22%3A55%2C%22rects%22%3A%5B%5B6.75%2C326.206%2C632.46%2C362.636%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=56">“Note: You can only create references to variables”</a></span>: 只能对变量创建引用

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22position%22%3A%7B%22rects%22%3A%5B%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=NaN">“Can’t declare non-const reference to const variable!”</a></span> 无法声明对 const 变量的非常量引用！

<span class="highlight" data-annotation="%7B%22attachmentURI%22%3A%22http%3A%2F%2Fzotero.org%2Fusers%2F14003431%2Fitems%2FIYS9LB6U%22%2C%22pageLabel%22%3A%2270%22%2C%22position%22%3A%7B%22pageIndex%22%3A69%2C%22rects%22%3A%5B%5B6.75%2C324.972%2C613.296%2C362.617%5D%2C%5B18.583%2C286.956%2C640.927%2C316.668%5D%2C%5B44.911%2C258.156%2C664.927%2C287.412%5D%2C%5B44.911%2C229.356%2C592.351%2C258.612%5D%2C%5B18.583%2C190.556%2C647.671%2C220.268%5D%2C%5B44.911%2C161.756%2C219.343%2C191.012%5D%2C%5B18.583%2C122.956%2C665.143%2C152.668%5D%2C%5B44.911%2C94.156%2C680.191%2C123.412%5D%5D%7D%7D" ztype="zhighlight"><a href="zotero://open-pdf/library/items/IYS9LB6U?page=70">“When do we use references/const references? - If we’re working with a variable that takes up little space in memory (e.g. int, double), we don’t need to use a reference and can just copy the variable - If we need to alias the variable to modify it, we can use references - If we don’t need to modify the variable, but it’s a big variable (e.g. std::vector), we can use const references”</a></span>
