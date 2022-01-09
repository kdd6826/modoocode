#include <iostream>
//
//class MyString {
//	char* string_content;
//	int string_length;
//public:
//	MyString(char c);
//
//	MyString(const char* str);
//
//	MyString(const MyString& str);
//
//	~MyString() { delete[] string_content; }
//
//	int length() const { return string_length; }
//	MyString& assign(const MyString& str);
//	MyString& assign(const char* str);
//	void print() const;
//	void printIn() const;
//};
//
//MyString::MyString(char c)
//{
//	string_content = new char[1];
//	string_content[0] = c;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = strlen(str);
//	string_content = new char[string_length];
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
//		string_content[i] = str.string_content[i];
//}
//
//MyString& MyString::assign(const MyString& str)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	if (str.string_length > string_length) {
//		delete[] string_content;
//
//		string_content = new char[str.string_length];
//	}
//	for (int i = 0; i != str.string_length; i++) {
//		string_content[i] = str.string_content[i];
//	}
//	string_length = str.string_length;
//
//	return *this;
//}
//
//MyString& MyString::assign(const char* str)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	int str_length = strlen(str);
//	if (str_length > string_length) {
//		delete[] string_content;
//
//		string_content = new char[str_length];
//	}
//	for (int i = 0; i != str_length; i++) {
//		string_content[i] = str[i];
//	}
//	string_length = str_length;
//
//	return *this;
//}
//
//void MyString::print() const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//}
//
//void MyString::printIn() const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//	std::cout << std::endl;
//}
//
//int main() {
//	MyString str1("hello world!");
//	MyString str2(str1);
//
//	str1.printIn();
//	str1.printIn();
//}


//class MyString {
//	char* string_content;
//	int string_length;
//	int memory_capacity;
//public:
//	MyString(char c);
//
//	MyString(const char* str);
//
//	MyString(const MyString& str);
//
//	~MyString() { delete[] string_content; }
//
//	int length() const { return string_length; }
//	MyString& assign(const MyString& str);
//	MyString& assign(const char* str);
//	void print() const;
//	void printIn() const;
//
//	int capacity() { return memory_capacity; }
//	void reserve(int size);
//};
//
//MyString::MyString(char c)
//{
//	string_content = new char[1];
//	string_content[0] = c;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = strlen(str);
//	string_content = new char[string_length];
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
//		string_content[i] = str.string_content[i];
//}
//
//MyString& MyString::assign(const MyString& str)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	if (str.string_length > memory_capacity) {
//		delete[] string_content;
//
//		string_content = new char[str.string_length];
//		memory_capacity = str.string_length;
//	}
//	for (int i = 0; i != str.string_length; i++) {
//		string_content[i] = str.string_content[i];
//	}
//	string_length = str.string_length;
//
//	return *this;
//}
//
//MyString& MyString::assign(const char* str)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	int str_length = strlen(str);
//	if (str_length > memory_capacity) {
//		delete[] string_content;
//
//		string_content = new char[str_length];
//		memory_capacity = str_length;
//	}
//	for (int i = 0; i != str_length; i++) {
//		string_content[i] = str[i];
//	}
//	string_length = str_length;
//
//	return *this;
//}
//
//void MyString::print() const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//}
//
//void MyString::printIn() const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//	std::cout << std::endl;
//}
//
//void MyString::reserve(int size)
//{
//	if (size > memory_capacity) {
//		char* prev_string_content = string_content;
//
//		string_content = new char[size];
//		memory_capacity = size;
//		for (int i = 0; i != string_length; i++)
//			string_content[i] = prev_string_content[i];
//		
//		delete[] prev_string_content;
//	}
//}
//
//int main() {
//	MyString str1("hello world!");
//	MyString str2(str1);
//
//	str1.printIn();
//	str1.printIn();
//}
//
//class MyString {
//	char* string_content;
//	int string_length;
//	int memory_capacity;
//
//public:
//	MyString(char c);
//
//	MyString(const char* str);
//
//	MyString(const MyString& str);
//
//	~MyString() { delete[] string_content; }
//
//	int length() const { return string_length; }
//	int capacity() { return memory_capacity; }
//	void reserve(int size);
//
//	void print() const;
//	void printIn() const;
//
//	MyString& assign(const char* str);
//	MyString& assign(const MyString& str);
//
//	char at(int i) const;
//
//};
//
//MyString::MyString(char c)
//{
//	string_content = new char[1];
//	string_content[0] = c;
//	memory_capacity = 1;
//	string_length = 1;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = strlen(str);
//	memory_capacity = string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++) string_content[i] = str[i];
//}
//
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	memory_capacity = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//		string_content[i] = str.string_content[i];
//}
//
//MyString& MyString::assign(const MyString& str)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	if (str.string_length > memory_capacity) {
//		delete[] string_content;
//
//		string_content = new char[str.string_length];
//		memory_capacity = str.string_length;
//	}
//	for (int i = 0; i != str.string_length; i++) {
//		string_content[i] = str.string_content[i];
//	}
//	string_length = str.string_length;
//
//	return *this;
//}
//
//char MyString::at(int i) const
//{
//	if (i >= string_length || i < 0)
//		return NULL;
//	else
//		return string_content[i];
//}
//
//MyString& MyString::assign(const char* str)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	int str_length = strlen(str);
//	if (str_length > memory_capacity) {
//		delete[] string_content;
//
//		string_content = new char[str_length];
//		memory_capacity = str_length;
//	}
//	for (int i = 0; i != str_length; i++) {
//		string_content[i] = str[i];
//	}
//	string_length = str_length;
//
//	return *this;
//}
//
//void MyString::print() const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//}
//
//void MyString::printIn() const
//{
//	for (int i = 0; i != string_length; i++)
//	{
//		std::cout << string_content[i];
//	}
//	std::cout << std::endl;
//}
//
//void MyString::reserve(int size)
//{
//	if (size > memory_capacity) {
//		char* prev_string_content = string_content;
//
//		string_content = new char[size];
//		memory_capacity = size;
//		for (int i = 0; i != string_length; i++)
//			string_content[i] = prev_string_content[i];
//
//		delete[] prev_string_content;
//	}
//}
//
//int main() {
//	MyString str1("very very very long string");
//	str1.reserve(30);
//
//	std::cout << "Capacity : " << str1.capacity() << std::endl;
//	std::cout << "String length : " << str1.length() << std::endl;
//	str1.printIn();
//}


