#include <iostream>
#include "marine.h"
#include "Photon_Cannon.h"

int main() {
	// ���� �ڵ� 1
	{
		//Marine marine1(2, 3);
		//Marine marine2(3, 5);

		//marine1.show_status();
		//marine2.show_status();

		//std::cout << std::endl;

		//std::cout << "����1�� ����2�� ����!" << std::endl;
		//marine2.be_attacked(marine1.attack());

		//marine1.show_status();
		//marine2.show_status();
	}

	// ���� �ڵ� 2
	{
		/*Marine* marines[100];

		marines[0] = new Marine(2, 3);
		marines[1] = new Marine(3, 5);

		marines[0]->show_status();
		marines[1]->show_status();

		std::cout << std::endl;
		std::cout << "����1�� ����2�� ����!" << std::endl;

		marines[0]->be_attacked(marines[1]->attack());

		marines[0]->show_status();
		marines[1]->show_status();

		delete marines[0];
		delete marines[1];*/
	}

	// ���� �ڵ� 3
	{
		/*Marine* marines[100];

		marines[0] = new Marine(2, 3, "Marine 2");
		marines[1] = new Marine(1, 5, "Marine 1");

		marines[0]->show_status();
		marines[1]->show_status();

		std::cout << std::endl;
		std::cout << "����1�� ����2�� ����!" << std::endl;

		marines[0]->be_attacked(marines[1]->attack());

		marines[0]->show_status();
		marines[1]->show_status();

		delete marines[0];
		delete marines[1];*/
	}

	// ���� ĳ�� �ڵ�
	{
		Photon_Cannon pc1(3, 3, "Cannon");
		Photon_Cannon pc2 = pc1;

		Photon_Cannon pc3 = pc2;
		// ���� ������ ȣ��, �����ÿ���

		pc1.show_status();
		pc2.show_status();
	}
}