#include <iostream>

int add(int a, int b)
{
	return a + b;
}
void exmaple1();
int main() 
{
	//--------------------------------------------
	// 3. 함수 (function)
	//--------------------------------------------

	// ## 함수란? 
	// 특정 작업을 수행하는 코드 묶음
	// 한번 정의해두면 필요할 때마다 호출해서 재사용할 수 있음.
	// 입력값 => 특정 작업을 수행 => 결과값 반환

	int myValue = add(3, 5);
	printf("myValue : %d\n", myValue);

	// ## 함수를 왜 쓰고, 언제 쓰는가?
	// 1. 가독성을 위해서
	// 2. 재사용성
	//		랜덤수를 뽑을때 
	//		random(1,25)
	//      이런걸 함수로 미리 만들어두면,
	//      rand()%25 + 1; 를 안써도 된다.

	// !! 함수 문법
	// 
	// 반환자료형 함수명(매개변수 param)
	// {
	//		본문
	//		return 반환값;
	// }

	// int add(int a, int b)
	// {
	// 		return a + b;
	// }

	// 1) 반환자료형이 void일 경우에는 return이 없다.
	// 2) 우리 수업에서는 함수명은 파스칼케이스로 씁니다.
	// 3) 매게변수가 없는 경우도 존재한다.
	//		(없을때는 void라고 적기도하지만, 요즘에는그냥 안적는 추세)
	// void example(void) {}

	// ## 함수 주의사항
	// main문 위에 선언이나 정의를 꼭 해줘야합니다. (보통 선언을 위에 해주고, 아래에 정의를 해줍니다.)
	// 선언/정의
	// 선언 
	// int add(int a, int b);
	// 정의 
	// int add(int a, int b) { 본문 포함 }



	// ## 함수 사용법
	// Call By Value
	// Call By Reference
	// Call By Address
}

void example1()
{

}