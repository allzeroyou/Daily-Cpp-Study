#include <iostream>
#include <string>
using namespace std;

class Photo_Cannon {
	int hp, shield;
	int coord_x, coord_y;
	int damage;
public:
	Photo_Cannon(int x, int y);
	Photo_Cannon(const Photo_Cannon& pc);
	void show_status();
};
Photo_Cannon::Photo_Cannon(const Photo_Cannon& pc) {
	cout << "복사 생성자 호출" << endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;
}
Photo_Cannon::Photo_Cannon(int x, int y) {
	cout << "생성자 호출!" << endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;
}
void Photo_Cannon::show_status() {
	cout << "Photo Cannon " << endl;
	cout << " Location: (" << coord_x << " , " << coord_y << ")" << endl;
	cout << "HP : " << hp << endl;
}
//int main() {
//	Photo_Cannon pc1(3, 3);
//	Photo_Cannon pc2(pc1);
//	Photo_Cannon pc3 = pc2;
//	pc1.show_status();
//	pc2.show_status();
//}