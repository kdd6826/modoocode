#include <iostream>

int change_val(int* p) {
	*p = 3;
	
	return 0;
}

//int main() {
//	int number = 5;
//	std::cout << number << std::endl;
//	change_val(&number);
//	std::cout << number << std::endl;
//
//}
// 
//int main() {
//	int a = 3;
//	//������(���۷����� ����Ű���� �ϴ� Ÿ�� �ڿ� &�� ���δ�.
//	//another_a�� a�� �Ǵٸ� �̸�.
//	int& another_a = a;
//
//	another_a = 5;
//	//�ݵ�� ó���� ������ ������ �ɰ����� �����ؾ� �Ѵ�.
//	// int& another_a; // �Ұ�����
//	int* p; // ������
//	std::cout << "a : " << a << std::endl;
//	std::cout << "another_a : " << another_a << std::endl;
//
//}
//int main() {
//	int a = 10;
//	int& another_a = a;
//	int b = 3;
//	another_a = b;
//	std::cout << "another_a : " << another_a << std::endl;
//	std::cout << "b : " << b << std::endl;
//	//&another_a = b; �Ұ���.
//
//}

//int main() {
//
//	//z�� y ��� x�� �����ڰ� �ȴ�.
//	int x;
//	int& y = x;
//	int& z = y;
//
//	x = 1;
//	std::cout << " x : " << x << " y : " << y << " z : " << z << std::endl;
//	y = 2;		   				   				   
//	std::cout << " x : " << x << " y : " << y << " z : " << z << std::endl;
//	z = 3;		   				   				   
//	std::cout << " x : " << x << " y : " << y << " z : " << z << std::endl;	
//
//}

//int main() {
//
//	int arr[3] = { 1,2,3 };
//	//�ݵ�� �迭�� ũ�⸦ ����ؾ��Ѵ�.
//	int(&ref)[3] = arr;
//	ref[0] = 2;
//	ref[1] = 3;
//	ref[2] = 1;
//
//	// int arr[3][2]{1,2,3,4,5,6};
//	// int (&ref)[3][2]=arr;
//	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
//	return 0;
//
//}

//int function() {
//	int a = 2;
//	return a;
//}
//
//int main() {
//	int b = function();
//	std::cout << "b : " << b << std::endl;
//	return 0;
//}

//int& function() {
//	int a = 2;
//	return a;
//}
//
//int main() {
//	int b = function();
//	b = 3;
//	std::cout << "b : " << b << std::endl;
//	return 0;
//}
// 
//int& function(int& a) {
//		a = 5;
//		return a;
//	}
//	
//int main() {
//	int b = 2;
//	int c = function(b);
//	std::cout << "b : " << b << std::endl;
//	std::cout << "c : " << c << std::endl;
//	return 0;
//}

//int function() {
//	int a = 5;
//	return a;
//}
//
//int main() {
//
//	int& c = function();
//	std::cout << "c : " << c << std::endl;
//	return 0;
//}

int function() {
	int a = 5;
	return a;
}

int main() {

	//��� ���۷����� ���ϰ��� �ްԵǸ� �ش� ���ϰ��� ������ ����ȴ�.
	const int& c = function();
	std::cout << "c : " << c << std::endl;
	return 0;
}