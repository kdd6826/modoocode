#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;
	while (true)
	{
		cout << "TEXT RPG" << endl;
		cout << "1. �̸�" << endl;
		cout << "2. ����" << endl;
		cout << "3. ����" << endl;
		cin >> user_input;

		switch (user_input)
		{
		case 1:
			cout << "GMH" << endl;
			break;
		case 2:
			cout << "����" << endl;
			break;
		case 3:
			cout << "���ݷ� : 30" << endl;
			cout << "���� : 30" << endl;
			cout << "ü�� : 30" << endl;
			cout << "���� : 30" << endl;
			break;
		default:
			cout << "�� �Է��Ѱ̴ϱ�?" << endl;
			return 0;

		}
	}

	return 0;

}
