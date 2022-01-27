#include <fstream>
#include <iostream>
#include <string>

//int main() {
//	std::ifstream in("test.txt");
//	std::string s;
//
//	if (in.is_open()) {
//		in >> s;
//		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
//	}
//	else {
//		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//	}
//	return 0;
//}

//int main() {
//	std::ifstream in("test.txt");
//	std::string s;
//
//	if (in.is_open()) {
//		in >> s;
//		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
//	}
//	else {
//		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//	}
//
//	in.close();
//	in.open("other.txt");
//
//	if (in.is_open()) {
//		in >> s;
//		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
//	}
//	else {
//		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//	}
//
//	return 0;
//}

int main() {
	std::ifstream in("test.txt", std::ios::binary);
	std::string s;

	int x;
	if (in.is_open()) {
		in.read((char*)(&x), 4);
		std::cout << std::hex << x << std::endl;
	}
	else {
		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
	}
	return 0;
}