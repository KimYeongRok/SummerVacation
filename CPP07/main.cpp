#include <iostream>
#include "marine.h"
#include "Photon_Cannon.h"

int main() {
	// 마린 코드 1
	{
		//Marine marine1(2, 3);
		//Marine marine2(3, 5);

		//marine1.show_status();
		//marine2.show_status();

		//std::cout << std::endl;

		//std::cout << "마린1이 마린2를 공격!" << std::endl;
		//marine2.be_attacked(marine1.attack());

		//marine1.show_status();
		//marine2.show_status();
	}

	// 마린 코드 2
	{
		/*Marine* marines[100];

		marines[0] = new Marine(2, 3);
		marines[1] = new Marine(3, 5);

		marines[0]->show_status();
		marines[1]->show_status();

		std::cout << std::endl;
		std::cout << "마린1이 마린2를 공격!" << std::endl;

		marines[0]->be_attacked(marines[1]->attack());

		marines[0]->show_status();
		marines[1]->show_status();

		delete marines[0];
		delete marines[1];*/
	}

	// 마린 코드 3
	{
		/*Marine* marines[100];

		marines[0] = new Marine(2, 3, "Marine 2");
		marines[1] = new Marine(1, 5, "Marine 1");

		marines[0]->show_status();
		marines[1]->show_status();

		std::cout << std::endl;
		std::cout << "마린1이 마린2를 공격!" << std::endl;

		marines[0]->be_attacked(marines[1]->attack());

		marines[0]->show_status();
		marines[1]->show_status();

		delete marines[0];
		delete marines[1];*/
	}

	// 포톤 캐논 코드
	{
		Photon_Cannon pc1(3, 3, "Cannon");
		Photon_Cannon pc2 = pc1;

		Photon_Cannon pc3 = pc2;
		// 복사 생성자 호출, 생성시에만

		pc1.show_status();
		pc2.show_status();
	}
}