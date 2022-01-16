#include <iostream>
#include <cstring>

//class A {
//private:
//	void private_func() {}
//	int private_num;
//	int x;
//
//	friend class B;
//	
//	friend void func();
//};
//
//class B {
//public:
//	void b() {
//		A a;
//		a.private_func();
//		a.private_num = 2;
//	}
//private:
//	//A는 이 private에 접근 불가.(짝사랑)
//	int y;
//};
//
//void func() {
//	A a;
//	a.private_func();
//	a.private_num = 2;
//}
//
//int main() {}

//class Complex {
//private:
//	double real, img;
//
//	double get_number(const char* str, int from, int to) const;
//
//public:
//	Complex(double real, double img) : real(real), img(img) {}
//	Complex(const Complex& c) { real = c.real, img = c.img; }
//	Complex(const char* str);
//
//	Complex operator+(const Complex& c) const;
//	Complex& operator=(const Complex& c);
//
//	void println() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
//
//	friend Complex operator+(const Complex& a, const Complex& b);
//};
//
//
//
//
//double Complex::get_number(const char* str, int from, int to) const
//{
//	bool minus = false;
//	if (from > to)return 0;
//
//	if (str[from] == '-') minus = true;
//	if (str[from] == '-' || str[from] == '+')from++;
//	double num = 0.0;
//	double decimal = 1.0;
//
//	bool integer_part = 1.0;
//	for (int i = from; i <= to; i++) {
//		if (isdigit(str[i]) && integer_part) {
//			num *= 10.0;
//			num += (str[i] - '0');
//		}
//		else if (str[i] == '.')
//			integer_part = false;
//		else if (isdigit(str[i]) && !integer_part) {
//			decimal /= 10.0;
//			num += ((str[i] - '0') * decimal);
//		}
//		else
//			break;
//	}
//
//	if (minus) num *= -1.0;
//
//	return num;
//}
//
//Complex::Complex(const char* str)
//{
//	int begin = 0, end = strlen(str);
//	img = 0.0;
//	real = 0.0;
//
//	int pos_i = -1;
//	for (int i = 0; i != end; i++) {
//		if (str[i] == 'i') {
//			pos_i = i;
//			break;
//		}
//	}
//
//	if (pos_i == -1) {
//		real = get_number(str, begin, end - 1);
//		return;
//	}
//
//	real = get_number(str, begin, pos_i - 1);
//	img = get_number(str, pos_i + 1, end - 1);
//
//	if (pos_i >= 1 && str[pos_i - 1] == '-')img *= -1.0;
//}
//
//Complex Complex::operator+(const Complex& c) const
//{
//	Complex temp(real + c.real, img + c.img);
//	return temp;
//}
//
//Complex& Complex::operator=(const Complex& c)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//
//int main() {
//	Complex a(0, 0);
//	a = "-1.1 + i3.923 "+ a;
//	a.println();
//}


//class Complex {
//private:
//	double real, img;
//
//	double get_number(const char* str, int from, int to) const;
//
//public:
//	Complex(double real, double img) : real(real), img(img) {}
//	Complex(const Complex& c) { real = c.real, img = c.img; }
//	Complex(const char* str);
//
//	
//	Complex& operator=(const Complex& c);
//
//	void println() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
//
//	friend Complex operator+(const Complex& a, const Complex& b);
//};
//
//
//
//
//double Complex::get_number(const char* str, int from, int to) const
//{
//	bool minus = false;
//	if (from > to)return 0;
//
//	if (str[from] == '-') minus = true;
//	if (str[from] == '-' || str[from] == '+')from++;
//	double num = 0.0;
//	double decimal = 1.0;
//
//	bool integer_part = 1.0;
//	for (int i = from; i <= to; i++) {
//		if (isdigit(str[i]) && integer_part) {
//			num *= 10.0;
//			num += (str[i] - '0');
//		}
//		else if (str[i] == '.')
//			integer_part = false;
//		else if (isdigit(str[i]) && !integer_part) {
//			decimal /= 10.0;
//			num += ((str[i] - '0') * decimal);
//		}
//		else
//			break;
//	}
//
//	if (minus) num *= -1.0;
//
//	return num;
//}
//
//Complex::Complex(const char* str)
//{
//	int begin = 0, end = strlen(str);
//	img = 0.0;
//	real = 0.0;
//
//	int pos_i = -1;
//	for (int i = 0; i != end; i++) {
//		if (str[i] == 'i') {
//			pos_i = i;
//			break;
//		}
//	}
//
//	if (pos_i == -1) {
//		real = get_number(str, begin, end - 1);
//		return;
//	}
//
//	real = get_number(str, begin, pos_i - 1);
//	img = get_number(str, pos_i + 1, end - 1);
//
//	if (pos_i >= 1 && str[pos_i - 1] == '-')img *= -1.0;
//}
//
//
//Complex& Complex::operator=(const Complex& c)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//
//Complex operator+(const Complex& a, const Complex& b)
//{
//	Complex temp(a.real + b.real, a.img + b.img);
//	return temp;
//}
//
//int main() {
//	Complex a(0, 0);
//	a = "-1.1 + i3.923 " + a;
//	a = a + a;
//
//	Complex b(1, 2);
//	b = a + b;
//	b.println();
//}

