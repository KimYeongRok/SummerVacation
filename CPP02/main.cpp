#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int user_input;

	cout << "���� ����" << endl;
	cout << "1. �̸�" << endl;
	cout << "2. ����" << endl;
	cout << "3. �а�" << endl;
	cout << "�Է� : ";
	cin >> user_input;

	switch (user_input)
	{
	case 1:
		cout << "�迵��" << endl;
		break;
	case 2:
		cout << "����" << endl;
		break;
	case 3:
		cout << "���Ӱ��а�" << endl;
		break;
	default:
		cout << "�߸��� ��ȣ�Դϴ�." << endl;
		break;
	}

	return 0;
}