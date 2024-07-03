#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int user_input;

	cout << "정보 열람" << endl;
	cout << "1. 이름" << endl;
	cout << "2. 성별" << endl;
	cout << "3. 학과" << endl;
	cout << "입력 : ";
	cin >> user_input;

	switch (user_input)
	{
	case 1:
		cout << "김영록" << endl;
		break;
	case 2:
		cout << "남자" << endl;
		break;
	case 3:
		cout << "게임공학과" << endl;
		break;
	default:
		cout << "잘못된 번호입니다." << endl;
		break;
	}

	return 0;
}