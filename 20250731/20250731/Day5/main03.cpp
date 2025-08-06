#include <iostream>
void example1();
void example2();
void example3();
int main()
{
	// --------------------------------------------
	//  2. 중첩 반복문 (2중 for문, 3중 for문)
	// --------------------------------------------

	// 말그대로 
	//  반복문안에 반복문이 있는거에요.
	//example1();
	//example2();
	//example3();

	// 2중 포문
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}

	// 실습
	// 
	// *
	// **
	// ***
	// ****
	// *****
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j <= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	// *****
	//  ****
	//    **
	//     *

	// *****
	// ****
	// ***
	// **
	// *

	//     *
	//    **
	//   ***
	//  ****
	// *****
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (4 <= i + j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}


}
void example1()
{
	for (int i = 0; i < 5; i++)
	{
		printf("\n아이 : %d\n", i);
		for (int j = 0; j < 5; j++)
		{
			// \t : 탭
			printf("제이 : %d\t", j);
		}
	}
}
void example2()
{
	// 2중 포문으로 할수있는 가장 보편적인 실습
	// 구구단

	for (int i = 1; i <= 9; i++)
	{
		printf("%d x %d = %d\n", 1, i, 1 * i);
	}

	// 실습 
	// 2중 포문을 활용하여 구구단 찍기

	// 반복문을 배우는 가장 기본적인 이유
	//  - 반복을 줄여주기 위해서
	// 
	// 모든걸 수동으로 한번 쳐보세요.
	// 그리고 규칙을 찾아보세요.
	// 규칙에 i,j,k로 조합되는 무언가가 있을거에요.
	// 그걸 활용하면 돼요.


	//printf("%d x %d = %d\n", 1, 1, 1 * 1);
	//printf("%d x %d = %d\n", 1, 2, 1 * 2);
	//printf("%d x %d = %d\n", 1, 3, 1 * 3);
	//printf("%d x %d = %d\n", 1, 4, 1 * 4);
	//printf("%d x %d = %d\n", 1, 5, 1 * 5);
	//printf("%d x %d = %d\n", 1, 6, 1 * 6);
	//printf("%d x %d = %d\n", 1, 7, 1 * 7);
	//printf("%d x %d = %d\n", 1, 8, 1 * 8);
	//printf("%d x %d = %d\n", 1, 9, 1 * 9);

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
}
void example3()
{
	// 3중 포문 ( 특수한경우 아니면 안써요)
	// 시:분:초
	for (int hour = 0; hour < 24; hour++)
	{
		for (int min = 0; min < 60; min++)
		{
			for (int sec = 0; sec < 60; sec++)
			{
				printf("%02d:%02d:%02d\n", hour, min, sec);
			}
		}
	}
}