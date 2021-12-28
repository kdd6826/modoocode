#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;
	while (true)
	{
		cout << "TEXT RPG" << endl;
		cout << "1. 이름" << endl;
		cout << "2. 직업" << endl;
		cout << "3. 스탯" << endl;
		cin >> user_input;

		switch (user_input)
		{
		case 1:
			cout << "GMH" << endl;
			break;
		case 2:
			cout << "전사" << endl;
			break;
		case 3:
			cout << "공격력 : 30" << endl;
			cout << "방어력 : 30" << endl;
			cout << "체력 : 30" << endl;
			cout << "마력 : 30" << endl;
			break;
		default:
			cout << "뭘 입력한겁니까?" << endl;
			return 0;

		}
	}

	return 0;

}