class MyString {
	char* string_content;
	int string_length;
	int memory_capacity;

public:
	MyString(char c);

	MyString(const char* str);

	MyString(const MyString& str);

	~MyString() { delete[] string_content; }

	int length() const { return string_length; }
	int capacity() { return memory_capacity; }
	void reserve(int size);

	void print() const;
	void printIn() const;

	MyString& assign(const char* str);
	MyString& assign(const MyString& str);

	char at(int i) const;

	MyString& insert(int loc, const MyString& str);
	MyString& insert(int loc, const char* str);
	MyString& insert(int loc, char c);
};

MyString::MyString(char c)
{
	string_content = new char[1];
	string_content[0] = c;
	memory_capacity = 1;
	string_length = 1;
}

MyString::MyString(const char* str)
{
	string_length = strlen(str);
	memory_capacity = string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++) string_content[i] = str[i];
}

MyString::MyString(const MyString& str)
{
	string_length = str.string_length;
	memory_capacity = str.string_length;
	string_content = new char[string_length];

	for (int i = 0; i != string_length; i++)
		string_content[i] = str.string_content[i];
}

MyString& MyString::assign(const MyString& str)
{
	// TODO: 여기에 return 문을 삽입합니다.
	if (str.string_length > memory_capacity) {
		delete[] string_content;

		string_content = new char[str.string_length];
		memory_capacity = str.string_length;
	}
	for (int i = 0; i != str.string_length; i++) {
		string_content[i] = str.string_content[i];
	}
	string_length = str.string_length;

	return *this;
}

char MyString::at(int i) const
{
	if (i >= string_length || i < 0)
		return NULL;
	else
		return string_content[i];
}

MyString& MyString::insert(int loc, const MyString& str)
{
	// TODO: 여기에 return 문을 삽입합니다.
	if (loc<0 || loc>string_length) return *this;

	if (string_length + str.string_length > memory_capacity) {
		memory_capacity = string_length + str.string_length;

		char* prev_string_content = string_content;
		string_content = new char[memory_capacity];

		int i;
		for (i = 0; i < loc; i++) {
			string_content[i] = prev_string_content[i];
		}
		for (int j = 0; j != str.string_length; j++)
		{
			string_content[i + j] = str.string_content[j];
		}
		
		for (; i < string_length; i++) {
			string_content[str.string_length + i] = prev_string_content[i];
		}

		delete[] prev_string_content;

		string_length = string_length + str.string_length;
		return *this;
	}

	for (int i = string_length - 1; i >= loc; i--) {
		string_content[i + str.string_length] = string_content[i];
	}
	for (int i = 0; i < str.string_length; i++)
		string_content[i + loc] = str.string_content[i];

	string_length = string_length + str.string_length;
	return *this;
}

MyString& MyString::insert(int loc, const char* str)
{
	// TODO: 여기에 return 문을 삽입합니다.
	MyString temp(str);
	return insert(loc, temp);
}

MyString& MyString::insert(int loc, char c)
{
	// TODO: 여기에 return 문을 삽입합니다.
	MyString temp(c);
	return insert(loc, temp);
}

MyString& MyString::assign(const char* str)
{
	// TODO: 여기에 return 문을 삽입합니다.
	int str_length = strlen(str);
	if (str_length > memory_capacity) {
		delete[] string_content;

		string_content = new char[str_length];
		memory_capacity = str_length;
	}
	for (int i = 0; i != str_length; i++) {
		string_content[i] = str[i];
	}
	string_length = str_length;

	return *this;
}

void MyString::print() const
{
	for (int i = 0; i != string_length; i++)
	{
		std::cout << string_content[i];
	}
}

void MyString::printIn() const
{
	for (int i = 0; i != string_length; i++)
	{
		std::cout << string_content[i];
	}
	std::cout << std::endl;
}

void MyString::reserve(int size)
{
	if (size > memory_capacity) {
		char* prev_string_content = string_content;

		string_content = new char[size];
		memory_capacity = size;
		for (int i = 0; i != string_length; i++)
			string_content[i] = prev_string_content[i];

		delete[] prev_string_content;
	}
}

int main() {
	MyString str1("very very very long string");
	str1.reserve(30);

	std::cout << "Capacity : " << str1.capacity() << std::endl;
	std::cout << "String length : " << str1.length() << std::endl;
	str1.printIn();
}
