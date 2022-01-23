#include <iostream>
#include <string>

//class Base {
//	std::string s;
//
//public:
//	Base() : s("���") { std::cout << "��� Ŭ����" << std::endl; }
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived :public Base {
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	std::cout << " === ��� Ŭ���� ���� ===" << std::endl;
//	Base p;
//
//	p.what();
//
//	std::cout << " === �Ļ� Ŭ���� ���� ===" << std::endl;
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
//	Base() : s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base {
//	std::string s;
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	Base p;
//	Derived c;
//
//	std::cout << "=== ������ ���� ===" << std::endl;
//	Base* p_c = &c;
//	p_c->what();
//
//	return 0;
//}

//class Base {
//	std::string s;
//	
//	public:
//		Base() :s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//		void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base {
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	Base p;
//	Derived c;
//
//	std::cout << "=== ������ ���� ===" << std::endl;
//	Derived* p_p = &p;
//	p_p->what();
//
//	return 0;
//}

//class Base {
//	std::string s;
//
//public:
//	Base() :s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base {
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	Base p;
//	Derived c;
//
//	std::cout << "=== ������ ���� ===" << std::endl;
//	Base* p_p = &c;
//	Derived* p_c = p_p;
//	p_c->what();
//
//	return 0;
//}

//class Base {
//	std::string s;
//
//public:
//	Base() :s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base {
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	Base p;
//	Derived c;
//
//	std::cout << "=== ������ ���� ===" << std::endl;
//	Base* p_p = &p;
//
//	Derived* p_c = static_cast<Derived*>(p_p);
//	p_c->what();
//
//	return 0;
//}
//
//class Base {
//	std::string s;
//
//public:
//	Base() :s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//class Derived : public Base {
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//};
//
//int main() {
//	Base p;
//	Derived c;
//
//	std::cout << "=== ������ ���� ===" << std::endl;
//	Base* p_p = &p;
//
//	Derived* p_c = dynamic_cast<Derived*>(p_p);
//	p_c->what();
//
//	return 0;
//}

class Employee {
protected:
	std::string name;
	int age;

	std::string position;
	int rank;
public :
	Employee(std::string name, int age, std:: string position, int rank)
		:name(name), age(age), position(position), rank(rank) {}
	Employee(const Employee& employee) {
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

class Manager : public Employee {
	int year_of_service;

public:
	Manager(std::string name, int age, std::string position, int rank,
		int year_of_service)
		:year_of_service(year_of_service), Employee(name, age, position, rank) {}
	Manager(const Manager& manager)
		:Employee(manager.name, manager.age, manager.position, manager.rank)
	{
		year_of_service = manager.year_of_service;
	}

	Manager() :Employee() {}

	int calculate_pay() { return 200 + rank * 50 + 5 * year_of_service; }
	void print_info() {
		std::cout << name << " (" << position << " , " << age << ", "
			<< year_of_service << "����) ==> " << calculate_pay() << "����"
			<< std::endl;
	}
};

class EmployeeList {
	int alloc_employee;
	int current_employee;
	Employee** employee_list;

public:
	EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
		employee_list = new Employee * [alloc_employee];
		
		current_employee = 0;
	}
	void add_employee(Employee* employee) {
		employee_list[current_employee] = employee;
		current_employee++;
	}
	
	int current_employee_num() { return current_employee; }

	void print_employee_info() {
		int total_pay = 0;
		for (int i = 0; i < current_employee; i++) {
			employee_list[i]->print_info();
			total_pay += employee_list[i]->calculate_pay();
		}
		std::cout << "�� ��� : " << total_pay << "���� " << std::endl;
	}
	~EmployeeList() {
		for (int i = 0; i < current_employee; i++) {
			delete employee_list[i];
		}
		delete[] employee_list;
	}
};


int main() {
	EmployeeList emp_list(10);
	emp_list.add_employee(new Employee("��ȫö", 34, "����", 1));
	emp_list.add_employee(new Employee("����", 34, "����", 1));
	emp_list.add_employee(new Manager("���缮", 41, "����", 7, 12));
	emp_list.add_employee(new Manager("������", 43, "����", 4, 15));
	emp_list.add_employee(new Manager("�ڸ���", 43, "����", 5, 13));
	emp_list.add_employee(new Employee("������",36 , "�븮",2 ));
	emp_list.add_employee(new Employee("��",36 , "����", -2));
	emp_list.print_employee_info();
	return 0;
}