#include <iostream>
#include "marine.h"

int Marine::total_marine_num = 0;

void Marine::show_total_marine() {
    std::cout << " 전체 마린 수 : " << total_marine_num << std::endl;
}

// 초기화 리스트, 상수와 같이 생성과 함께 초기화 해줘야 할때 필요
Marine::Marine() : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y)
    : coord_x(x), coord_y(y), hp(50), default_damage(5), is_dead(false) {
    total_marine_num++;
}

Marine::Marine(int x, int y, int default_damage)
    : coord_x(x), coord_y(y), hp(50), default_damage(default_damage), is_dead(false) {
    total_marine_num++;
}

void Marine::move(int x, int y) {
    coord_x = x;
    coord_y = y;
}
int Marine::attack() const { return default_damage; }
Marine& Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;
    if (hp <= 0) is_dead = true;

    return *this;
}
void Marine::show_status() {
    std::cout << " *** Marine *** " << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
        << std::endl;
    std::cout << " HP : " << hp << std::endl;
    std::cout << " 현재 총 마린 수 : " << total_marine_num << std::endl;
}