```cpp
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
```

```cpp
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
```

```cpp
//main.cpp
std::string stringify(const Student& s) {
	return s.getName() + " is " + std::to_string(s.getAge()) + " years old.";
}
// complie error!
```

```cpp
class StrVector {
public:
	using iterator = std::string*;
	const size_t kInitialSize = 2;

	size_t size();
	bool empty();
	std::string& at(size_t index);
	const std::string& at(size_t indx) const;
	void insert(size_t pos, const std::string& elem);
	void push_back(const std::string& elem);

	iterator begin();
	iterator end();
}
```

```cpp
void printVec(const StrVector& vec) {
	cout<<"{ ";
	for(auto it = vec.begin(); it != vec.end(); ++it) {
		cout<<*it<<endl;
	}
	cout<<" }"<<endl;
}
```

```cpp
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
```

```cpp
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
```

```cpp
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
```

```cpp
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
```

```cpp
template <typename InputIt, typename BinPred>
int count_occurrences(InputIt begin, Input end, BinPred pred) {
	int count = 0;
	for (auto iter = begin; iter != end; ++iter) {
		if(pred(*iter, ???) count++;
	}
	return count;
}
```

```cpp
int limit = 5;
auto isMoreThan = [limit] (int n) {return n > limit;};
isMoreThan(6);
```

```cpp
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
```

```cpp
class PasswordManager {
	public:
		PasswordManager();
		PasswordManager(const PasswordManager& pm) = default;
		~PasswordManager();

		PasswordManager(const PasswordManager& rhs) = delete;
		PasswordManager& operator = (const PasswordManager& rhs) = delete;
}
```

```cpp
Widget(Widget&& ) = default;
Widget& operator = (Widget&& ) = default; // This support move

Widget(const Widget&) = default;
Widget& operator=(const Widget&) = default;// This support copy
```

```cpp
int main() {
	int x = 1;
	change(x); //this will call version 2
	change(7);//this will call version 1
}
void change(int&& num) {……} //version 1 take r-values
void change(int& num) {……} //version 2 take l-values
```

```cpp
void main() {
	std::optional<int> num1 = {}; //num1 does not have a value
	num1 = std::optional<int>{1}; // now it does!
	num1 = std::nullopt; // now it doesn't
}
```