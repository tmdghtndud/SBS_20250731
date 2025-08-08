#include <iostream>

int main()
{
	// --------------------------------------------
	//  2. 포인터 - 1
	// --------------------------------------------

	// 포인터라는 개념은 C/C++ 에서밖에 없습니다.

	// ## 포인터란?
	// 
	// 변수에는 값을 담았습니다.
	// 정수, 실수, 문자
	//
	// 포인터는 자료형입니다.
	// 주소값

	int a = 3;
	
	// ## 포인터를 어떻게 쓰는가?

	int* ptr = nullptr;

	// 변수선언
	//자료형 변수명 = 값
	//자료형 : int*
	//nullptr : 아무것도 가르키지 않는다.

	// * => 주소를 가르킨다.
	// int* => int형 주소를 가르킨다. (int로 선언된 변수의 주소를 가르킨다)

	// ptr은 주소를 가르키는거니까 
	//  a 변수의 주소를 가르킬수도있겠다.
	ptr = &a;

	// & => 변수의 주소를 구함
	//scanf_s("%d", &a);

	// * => 포인터가 가리키는 주소의 값을 가져온다.

	int* myPtr = &a;
	//&a => H9
	
	printf("a의 값 : %d\n", a);
	printf("a의 주소값 : %p\n", &a);
	printf("myPtr의 값 : %p\n", myPtr);
	printf("myPtr의 주소값 : %p\n", &myPtr);
	printf("myPtr이 가르키고있는 주소의 값: %d\n", *myPtr);

	//int* => int형을 가리키는 포인터 자료형
	//int* * => int* 형을 가리키는 포인터 자료형

	int*************** amazing = nullptr;

	int** myPtr2 = &myPtr;
	printf("myPtr2이 가르키고있는 주소의 값: %p\n", *myPtr2);

	// float* 
	// char*

	float* floatPtr = nullptr;
	int* intPtr = nullptr;
	char* charPtr = nullptr;

	// floatPtr 이나, intPtr이나 charPtr 이나 결국 4바이트 주솟값

	charPtr = (char*)intPtr;
	// 결국 대입도 다 잘된다.

	// 다만 사용할때, 문제가 생길수도있으니, 그건 사용자 몫

	// void => 없음
	// void* => 주소값을 기억하기 위한 자료형
	// void* voidPtr = (void*)floatPtr;

}