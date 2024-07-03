#include <iostream>
#include "marine.h"

void create_marine() {
    Marine marine3(10, 10, 4);
    Marine::show_total_marine();
}

int main() {
    /*Marine marine1(2, 3);
    Marine marine2(3, 5);*/

    Marine marine1(2, 3, 5);
    marine1.show_status();

    Marine marine2(3, 5, 10);
    marine2.show_status();

    //create_marine();

    std::cout << std::endl;
    std::cout << "마린1이 마린2를 두 번 공격!" << std::endl;
    marine2.be_attacked(marine1.attack()).be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();
}