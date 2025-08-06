#include <iostream>

int main()
{
	// --------------------------------------------
	//  5. do ~ while 반복문
	// --------------------------------------------

	// 사용법
	//do
	//{
	//
	//} while (조건식);

	// do : 본문을 무조건 한번 실행하고
	// while : 그다음부터 조건식이 true면 반복한다.

	// while문 과의 차이점 : 본문을 무조건 한번 실행한다.
	int count = 0;
	do
	{
		printf("count 를 입력해주세요 : ");
		scanf_s("%d", &count);
	} while (false == (0 <= count && count <= 10));

	printf("count : %d\n", count);
}