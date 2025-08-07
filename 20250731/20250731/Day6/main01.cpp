#include <iostream>

int main()
{
	// --------------------------------------------
	//  1. 배열
	// --------------------------------------------

	// ## 배열이란?
	// 변수를 한번에 여러개 선언하는 문법

	// ## 배열 사용법
	// 기존 : 
	// 정수를 두개입력받고,
	int number1 = 0;
	int number2 = 0;

	// 배열 사용시: 
	int number[2] = { 0, 0 };
	char name[100] = "abcd";
	// char => 문자 하나 'a', 'b'
	// char 배열 => 문자들을 이어 붙여서 문자열이 됨.

	// 기존
	printf("number1을 입력해주세요");
	scanf_s("%d", &number1);

	printf("number2을 입력해주세요");
	scanf_s("%d", &number2);

	// 배열 사용시
	printf("number[0]을 입력해주세요");
	scanf_s("%d", &number[0]);

	printf("number[1]을 입력해주세요");
	scanf_s("%d", &number[1]);

	printf("number[0] = %d\n", number[0]);
	printf("number[1] = %d\n", number[1]);

	// 변수에 대한 메모리 구조
	// RAM이 어떻게 생겼나
	//  RAM은 컴퓨터살때 보는 사양중에 중요한것중 하나
	//   CPU, 그래픽카드(GPU), RAM
	// RAM : 몇기가.
	// 컴퓨터가 실행될때, 메모리를 얼마나 쓸수있을까
	// RAM 16GB, 32GB, 64GB
	// 변수를 선언하면 (int) 4byte를 차지한다.
	// 차지한다 => 어딘가에 공간을 쓰고있다.

	int a = 0;
	int b = 0;
	//int arr[3] = { 0,0,0 };
	//int arr[3] = { };
	int arr[3] = { 0, };
}