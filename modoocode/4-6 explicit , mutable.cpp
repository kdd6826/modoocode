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
//	} // const �Լ� �ȿ��� ��������� ���� �����ϴ°��� ���ġ �ʴ´�.
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
//	} // mutable�� ���� �����ϴ�.
//	// mutable�� ���� ���� : const �Լ� �ȿ��� �ش� ��� ������ const�� �ƴ� �۾��� �� �� �ְ� ����� �ش�.
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
		const�� �����ϴ� ����. ��� �Լ����� �� ��ü�� �̷��̷��� ���� �� �� �ִٴ� �ǹ�.
		��� �Լ��� const �� �Լ��� ��ü�� ���� ���¿� ������ ���� �ʴ´�. �� ǥ���ϴ� ���.

	*/
};