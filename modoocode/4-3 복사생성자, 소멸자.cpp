#include <iostream>

//class Marine {
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//
//public:
//	Marine();
//	Marine(int x, int y);
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//};
//
//Marine::Marine() {
//	hp = 50;
//	coord_x = coord_y = 0;
//	damage = 5;
//	is_dead = false;
//}
//Marine::Marine(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//}
//int Marine::attack()
//{
//	return damage;
//}
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//			  << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}

//int main() {
//	Marine marine1(2, 3);
//	Marine marine2(3, 5);
//
//	marine1.show_status();
//	marine2.show_status();
//
//	std::cout << std::endl << "마린 1이 마린 2를 공격!" << std::endl;
//	marine2.be_attacked(marine1.attack());
//
//	marine1.show_status();
//	marine2.show_status();
//	return 1;
//}

//int main() {
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3);
//	marines[1] = new Marine(3, 5);
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	std::cout << std::endl << "마린 1이 마린 2를 공격!" << std::endl;
//	marines[1]->be_attacked(marines[0]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//	return 1;
//}

//class Marine {
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//	char* name;
//
//public:
//	Marine();
//	Marine(int x, int y, const char* marine_name);
//	Marine(int x, int y);
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//};
//
//Marine::Marine() {
//	hp = 50;
//	coord_x = coord_y = 0;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//Marine::Marine(int x, int y, const char* marine_name)
//{
//	name = new char[strlen(marine_name) + 1];
//	strcpy(name, marine_name);
//
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//
//}
//Marine::Marine(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//int Marine::attack()
//{
//	return damage;
//}
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//		<< std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3, "Marine 0");
//	marines[1] = new Marine(2, 3, "Marine 1");
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	std::cout << std::endl << "마린 0 이 마린 1 을 공격!" << std::endl;
//
//	marines[1]->be_attacked(marines[0]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//}

//class Marine {
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//	char* name;
//
//public:
//	Marine();
//	Marine(int x, int y, const char* marine_name);
//	Marine(int x, int y);
//	~Marine();
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//};
//
//Marine::Marine() {
//	hp = 50;
//	coord_x = coord_y = 0;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//Marine::Marine(int x, int y, const char* marine_name)
//{
//	name = new char[strlen(marine_name) + 1];
//	strcpy_s(name, strlen(marine_name)+1, marine_name);
//
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//
//}
//Marine::Marine(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//Marine::~Marine()
//{
//	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
//	if (name != NULL) {
//		delete[] name;
//	}
//}
//int Marine::attack()
//{
//	return damage;
//}
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//}
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//void Marine::show_status()
//{
//	std::cout << " *** Marine *** " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//		<< std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3, "Marine 0");
//	marines[1] = new Marine(2, 3, "Marine 1");
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	std::cout << std::endl << "마린 0 이 마린 1 을 공격!" << std::endl;
//
//	marines[1]->be_attacked(marines[0]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	delete marines[0];
//	delete marines[1];
//}

//class Test {
//	char c;
//public:
//	Test(char _c) {
//		c = _c;
//		std::cout << "생성자 호출" << c << std::endl;
//	}
//	~Test() { std::cout << "소멸자 호출" << c << std::endl; }
//};
//
//void simple_function() { Test b('b'); }
//
//int main() {
//	Test a('a');
//	simple_function();
//}

//class Photon_Cannon {
//	int hp, shield;
//	int coord_x, coord_y;
//	int damage;
//public:
//	Photon_Cannon(int x, int y);
//	Photon_Cannon(const Photon_Cannon& pc);
//
//	void show_status();
//};
//
//Photon_Cannon::Photon_Cannon(int x, int y)
//{
//	std::cout << "생성자 호출 !" << std::endl;
//	hp = shield = 100;
//	coord_x = x;
//	coord_y = y;
//	damage = 20;
//}
//
//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc)
//{
//	//T(const T& a);
//	std::cout << "복사 생성자 호출 !" << std::endl;
//	hp = pc.hp;
//	shield = pc.shield;
//	coord_x = pc.coord_x;
//	coord_y = pc.coord_y;
//	damage = 20;
//}
//
//void Photon_Cannon::show_status()
//{
//	std::cout << "Photon Cannon " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Photon_Cannon pc1(3, 3);
//	Photon_Cannon pc2(pc1);
//	Photon_Cannon pc3 = pc2;
//
//	
//	pc1.show_status();
//	pc2.show_status();
//}


//class Photon_Cannon {
//	int hp, shield;
//	int coord_x, coord_y;
//	int damage;
//
//	char *name;
//public:
//	Photon_Cannon(int x, int y);
//	Photon_Cannon(int x, int y ,const char *cannon_name);
//	~Photon_Cannon();
//
//	void show_status();
//};
//
//Photon_Cannon::Photon_Cannon(int x, int y)
//{
//	hp = shield = 100;
//	coord_x = x;
//	coord_y = y;
//	damage = 20;
//
//	name = NULL;
//}
//
//Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name)
//{
//	hp = shield = 100;
//	coord_x = x;
//	coord_y = y;
//	damage = 20;
//
//	name = new char[strlen(cannon_name) + 1];
//	strcpy_s(name, strlen(cannon_name) + 1, cannon_name);
//}
//
//
//
//Photon_Cannon::~Photon_Cannon()
//{
//	if (name) delete[] name;
//}
//
//void Photon_Cannon::show_status()
//{
//	std::cout << "Photon Cannon " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int main() {
//	Photon_Cannon pc1(3, 3, "Cannon");
//	Photon_Cannon pc2 = pc1;
//	/*
//		복사 생성자의 위험성.
//		name의 경우 소멸자 때 "Cannon"을 delete 한다.
//		그러한 경우 pc2가 가리키던 "Cannon" 또한 delete가되고,
//		pc2의 name은 이미 해제된(pc1이 먼저) 상태가된다.
//		이는 깊은 복사로 해줄 수 있다.
//	*/
//
//
//	pc1.show_status();
//	pc2.show_status();
//}

class Photon_Cannon {
	int hp, shield;
	int coord_x, coord_y;
	int damage;

	char* name;
public:
	Photon_Cannon(int x, int y);
	Photon_Cannon(int x, int y, const char* cannon_name);
	Photon_Cannon(const Photon_Cannon &pc);
	~Photon_Cannon();

	void show_status();
};

Photon_Cannon::Photon_Cannon(int x, int y)
{
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = NULL;
}

Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name)
{
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = new char[strlen(cannon_name) + 1];
	strcpy_s(name, strlen(cannon_name) + 1, cannon_name);
}

Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc)
{
	std::cout << "복사 생성자 호출! " << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;

	name = new char[strlen(pc.name) + 1];
	strcpy_s(name, strlen(pc.name) + 1, pc.name);
}

Photon_Cannon::~Photon_Cannon()
{
	if (name) delete[] name;
}

void Photon_Cannon::show_status()
{
	std::cout << "Photon Cannon " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main() {
	Photon_Cannon pc1(3, 3, "Cannon");
	Photon_Cannon pc2 = pc1;
	/*
		복사 생성자의 위험성.
		name의 경우 소멸자 때 "Cannon"을 delete 한다.
		그러한 경우 pc2가 가리키던 "Cannon" 또한 delete가되고,
		pc2의 name은 이미 해제된(pc1이 먼저) 상태가된다.
		이는 깊은 복사로 해줄 수 있다.
	*/


	pc1.show_status();
	pc2.show_status();
}
