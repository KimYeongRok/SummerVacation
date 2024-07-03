#include <string.h>
#include <iostream>

#include "Photon_Cannon.h"

#pragma warning (disable:4996);

Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
	std::cout << "복사 생성자 호출" << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;

	name = new char[strlen(pc.name) + 1];
	strcpy(name, pc.name);
}

Photon_Cannon::Photon_Cannon(int x, int y) {
	std::cout << "생성자 호출" << std::endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = NULL;
}

Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name) {
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = new char[strlen(cannon_name) + 1];
	strcpy(name, cannon_name);
}

void Photon_Cannon::show_status() {
	std::cout << "Photon Cannon : " << name << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) ";
	std::cout << " HP : " << hp << std::endl;
}

Photon_Cannon::~Photon_Cannon() {
	if (name) delete[] name;
}