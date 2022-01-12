#include <iostream>

//class MyString {
//	char* string_content;
//	int string_length;
//
//	int memory_capacity;
//
//public:
//	explicit MyString(int capacity);
//
//	MyString(const char* str);
//
//	MyString(const MyString& str);
//
//	~MyString();
//
//	int length();
//};
//
//
//
//MyString::MyString(int capacity)
//{
//	string_content = new char[capacity];
//	string_length = 0;
//	memory_capacity = capacity;
//	std::cout << "Capacity : " << capacity << std::endl;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = 0;
//	while (str[string_length++]){
//	}
//	string_content = new char[string_length];
//	memory_capacity = string_length;
//
//	for (int i = 0; i != string_length; i++) string_content[i] = str[i];
//}
//
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//	{
//		string_content[i] = str.string_content[i];
//	}
//}
//
//MyString::~MyString()
//{
//	delete[] string_content;
//}
//
//int MyString::length()
//{
//	return string_length;
//}
//
//void DoSomethingWithString(MyString s) {
//
//}
//
//int main()
//{
//	//DoSomethingWithString(3);
//
//}

//class A {
//	int data_;
//
//public:
//	A(int data) : data_(data){}
//	void DoSomething(int x) const {
//		data_ = x;
//	} // const 함수 안에서 멤버변수에 값을 대입하는것은 허용치 않는다.
//	void PrintData() const { std::cout << "data : " << data_ << std::endl; }
//};
//
//int main() {
//	A a(10);
//	a.(10);
//	a.DoSomething(3);
//	a.PrintData();
//}

//class A {
//	mutable int data_;
//
//public:
//	A(int data) : data_(data) {}
//	void DoSomething(int x) const {
//		data_ = x;
//	} // mutable을 쓰면 가능하다.
//	// mutable을 쓰는 이유 : const 함수 안에서 해당 멤버 변수에 const가 아닌 작업을 할 수 있게 만들어 준다.
//	void PrintData() const { std::cout << "data : " << data_ << std::endl; }
//};
//
//int main() {
//	A a(10);
//	a.DoSomething(3);
//	a.PrintData();
//}

class Server {
	User GetUserInfo(const int user_id) const {
		Data user_data = Database.find(user_id);

		return User(user_data);
	}
	/*
		const를 선언하는 이유. 멤버 함수들은 이 객체는 이러이러한 일을 할 수 있다는 의미.
		멤버 함수를 const 이 함수는 객체의 내부 상태에 영향을 주지 않는다. 를 표현하는 방법.

	*/
};