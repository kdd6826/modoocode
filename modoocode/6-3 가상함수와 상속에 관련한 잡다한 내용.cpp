#include <iostream>

//class Parent {
//public:
//	Parent() { std::cout << "Parent ������ ȣ��" << std::endl; }
//	~Parent() { std::cout << "Parent �Ҹ��� ȣ��" << std::endl; }
//};
//
//class Child : public Parent {
//public:
//	Child() : Parent() { std::cout << "Child ������ ȣ��" << std::endl; }
//	~Child() { std::cout << "Child �Ҹ��� ȣ��" << std::endl; }
//};
//
//int main() {
//	std::cout << "--- ����� Child ������� �� ---" << std::endl;
//	{Child c; }
//	std::cout << "--- Parent �����ͷ� Child �������� �� ---" << std::endl;
//	{
//		Parent* p = new Child();
//		delete p;
//	}
//}

//class Parent {
//public:
//	Parent() { std::cout << "Parent ������ ȣ��" << std::endl; }
//	virtual ~Parent() { std::cout << "Parent �Ҹ��� ȣ��" << std::endl; }
//
//	//�Ҹ��ڸ� virtual�� �ؾ��ϴ� ������!..
//};
//
//class Child : public Parent {
//public:
//	Child() : Parent() { std::cout << "Child ������ ȣ��" << std::endl; }
//	~Child() { std::cout << "Child �Ҹ��� ȣ��" << std::endl; }
//};
//
//int main() {
//	std::cout << "--- ����� Child ������� �� ---" << std::endl;
//	{Child c; }
//	std::cout << "--- Parent �����ͷ� Child �������� �� ---" << std::endl;
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
//	void speak() override { std::cout << "�п�" << std::endl; }
//};
//
//class Cat : public Animal {
//public:
//	Cat() : Animal() {}
//	void speak() override { std::cout << "�߿˾߿�" << std::endl; }
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

	A() { std::cout << "A ������ ȣ��" << std::endl; }
};

class B {
public:
	int b;

	B() { std::cout << "B ������ ȣ��" << std::endl; }
};

class C : public A, public B {
public:
	int c;

	C() : A(), B() { std::cout << "C ������ ȣ��" << std::endl; }
};

int main() { C c; }