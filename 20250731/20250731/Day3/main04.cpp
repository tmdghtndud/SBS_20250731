#include <iostream>

int main()
{
	// ------------------------------------
	//  3. 조건문 (if - else if - else)
	// ------------------------------------

	// if ( A ) 
	// {
	//		본문1
	// } 
	// else 
	// {
	//		본문2
	// }

	// if ( A ) 
	// {
	//		본문1
	// } 
	// else if ( B )
	// {
	//		본문2
	// }
	// else 
	// {
	//		본문3
	// }
	// 
	// =>  A 가 참이면 
	//			본문1
	//     그렇지 않고, B가 참이면
	//			본문2
	//	   그렇지 않으면
	//			본문3

	// 예제
	int score = 0;
	// print(성적을 입력해주세요)
	// input score
	// if ( 90 <= score ) then
	//		print(A 입니다)
	// else if ( 80 <= score ) then
	//		print(B 입니다)
	// else if ( 70 <= score ) then
	//		print(C 입니다)
	// else if ( 60 <= score ) then
	//		print(D 입니다)
	// else 
	//		print(F 입니다)

	printf("성적을 입력해주세요 : ");
	scanf_s("%d", &score);
	if (90 <= score)
	{
		printf("A 입니다.\n");
	}
	else if (80 <= score)
	{
		printf("B 입니다.\n");
	}
	else if (70 <= score)
	{
		printf("C 입니다.\n");
	}
	else if (60 <= score)
	{
		printf("D 입니다.\n");
	}
	else
	{
		printf("F 입니다.\n");
	}

	// 당분간 실행은 F11로 하겠습니다.
	// F11은 int main함수의 가장 첫번째줄부터 실행하는 실행단축키입니다.

}