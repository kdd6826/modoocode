#include <iostream>

//class Marine
//{
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//public:
//	Marine();
//	Marine(int x, int y);
//	~Marine();
//	
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x , int y);
//
//	void show_status();
//
//};
//
//Marine::Marine() :hp(50),coord_x(0),coord_y(0),damage(5),is_dead(false)
//{
//}
//
///*Marine::Marine(int coord_x, int coord_y)
//: coord_x(coord_x), coord_y(coord_y), hp(50), damage(5), is_dead(false) {}
//	이와 같이 변수와 인자가 같아도 적용이 된다.
//	초기화 리스트는 생성과 초기화를 동시에 한다.
//*/
//Marine::Marine(int x, int y) :coord_x(x),coord_y(y),hp(50),damage(5),is_dead(false)
//{
//}
//
//Marine::~Marine()
//{
//}
//
//int Marine::attack()
//{
//	return damage;
//}
//
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Marine marine1(2,3);
//	Marine marine2(3,5);
//
//	marine1.show_status();
//	marine2.show_status();
//	return 0;
//}


//class Marine
//{
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//
//	const int default_damage;
//public:
//	Marine();
//	Marine(int x, int y);
//	~Marine();
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//
//};
//
//Marine::Marine() :hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false)
//{
//}
//
//Marine::Marine(int x, int y) :coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false)
//{
//}
//
//Marine::~Marine()
//{
//}
//
//int Marine::attack()
//{
//	return default_damage;
//}
//
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Marine marine1(2, 3);
//	Marine marine2(3, 5);
//
//	marine1.show_status();
//	marine2.show_status();
//
//	std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
//	marine2.be_attacked(marine1.attack());
//	
//	marine1.show_status();
//	marine2.show_status();
//
//	return 0;
//}

//class Marine
//{
//	int hp;
//	int coord_x, coord_y;
//	bool is_dead;
//
//	const int default_damage;
//public:
//	Marine();
//	Marine(int x, int y);
//	Marine(int x, int y, int default_damage);
//	~Marine();
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//
//};
//
//Marine::Marine() :hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false)
//{
//}
//
//Marine::Marine(int x, int y) : coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false)
//{
//}
//
//Marine::Marine(int x, int y, int default_damage):coord_x(x),coord_y(y),hp(50),default_damage(default_damage),is_dead(false)
//{
//}
//
//Marine::~Marine()
//{
//}
//
//int Marine::attack()
//{
//	return default_damage;
//}
//
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Marine marine1(2, 3, 10);
//	Marine marine2(3, 5, 10);
//
//	marine1.show_status();
//	marine2.show_status();
//
//	std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
//	marine2.be_attacked(marine1.attack());
//
//	marine1.show_status();
//	marine2.show_status();
//
//	return 0;
//}

//class Marine
//{
//	//static 변수는 클래수 내부에서 초기화가 불가능하다( const static일때는 가능하다.)
//	static int total_marine_num;
//
//	int hp;
//	int coord_x, coord_y;
//	bool is_dead;
//
//	const int default_damage;
//public:
//	Marine();
//	Marine(int x, int y);
//	Marine(int x, int y, int default_damage);
//	~Marine() { total_marine_num--; };
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//
//};
//int Marine::total_marine_num = 0;
//Marine::Marine() :hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) { total_marine_num++; }
//
//Marine::Marine(int x, int y) : coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false){ total_marine_num++; }
//
//Marine::Marine(int x, int y, int default_damage) : coord_x(x), coord_y(y), hp(50), default_damage(default_damage), is_dead(false){ total_marine_num++; }
//
//int Marine::attack(){return default_damage;}
//
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//	std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
//}
//
//void create_marine() {
//	Marine marine3(10, 10, 4);
//	marine3.show_status();
//}
//
//int main() {
//	Marine marine1(2, 3, 5);
//	marine1.show_status();
//	Marine marine2(3, 5, 10);
//	marine2.show_status();
//
//	create_marine();
//	
//
//	std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
//	marine2.be_attacked(marine1.attack());
//
//	marine1.show_status();
//	marine2.show_status();
//
//	return 0;
//}
//
//class Marine
//{
//	static int total_marine_num;
//	const static int i = 0;
//
//	int hp;
//	int coord_x, coord_y;
//	bool is_dead;
//
//	const int default_damage;
//public:
//	Marine();
//	Marine(int x, int y);
//	Marine(int x, int y, int default_damage);
//	~Marine() { total_marine_num--; };
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//	static void show_total_marine();
//
//};
//int Marine::total_marine_num = 0;
//Marine::Marine() :hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) { total_marine_num++; }
//
//Marine::Marine(int x, int y) : coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false) { total_marine_num++; }
//
//Marine::Marine(int x, int y, int default_damage) : coord_x(x), coord_y(y), hp(50), default_damage(default_damage), is_dead(false) { total_marine_num++; }
//
//int Marine::attack() { return default_damage; }
//
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//	std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
//}
//
//void Marine::show_total_marine()
//{
//	std::cout << "전체 마린 수 : " << total_marine_num << std::endl;
//}
//
//void create_marine() {
//	Marine marine3(10, 10, 4);
//	Marine::show_total_marine();
//}
//
//int main() {
//	Marine marine1(2, 3, 5);
//	Marine::show_total_marine();
//	Marine marine2(3, 5, 10);
//	Marine::show_total_marine();
//
//	create_marine();
//
//
//	std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
//	marine2.be_attacked(marine1.attack());
//
//	marine1.show_status();
//	marine2.show_status();
//
//	return 0;
//}

