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
		//// 참조자
		//// 참조자를 만들때에는 누구의 참조자인지 명시해야함

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
		//const int& ref1 = 4;	// <- 상수 참조자는 가능
		//int a = ref1;	// a = 4 와 같은 의미

		//// int& ref2 = 3;		   <- 불가능
	}

	// 배열 참조자
	{
		//int arr[3] = { 1,2,3 };
		//int(&ref)[3] = arr;
		//// 1. int형 [3]의 크기를 가진 참조자 ref를 생성
		//// 2. ref가 arr을 참조하도록 함

		//std::cout << arr[0] << arr[1] << arr[2] << std::endl;

		//ref[0] = 2;
		//ref[1] = 3;
		//ref[2] = 1;

		//std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	}

	// 참조자 리턴 함수
	{
		//int b = 2;
		//int c = func(b);
		//std::cout << c << std::endl;
	}

	// 지역 변수를 참조자 리턴하더라도 상수 참조자가 받는 다면 생명이 더 연장됨
	{
		const int& c = func();
		std::cout << "c : " << c << std::endl;
	}

	return 0;
}