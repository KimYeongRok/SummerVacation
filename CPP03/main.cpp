#include <iostream>

int change_val(int* p) {
	*p = 3;
	return 0;
}

int change_val(int& p) {
	p = 3;

	return 0;
}

int& func(int& a) {
	a = 5;
	return a;
}

int func() {
	int a = 5;
	return a;
}

int main() {
	{
		/*int number = 5;

		std::cout << number << std::endl;
		change_val(&number);
		std::cout << number << std::endl;*/
	}

	{
		//int a = 3;
		//int& another_a = a; 
		//// ������
		//// �����ڸ� ���鶧���� ������ ���������� ����ؾ���

		//another_a = 5;
		//std::cout << "a : " << a << std::endl;
		//std::cout << "another_a : " << another_a << std::endl;
	}

	{
		/*int number = 5;
		std::cout << number << std::endl;
		change_val(number);
		std::cout << number << std::endl;*/
	}

	{
		//const int& ref1 = 4;	// <- ��� �����ڴ� ����
		//int a = ref1;	// a = 4 �� ���� �ǹ�

		//// int& ref2 = 3;		   <- �Ұ���
	}

	// �迭 ������
	{
		//int arr[3] = { 1,2,3 };
		//int(&ref)[3] = arr;
		//// 1. int�� [3]�� ũ�⸦ ���� ������ ref�� ����
		//// 2. ref�� arr�� �����ϵ��� ��

		//std::cout << arr[0] << arr[1] << arr[2] << std::endl;

		//ref[0] = 2;
		//ref[1] = 3;
		//ref[2] = 1;

		//std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	}

	// ������ ���� �Լ�
	{
		//int b = 2;
		//int c = func(b);
		//std::cout << c << std::endl;
	}

	// ���� ������ ������ �����ϴ��� ��� �����ڰ� �޴� �ٸ� ������ �� �����
	{
		const int& c = func();
		std::cout << "c : " << c << std::endl;
	}

	return 0;
}