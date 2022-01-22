#include <iostream>
#include <string>

//class Base {
//	std::string s;
//
//public:
//	Base() : s("기반") { std::cout << "기반 클래스" << std::endl; }
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived :public Base {
//	std::string s;
//
//public:
//	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	std::cout << " === 기반 클래스 생성 ===" << std::endl;
//	Base p;
//
//	p.what();
//
//	std::cout << " === 파생 클래스 생성 ===" << std::endl;
//	Derived c;
//
//	c.what();
//	
//	return 0;
//}

//class Base {
//	std::string s;
//
//public:
//	Base() : s("기반") { std::cout << "기반 클래스" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base {
//	std::string s;
//public:
//	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	Base p;
//	Derived c;
//
//	std::cout << "=== 포인터 버젼 ===" << std::endl;
//	Base* p_c = &c;
//	p_c->what();
//
//	return 0;
//}

class Base {
	std::string s;
	
	public:
		Base() :s("기반") { std::cout << "기반 클래스" << std::endl; }

		void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
	std::string s;

public:
	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }

	void what() { std::cout << s << std::endl; }
};

int main() {
	Base p;
	Derived c;

	std::cout << "=== 포인터 버젼 ===" << std::endl;
	Derived* p_p = &p;
	p_p->what();

	return 0;
}