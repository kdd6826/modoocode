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
//	std::cout << s << " 의 길이 : "<<s.length()<<std::endl;
//	std::cout << s << " 뒤에 " << t << " 를 붙이면 : " << s + t << std::endl;
//	//c의 경우 strcmp를 썼어야 함. 비교함수
//	if (s == s2) {
//		std::cout << s << " 와 " << s2 << " 는 같다" << std::endl;
//	}
//	if (s != t) {
//		std::cout << s << " 와 " << t << " 는 다르다" << std::endl;
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
			<< calculate_pay() << "만원" << std::endl;
	}
	int calculate_pay() { return 200 + rank * 50; }
};