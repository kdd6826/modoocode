
#include <iostream>

//class Animal {
//private:
//	int food;
//	int weight;
//public:
//	void set_animal(int _food, int _weight) {
//		food = _food;
//		weight = _weight;
//	}
//	void increase_food(int inc) {
//		food += inc;
//		weight += (inc / 3);
//	}
//	void view_stat() {
//		std::cout << "이 동물의 food : " << food << std::endl;
//		std::cout << "이 동물의 weight : " << weight << std::endl;
//	}
//};
//
//int main() {
//	Animal animal;
//	animal.set_animal(100, 50);
//	animal.increase_food(30);
//
//	animal.view_stat();
//	return 0;
//}

//class Date {
//	int year_;
//	int month_;
//	int day_;
//
//	
//public:
//	void SetDate(int year, int month, int day) {
//		year_ = year;
//		month_ = month;
//		day_ = day;
//	};
//	void AddDay(int inc) {
//		day_ += inc;
//		if (day_ > 31)
//		{
//			//31일이끝이면
//			if (month_ == 1 || month_ == 3 || month_ == 5 || month_ == 7 || month_ == 8 || month_ == 10 || month_ == 12) {
//				day_ -= 31;
//				AddMonth(1);
//			}
//			else if (day_ > 30)
//			{
//				//30일이끝이면
//				if (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11) {
//					day_ -= 30;
//					AddMonth(1);
//				}
//			}
//			else if (day_ > 29)
//			{
//				//윤년이라면
//				if (month_ == 2 && year_ % 4 == 0 && year_ % 100 != 0)
//				{
//					day_ -= 29;
//					AddMonth(1);
//				}
//
//			}
//		}
//		else if (day_ > 28)
//		{
//			//윤년이라면
//			if (month_ == 2)
//			{
//				day_ -= 28;
//				AddMonth(1);
//			}
//
//		}
//
//
//	};
//	
//	void AddMonth(int inc) {
//		month_ += inc;
//		if (month_ > 12)
//		{
//			month_ -= 12;
//			AddYear(1);
//		}
//	};
//
//
//	void AddYear(int inc) {
//		year_ += inc;
//	}
//
//	void ShowDate() {
//		std::cout << year_ << "년 ";
//		std::cout << month_ << "월 ";
//		std::cout << day_ << "일입니다." << std::endl;
//	};
//
//};
//
//int main() {
//
//	Date* date = new Date;
//	date->SetDate(2022, 1, 7);
//	date->ShowDate();
//	
//	date->AddDay(30);
//	date->ShowDate();
//
//	date->AddMonth(10);
//	date->ShowDate();
//
//	date->AddYear(30);
//	date->ShowDate();
//	return 1;
//}