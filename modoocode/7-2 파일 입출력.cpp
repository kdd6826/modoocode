#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream in("test.txt");
	std::string s;

	if (in.is_open()) {
		in >> s;
		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
	}
	else {
		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
	}
	return 0;
}