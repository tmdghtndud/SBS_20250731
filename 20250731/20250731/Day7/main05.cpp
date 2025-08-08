#include <iostream>
#define MY_VALUE 5
#define SQUARE(x) ((x) * (x))
#define BAD_SQUARE(x) x*x
#define PI 3.14
//#define SEA_NAVIGATION

int main()
{
	//--------------------------------------------
	// 4. 매크로 (#define)
	//--------------------------------------------

	// 전처리기 지시문
	// 심볼 이름을 상수나 코드로 치환하는 기능
	
	// 사용 방법
	// #include 아래에
	// #define 심볼이름 상수or코드

	printf("myValue : %d\n", SQUARE(5));
	printf("myValue : %d\n", BAD_SQUARE(2+3));


	// 전처리기 지시문
	// #ifdef 심볼
	// 심볼이 define 되어있으면
	// 안에 내용을 컴파일한다.(F5)

#ifndef SEA_NAVIGATION
	printf("항해를 시작한다.\n");
	printf("해적을 만났다\n");
#endif

	return 0;
}