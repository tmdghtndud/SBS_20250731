#include <iostream>

int main()
{
	// 
	// 숫자야구
	// 숙제안했으면
	// 3시까지 실습.
	// 
	// 가이드라인 직접써보기.
	// 10분드릴게요. (25분까지)
	//


	// 3시반 ~ 
	// 3시반부터 카드게임
	// 구조체를 사용해봄

	int lotto[10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		lotto[i] = i;
	}

	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d, ", lotto[i]);
	}



	return 0;
}