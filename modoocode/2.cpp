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
//	//참조자(레퍼런스는 가리키고자 하는 타입 뒤에 &를 붙인다.
//	//another_a는 a의 또다른 이름.
//	int& another_a = a;
//
//	another_a = 5;
//	//반드시 처음에 누구의 별명이 될것인지 지정해야 한다.
//	// int& another_a; // 불가능함
//	int* p; // 가능함
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
//	//&another_a = b; 불가능.
//
//}

//int main() {
//
//	//z와 y 모두 x의 참조자가 된다.
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
//	//반드시 배열의 크기를 명시해야한다.
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

	//상수 레퍼런스로 리턴값을 받게되면 해당 리턴값의 생명이 연장된다.
	const int& c = function();
	std::cout << "c : " << c << std::endl;
	return 0;
}