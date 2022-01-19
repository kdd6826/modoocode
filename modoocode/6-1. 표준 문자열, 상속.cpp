#include <iostream>
#include <string>

//int main() {
//	std::string s = "abc";
//	std::cout << s << std::endl;
//
//	return 0;
//}

//int main() {
//	std::string s = "abc";
//	std::string t = "def";
//	std::string s2 = s;
//
//	std::cout << s << " �� ���� : "<<s.length()<<std::endl;
//	std::cout << s << " �ڿ� " << t << " �� ���̸� : " << s + t << std::endl;
//	//c�� ��� strcmp�� ���� ��. ���Լ�
//	if (s == s2) {
//		std::cout << s << " �� " << s2 << " �� ����" << std::endl;
//	}
//	if (s != t) {
//		std::cout << s << " �� " << t << " �� �ٸ���" << std::endl;
//	}
//
//	return 0;
//}

class Employee {
	std::string name;
	int age;
	
	std::string position;
	int rank;

public:
	Employee(std::string name, int age, std::string position, int rank)
		: name(name), age(age), position(position), rank(rank) {}

	Employee(const Employee & employee) {
		name = employee.name;
		age = employee.age;
		position = employee.position;
		rank = employee.rank;
	}

	Employee() {}

	void print_info() {
		std::cout << name << " (" << position << " , " << age << ") ==> "
			<< calculate_pay() << "����" << std::endl;
	}
	int calculate_pay() { return 200 + rank * 50; }
};