//
//class Marine
//{
//	static int total_marine_num;
//	const static int i = 0;
//
//	int hp;
//	int coord_x, coord_y;
//	bool is_dead;
//
//	const int default_damage;
//public:
//	Marine();
//	Marine(int x, int y);
//	Marine(int x, int y, int default_damage);
//	~Marine() { total_marine_num--; };
//
//	int attack();
//	Marine& be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//	static void show_total_marine();
//
//};
//int Marine::total_marine_num = 0;
//Marine::Marine() :hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) { total_marine_num++; }
//
//Marine::Marine(int x, int y) : coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false) { total_marine_num++; }
//
//Marine::Marine(int x, int y, int default_damage) : coord_x(x), coord_y(y), hp(50), default_damage(default_damage), is_dead(false) { total_marine_num++; }
//
//int Marine::attack() { return default_damage; }
//
//Marine& Marine::be_attacked(int damage_earn)
//{
//	// TODO: 여기에 return 문을 삽입합니다.
//	
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//
//	return *this;
//	
//}
//
//
//
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//	std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
//}
//
//void Marine::show_total_marine()
//{
//	std::cout << "전체 마린 수 : " << total_marine_num << std::endl;
//}
//
//void create_marine() {
//	Marine marine3(10, 10, 4);
//	Marine::show_total_marine();
//}
//
//int main() {
//	Marine marine1(2, 3, 5);
//	marine1.show_status();
//
//	Marine marine2(3, 5, 10);
//	marine2.show_status();
//
//	create_marine();
//
//
//	std::cout << std::endl << "마린 1이 마린 2를 두 번  공격! " << std::endl;
//	marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());
//
//	marine1.show_status();
//	marine2.show_status();
//
//	return 0;
//}


//class A {
//	int x;
//public:
//	A(int c) : x(c) {}
//
//	int& access_x() { return x; }
//	int get_x() { return x; }
//	void show_x() { std::cout << x << std::endl; }
//};
//
//int main() {
//	A a(5);
//	a.show_x();
//
//	int& c = a.access_x();
//	c = 4;
//	a.show_x();
//
//	int d = a.access_x();
//	d = 3;
//	a.show_x();
//
//	/*
//	레퍼런스가 아닌 타입을 리턴하는 경우 값의 복사가 이루어지기때문에 임시객체가 생성되고
//	임시객체의 레퍼런스를 가질수 없다.(문장이 끝나면 소멸되기 때문에)
//	int& e = a.get_x();
//	e = 2;
//	a.show_x();
//	*/
//
//	int f = a.get_x();
//	f = 1;
//	a.show_x();
//
//	return 0;
//}

class Marine
{
	static int total_marine_num;
	const static int i = 0;

	int hp;
	int coord_x, coord_y;
	bool is_dead;

	const int default_damage;
public:
	Marine();
	Marine(int x, int y);
	Marine(int x, int y, int default_damage);
	~Marine() { total_marine_num--; };

	int attack() const;
	Marine& be_attacked(int damage_earn);
	void move(int x, int y);

	void show_status();
	static void show_total_marine();

};
int Marine::total_marine_num = 0;
Marine::Marine() :hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) { total_marine_num++; }

Marine::Marine(int x, int y) : coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false) { total_marine_num++; }

Marine::Marine(int x, int y, int default_damage) : coord_x(x), coord_y(y), hp(50), default_damage(default_damage), is_dead(false) { total_marine_num++; }

int Marine::attack() const { return default_damage; }

Marine& Marine::be_attacked(int damage_earn)
{
	// TODO: 여기에 return 문을 삽입합니다.
	
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;

	return *this;
	
}



void Marine::move(int x, int y)
{
	coord_x = x;
	coord_y = y;
}

void Marine::show_status()
{
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
	std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
}

void Marine::show_total_marine()
{
	std::cout << "전체 마린 수 : " << total_marine_num << std::endl;
}

int main() {
	Marine marine1(2, 3, 5);
	marine1.show_status();

	Marine marine2(3, 5, 10);
	marine2.show_status();


	std::cout << std::endl << "마린 1이 마린 2를 두 번  공격! " << std::endl;
	marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());

	marine1.show_status();
	marine2.show_status();

	return 0;
}
