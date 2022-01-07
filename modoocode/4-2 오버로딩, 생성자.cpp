#include <iostream>

//void print(int x) { std::cout << "int : " << x << std::endl; }
//void print(char x) { std::cout << "char : " << x << std::endl; }
//void print(double x) { std::cout << "double : " << x << std::endl; }

//int main() {
//	int a = 1;
//	char b = 'c';
//	double c = 3.2f;
//
//	print(a);
//	print(b);
//	print(c);
//	/*
//	컴파일러에서 함수 오버로딩의 과정
//	1 단계
//	자신과 타입이 정확히 일치하는 함수를 찾는다.
//	
//	2 단계
//	정확히 일치하는 타입이 없는 경우 아래와 같은 형변환을 통해서 일치하는 함수를 찾아본다.
//	Char, unsigned char, short 는 int 로 변환된다.
//	Unsigned short 는 int 의 크기에 따라 int 혹은 unsigned int 로 변환된다.
//	Float 은 double 로 변환된다.
//	Enum 은 int 로 변환된다.
//	
//	3 단계
//	위와 같이 변환해도 일치하는 것이 없다면 아래의 좀더 포괄적인 형변환을 통해 일치하는 함수를 찾는다.
//	임의의 숫자(numeric) 타입은 다른 숫자 타입으로 변환된다. (예를 들어 float -> int)
//	Enum 도 임의의 숫자 타입으로 변환된다 (예를 들어 Enum -> double)
//	0 은 포인터 타입이나 숫자 타입으로 변환된 0 은 포인터 타입이나 숫자 타입으로 변환된다
//	포인터는 void 포인터로 변환된다.
//	
//	4 단계
//	유저 정의된 타입 변환으로 일치하는 것을 찾는다 (이 부분에 대해선 나중에 설명!) (출처)
//	만약에 컴파일러가 위 과정을 통하더라도 일치하는 함수를 찾을 수 없거나 같은 단계에서 두 개 이상이 일치하는 경우에 모호하다 (ambiguous) 라고 판단해서 오류를 발생하게 됩니다.
//	*/
//	return 0;
//}

//void print(int x) { std::cout << "int : " << x << std::endl; }
//void print(double x) { std::cout << "double : " << x << std::endl; }
//int main() {
//	char b = 'c';
//
//	print(b);
//	
//	
//	return 0;
//}

//void print(int x) { std::cout << "int : " << x << std::endl; }
//void print(char x) { std::cout << "char : " << x << std::endl; }
//int main() {
//	int a = 1;
//	char b = 'c';
//	double c = 3.2f;
//	print(a);
//	print(b);
//	//print(c); //같은 3단계  중복 오류가 발생.
//
//	return 0;
//}


//class Date {
//	int year_;
//	int month_;
//	int day_;
//
//
//public:
//	void SetDate(int year, int month, int day);
//	void AddDay(int inc);
//	void AddMonth(int inc);
//	void AddYear(int inc);
//
//	int GetCurrentMonthTotalDays(int year, int month);
//
//	void ShowDate();
//
//};
//
//
//void Date::SetDate(int year, int month, int day)
//{
//	year_ = year;
//	month_ = month;
//	day_ = day;
//}
//
//void Date::AddDay(int inc)
//{
//	while (true)
//	{
//		int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);
//
//		if (day_ + inc <= current_month_total_days) {
//			day_ += inc;
//			return;
//		}
//		else {
//			inc -= (current_month_total_days - day_ + 1);
//			day_ = 1;
//			AddMonth(1);
//		}
//	}
//}
//
//void Date::AddMonth(int inc)
//{
//	AddYear((inc + month_ - 1) / 12);
//	month_ = month_ + inc % 12;
//	month_ = (month_ == 12 ? 12 : month_ % 12);
//}
//
//void Date::AddYear(int inc)
//{
//	year_ += inc;
//}
//
//int Date::GetCurrentMonthTotalDays(int year, int month)
//{
//	static int month_day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (month != 2) {
//		return month_day[month - 1];
//	}
//	else if (year % 4 == 0 && year % 100 != 0) {
//		return 29;
//	}
//	else {
//		return 28;
//	}
//}
//
//void Date::ShowDate()
//{
//	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_ << " 일 입니다. " << std::endl;
//}
//
//int main() {
//
//	Date day;
//
//	day.SetDate(2011, 3, 1);
//	day.ShowDate();
//
//	day.AddDay(30);
//	day.ShowDate();
//
//	day.AddDay(2000);
//	day.ShowDate();
//
//	day.SetDate(2012, 1, 31);
//	day.AddDay(29);
//	day.ShowDate();
//
//	day.SetDate(2012, 8, 4);
//	day.AddDay(2500);
//	day.ShowDate();
//
//	return 1;
//}

//class Date {
//	int year_;
//	int month_;
//	int day_;
//
//
//public:
//	void SetDate(int year, int month, int day);
//	void AddYear(int inc);
//
//	void ShowDate();
//
//	Date(int year, int month, int day) {
//		year_ = year;
//		month_ = month;
//		day_ = day;
//	}
//
//};
//
//
//void Date::SetDate(int year, int month, int day)
//{
//	year_ = year;
//	month_ = month;
//	day_ = day;
//}
//
//void Date::AddYear(int inc)
//{
//	year_ += inc;
//}
//
//
//void Date::ShowDate()
//{
//	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_ << " 일 입니다. " << std::endl;
//}
//
//int main() {
//
//	//Date day(2011, 3, 1);
//	Date day = Date(2012, 3, 1);
//	day.ShowDate();
//	
//	day.AddYear(10);
//	day.ShowDate();
//
//	return 1;
//}

//class Date {
//	int year_;
//	int month_;
//	int day_;
//
//
//public:
//	void ShowDate();
//
//	Date() {
//		year_ = 2012;
//		month_ = 7;
//		day_ = 12;
//	}
//
//};
//
//
//
//void Date::ShowDate()
//{
//	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_ << " 일 입니다. " << std::endl;
//}
//
//int main() {
//
//	//Date day(2011, 3, 1);
//	Date day = Date();
//	Date day2;
//	Date day3(); // 이건 정의이니 주의
//	day.ShowDate();
//	day2.ShowDate();
//
//	return 1;
//}

class Date {
	int year_;
	int month_;
	int day_;


public:
	void ShowDate();

	Date() {
		std::cout << "기본 생성자 호출!" << std::endl;
		year_ = 2012;
		month_ = 7;
		day_ = 12;
	}

	Date(int year, int month, int day) {
		std::cout << "인자 3 개인 생성자 호출!" << std::endl;
		year_ = year;
		month_ = month;
		day_ = day;
	}

};



void Date::ShowDate()
{
	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_ << " 일 입니다. " << std::endl;
}

int main() {

	//Date day(2011, 3, 1);
	Date day = Date();
	Date day2(2012,10,31);
	
	day.ShowDate();
	day2.ShowDate();

	return 1;
}