#include <iostream>
#include <string>

//int main() {
//	std::string s;
//	while (true)
//	{
//		std::cin >> s;
//	std::cout << "word : " << s << std::endl;
//	}
//}
//using namespace std;
//int main() {
//	int t;
//	while (true)
//	{
//		std::cin >> t;
//		std::cout << "�Է� :: " << t << std::endl;
//		if (t == 0)break;
//	}
//}

//int main() {
//	int t;
//	while (std::cin>>t)
//	{
//		std::cout << "�Է� :: " << t << std::endl;
//		if (t == 0)break;
//	}
//}

//int main() {
//	int t;
//	std::cin >> t;
//	std::cout << "fail ��Ʈ�� ���� �����̹Ƿ�, �Է¹��� �ʴ´�" << std::endl;
//	std::string s;
//	std::cin >> s;
//}

int main() {
	int t;
	while (true)
	{
		std::cin >> t;
		std::cout << "�Է� :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "����� �Է����ּ���" << std::endl;
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		if (t == 1)break;
	}
}