//class Complex {
//private:
//	double real, img;
//
//	double get_number(const char* str, int from, int to) const;
//
//public:
//	Complex(double real, double img) : real(real), img(img) {}
//	Complex(const Complex& c) { real = c.real, img = c.img; }
//	Complex(const char* str);
//
//	Complex& operator+=(const Complex& c);
//	Complex& operator=(const Complex& c);
//
//	
//	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
//	friend Complex operator+(const Complex& a, const Complex& b);
//};
//
//
//
//
//double Complex::get_number(const char* str, int from, int to) const
//{
//	bool minus = false;
//	if (from > to)return 0;
//
//	if (str[from] == '-') minus = true;
//	if (str[from] == '-' || str[from] == '+')from++;
//	double num = 0.0;
//	double decimal = 1.0;
//
//	bool integer_part = 1.0;
//	for (int i = from; i <= to; i++) {
//		if (isdigit(str[i]) && integer_part) {
//			num *= 10.0;
//			num += (str[i] - '0');
//		}
//		else if (str[i] == '.')
//			integer_part = false;
//		else if (isdigit(str[i]) && !integer_part) {
//			decimal /= 10.0;
//			num += ((str[i] - '0') * decimal);
//		}
//		else
//			break;
//	}
//
//	if (minus) num *= -1.0;
//
//	return num;
//}
//
//Complex::Complex(const char* str)
//{
//	int begin = 0, end = strlen(str);
//	img = 0.0;
//	real = 0.0;
//
//	int pos_i = -1;
//	for (int i = 0; i != end; i++) {
//		if (str[i] == 'i') {
//			pos_i = i;
//			break;
//		}
//	}
//
//	if (pos_i == -1) {
//		real = get_number(str, begin, end - 1);
//		return;
//	}
//
//	real = get_number(str, begin, pos_i - 1);
//	img = get_number(str, pos_i + 1, end - 1);
//
//	if (pos_i >= 1 && str[pos_i - 1] == '-')img *= -1.0;
//}
//
//
//Complex& Complex::operator+=(const Complex& c)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	(*this) = *this + c;
//	return *this;
//}
//
//Complex& Complex::operator=(const Complex& c)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//
//std::ostream& operator<<(std::ostream& os, const Complex& c)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	os << "( " << c.real << " , " << c.img << " ) ";
//	return os;
//}
//
//Complex operator+(const Complex& a, const Complex& b)
//{
//	Complex temp(a.real + b.real, a.img + b.img);
//	return temp;
//}
//
//int main() {
//	Complex a(0, 0);
//	a = "-1.1 + i3.923 " + a;
//	std::cout << "a의 값은 : " << a << " 이다. " << std::endl;
//}
//
//class MyString {
//	char* string_content;
//	int string_length;
//
//	int memory_capacity;
//
//public:
//	MyString(char c);
//
//	MyString(const char* str);
//
//	MyString(const MyString& str);
//
//	~MyString();
//
//	int length();
//
//	void print() const;
//	void println() const;
//	
//	char& operator[](const int index);
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
//	for (int i = 0; i != string_length; i++)string_content[i] = str[i];
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
//MyString::~MyString() { delete[] string_content; }
//
//int MyString::length() { return string_length; }
//
//void MyString::print() const
//{
//	for (int i = 0; i < string_length; i++)
//		std::cout << string_content[i];
//}
//
//void MyString::println() const
//{
//	for (int i = 0; i < string_length; i++)
//		std::cout << string_content[i];
//	std::cout << std::endl;
//}
//
//char& MyString::operator[](const int index)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	return string_content[index];
//}
//
//int main()
//{
//	MyString str("abcdef");
//	str[3] = 'c';
//
//	str.println();
//	return 0;
//}


//rapped
// 
//class Int
//{
//	int data;
//
//public:
//	Int(int data) : data(data) {}
//	Int(const Int& i) : data(i.data) {}
//
//	operator int() { return data; }
//};
//
//int main() {
//	Int x = 3;
//	int a = x + 4;
//	x = a * 2 + x + 4;
//	std::cout << x << std::endl;
//}

class Test
{
	int x;
public:
	Test(int x) :x(x) {}
	Test(const Test& t) :x(t.x) {}
	//전위증감은 인자없고
	Test& operator++() {
		x++;
		std::cout << "전위 증감 연산자" << std::endl;
		return *this;
	}
	//후위증감은 인자있음
	//후위는 복사생성자를 만들기 때문에 전위보다 느림.
	Test& operator++(int) {
		Test temp(*this);
		x++;
		std::cout << "후위 증감 연산자" << std::endl;
		return temp;
	}

	int get_x() const {
		return x;
	}
	

};

void func(const Test& t) { std::cout << "x : " << t.get_x() << std::endl; }

int main() {
	Test t(3);

	func(++t);
	func(t++);
	std::cout << "x : " << t.get_x() << std::endl;
}