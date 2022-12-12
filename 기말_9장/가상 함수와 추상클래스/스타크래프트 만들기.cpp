#include <iostream>
#include <string>
using namespace std;

class Marine {
	static int total_marine_num;

	int hp; // 마린 체력
	int coord_x, coord_y; // 마린 위치
	const int default_damage; // 기본 공격력
	bool is_dead; 

public:
		Marine(); // 기본 생성자
		Marine(int x, int y); // x, y 좌표에 마린 생성
		Marine(int x, int y, int default_damage);

		int attack(); // 데미지를 리턴한다.
		void be_attacked(int damage_earn); // 입는 데미지
		void move(int x, int y); // 새로운 위치

		void show_status(); // 상태를 보여준다.
		~Marine() { total_marine_num--; } // 소멸시 -1

};
int Marine::total_marine_num = 0;
// 초기화 리스트
// 생성자 호출과 동시에 멤버 변수들 초기화 가능
Marine::Marine() : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
	total_marine_num++; // 생성시 +1
}
//Marine::Marine() {
//	hp = 50;
//	coord_x = coord_y = 0;
//	damage = 5;
//	is_dead = false;
//	name = "";
//}
Marine::Marine(int x, int y) : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
	total_marine_num++;
}
//Marine::Marine(int x, int y) {
//	hp = 50;
//	coord_x = x;
//	coord_y = y;
//	damage = 5;
//	is_dead = false;
//	name = "";
//}
Marine::Marine(int x, int y, int default_damage)
	: coord_x(x),
	coord_y(y),
	hp(50),
	default_damage(default_damage),
	is_dead(false) {
	total_marine_num++;
}
void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}
int Marine::attack() { return default_damage; }

void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;
}
void Marine::show_status() {
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
		<< std::endl;
	std::cout << " HP : " << hp << std::endl;
	cout << "현재 총 마린수: " << total_marine_num << endl;
}
void create_marine() {
	Marine marine3(10, 10, 4);
	marine3.show_status();
}

int main() {
	/*Marine marine1(2, 3);
	Marine marine2(3, 5);*/
	// 일일이  수십개의 마린 생성 불가
	// 배열로 관리하자!
	//Marine* marines[100];

	//marines[0] = new Marine(2, 3, 5);
	//marines[1] = new Marine(3, 5, 10);
	//marines[0]->show_status(); //  "Marine들의 포인터"를 가리키는 배열이므로 메소드 호출시 (.)이 아닌 (->) 사용
	//marines[1]->show_status();
	//marine1.show_status();
	//marine2.show_status();
	Marine marine1(2, 3, 5);
	marine1.show_status();
	Marine marine2(3, 5, 10);
	marine2.show_status();
	create_marine(); // marine3는 create_marine()의 지역객체 -> 함수 종료시 소멸.


	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
	marine2.be_attacked(marine1.attack());
	//marines[0]->be_attacked(marines[1]->attack());
	marine1.show_status();
	marine2.show_status();
	//marines[0]->show_status();
	//marines[1]->show_status();
	// new의 짝꿍 delete
	//delete marines[0];
	//delete marines[1];
	
	
}