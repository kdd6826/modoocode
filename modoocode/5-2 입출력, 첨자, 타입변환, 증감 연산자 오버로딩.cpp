#include <iostream>

class A {
private:
	void private_func() {}
	int private_num;
	int x;

	friend class B;
	
	friend void func();
};

class B {
public:
	void b() {
		A a;
		a.private_func();
		a.private_num = 2;
	}
private:
	//A�� �� private�� ���� �Ұ�.(¦���)
	int y;
};

void func() {
	A a;
	a.private_func();
	a.private_num = 2;
}

int main() {}