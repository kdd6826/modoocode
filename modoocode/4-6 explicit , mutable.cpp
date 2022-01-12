#include <iostream>

//class MyString {
//	char* string_content;
//	int string_length;
//
//	int memory_capacity;
//
//public:
//	explicit MyString(int capacity);
//
//	MyString(const char* str);
//
//	MyString(const MyString& str);
//
//	~MyString();
//
//	int length();
//};
//
//
//
//MyString::MyString(int capacity)
//{
//	string_content = new char[capacity];
//	string_length = 0;
//	memory_capacity = capacity;
//	std::cout << "Capacity : " << capacity << std::endl;
//}
//
//MyString::MyString(const char* str)
//{
//	string_length = 0;
//	while (str[string_length++]){
//	}
//	string_content = new char[string_length];
//	memory_capacity = string_length;
//
//	for (int i = 0; i != string_length; i++) string_content[i] = str[i];
//}
//
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//	{
//		string_content[i] = str.string_content[i];
//	}
//}
//
//MyString::~MyString()
//{
//	delete[] string_content;
//}
//
//int MyString::length()
//{
//	return string_length;
//}
//
//void DoSomethingWithString(MyString s) {
//
//}
//
//int main()
//{
//	//DoSomethingWithString(3);
//
//}

//class A {
//	int data_;
//
//public:
//	A(int data) : data_(data){}
//	void DoSomething(int x) const {
//		data_ = x;
//	} // const 함수 안에서 멤버변수에 값을 대입하는것은 허용치 않는다.
//	void PrintData() const { std::cout << "data : " << data_ << std::endl; }
//};
//
//int main() {
//	A a(10);
//	a.(10);
//	a.DoSomething(3);
//	a.PrintData();
//}

//class A {
//	mutable int data_;
//
//public:
//	A(int data) : data_(data) {}
//	void DoSomething(int x) const {
//		data_ = x;
//	} // mutable을 쓰면 가능하다.
//	// mutable을 쓰는 이유 : const 함수 안에서 해당 멤버 변수에 const가 아닌 작업을 할 수 있게 만들어 준다.
//	void PrintData() const { std::cout << "data : " << data_ << std::endl; }
//};
//
//int main() {
//	A a(10);
//	a.DoSomething(3);
//	a.PrintData();
//}

//class Server {
//	User GetUserInfo(const int user_id) const {
//		Data user_data = Database.find(user_id);
//
//		return User(user_data);
//	}
	/*
		const를 선언하는 이유. 멤버 함수들은 이 객체는 이러이러한 일을 할 수 있다는 의미.
		멤버 함수를 const로 선언하는 의미는  이 함수는 객체의 내부 상태에 영향을 주지 않는다. 라는 뜻.
		 읽기 작업을 수행하는 함수들.
		
		대부분의 경우 의미상 상수 작업을 하는 경우, 실제로도 상수 작업을 하게 된다.
		꼭 그렇지만은 않은 경우가 있는데 대개 데이터베이스에 요청한 후 받아오는 작업의 경우 오래걸린다.
		그래서 보통 서버들의 경우 메모리에 캐쉬를 만들어서 자주 요청되는 데이터를 굳이 데이터베이스까지 가서 
		찾지 않아도 메모리에서 빠르게 조회할 수 있도록 한다.
		캐쉬는 데이터베이스만큼 크지 않기 때문에 일부 유저들 정보밖에 포함하지 않으며, 캐쉬에 해당 유저가 없으면(Cache Miss)
		데이터베이스에 직접 요청해야 한다. 대신 데이터베이스에서 유저 정보를 받으면 캐쉬에 저장해놓아서 다음에 요청할때 빠르게 받을수 있게 된다.
		GuestUserInfo를 조회하는 const 함수라는 점 때문에 캐쉬를 업데이트 하는 작업을 수행할수 없다.
		캐쉬 업데이트를 한다는것은 캐쉬 내부정보를 바꿔야 된다는 뜻이기 떄문이다.
		함수 사용하는 사용자의 입장에선 당연히 const로 정의되어야 하는 함수이기 때문에 이 경우 cache를 mutable로 선언한다.
		즉 mutable 키워드는 const 함수 안에서 해당 멤버변수에 const가 아닌 작업을 할 수 있게 만들어준다.
	*/
//};

class Server {
	Cache cache;

	User GetUserInfo(const int user_id) const {
		Data user_data = cache.find(user_id);

		if (!user_data) {
			user_data = Database.find(user_id);
			
			cache.update(user_id, user_data);
		}
		return User(user_data);
	}
};