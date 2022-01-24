#include <iostream>

//class Parent {
//public:
//	Parent() { std::cout << "Parent 생성자 호출" << std::endl; }
//	~Parent() { std::cout << "Parent 소멸자 호출" << std::endl; }
//};
//
//class Child : public Parent {
//public:
//	Child() : Parent() { std::cout << "Child 생성자 호출" << std::endl; }
//	~Child() { std::cout << "Child 소멸자 호출" << std::endl; }
//};
//
//int main() {
//	std::cout << "--- 평범한 Child 만들었을 때 ---" << std::endl;
//	{Child c; }
//	std::cout << "--- Parent 포인터로 Child 가리켰을 때 ---" << std::endl;
//	{
//		Parent* p = new Child();
//		delete p;
//	}
//}

//class Parent {
//public:
//	Parent() { std::cout << "Parent 생성자 호출" << std::endl; }
//	virtual ~Parent() { std::cout << "Parent 소멸자 호출" << std::endl; }
//
//	//소멸자를 virtual로 해야하는 ㅇㅣ유!..
//};
//
//class Child : public Parent {
//public:
//	Child() : Parent() { std::cout << "Child 생성자 호출" << std::endl; }
//	~Child() { std::cout << "Child 소멸자 호출" << std::endl; }
//};
//
//int main() {
//	std::cout << "--- 평범한 Child 만들었을 때 ---" << std::endl;
//	{Child c; }
//	std::cout << "--- Parent 포인터로 Child 가리켰을 때 ---" << std::endl;
//	{
//		Parent* p = new Child();
//		delete p;
//	}
//}

//class A {
//public:
//	virtual void show() { std::cout << "Parent !" << std::endl; }
//};
//class B : public A {
//public:
//	void show() override { std::cout << "Child!" << std::endl; }
//};
//
//void test(A& a) { a.show(); }
//int main() {
//	A a;
//	B b;
//	test(a);
//	test(b);
//
//	return 0;
//}

//class Animal {
//public:
//	Animal(){}
//	virtual ~Animal() {}
//	virtual void speak() = 0;
//};
//class Dog : public Animal {
//public:
//	Dog() : Animal() {}
//	void speak() override { std::cout << "왈왈" << std::endl; }
//};
//
//class Cat : public Animal {
//public:
//	Cat() : Animal() {}
//	void speak() override { std::cout << "야옹야옹" << std::endl; }
//};
//
//int main() {
//	Animal* dog = new Dog();
//	Animal* cat = new Cat();
//
//	dog->speak();
//	cat->speak();
//}

class A {
public:
	int a;

	A() { std::cout << "A 생성자 호출" << std::endl; }
};

class B {
public:
	int b;

	B() { std::cout << "B 생성자 호출" << std::endl; }
};

class C : public A, public B {
public:
	int c;

	C() : A(), B() { std::cout << "C 생성자 호출" << std::endl; }
};

int main() { C c; }