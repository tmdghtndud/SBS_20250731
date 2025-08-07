#include <iostream>
void example1();
void example2();
void example3();
void example4();
int main()
{
	int arr[3] = { 0, };
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	// 요거는 없는애임. 에러납니다.
	// arr[3] = 3;
	
	// --------------------------------------------
	//  2. 배열의 가장 기초적인 활용
	// --------------------------------------------
	// 배열은 주로, for문이랑 같이씁니다.
	//example1();
	example2();


}

void example1()
{
	int arr[10] = {0, };

	// 0 ~ 9 까지 만들면
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = 5;
	arr[6] = 6;
	arr[7] = 7;
	arr[8] = 8;
	arr[9] = 9;

	// 반복문 Tip.
	// 노가다 하다보면, 겹치는 부분이 생기는데
	// 그 부분을 규칙을 찾아서 반복문으로 바꿀 수 있는지 확인한다.
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	printf("arr[0] = %d\n", arr[0]);
	printf("arr[1] = %d\n", arr[1]);
	// ... 
	printf("arr[9] = %d\n", arr[9]);

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	// 실습
	// 1. 
	// 성적 10개를 입력받고
	// 
	// 합계와, 평균(실수) 을 출력해주고, 
	// 입력받은 성적들을 다시 출력해준다.


	// 2. 
	// 성적 10개를 입력받고
	//
	// 가장 낮은 성적과, 가장 높은 성적을 출력해주고
	// 입력받은 성적들을 다시 출력해준다.

	// 3.
	// 10개 숫자를 입력받고
	// 
	// 홀수갯수와 짝수갯수를 출력해준다
	// 입력받은 숫자들을 다시 출력해준다.
}

void example2()
{
	// 1. 
	// 성적 10개를 입력받고
	// 
	// 합계와, 평균(실수) 을 출력해주고, 
	// 입력받은 성적들을 다시 출력해준다.

	int score[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		printf("score[%d]를 입력해주세요", i);
		scanf_s("%d", &score[i]);
	}

	int sum = 0;
	float average = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += score[i];
	}

	printf("합계 : %d\n", sum);
	average = sum / 10.0;
	printf("평균 : %f\n", average);

	// 2. 
	// 성적 10개를 입력받고
	//
	// 가장 낮은 성적과, 가장 높은 성적을 출력해주고
	// 입력받은 성적들을 다시 출력해준다.


	// 3.
	// 10개 숫자를 입력받고
	// 
	// 홀수갯수와 짝수갯수를 출력해준다
	// 입력받은 숫자들을 다시 출력해준다.
}

void example3()
{
	// 2. 
	// 성적 10개를 입력받고
	//
	// 가장 낮은 성적과, 가장 높은 성적을 출력해주고
	// 입력받은 성적들을 다시 출력해준다.
	
	// 수도코드
	// scores = []
	// 
	// 1) 입력받기.
	// for(i, 10번)
	//		input(scores[i])
	//	
	// 2) min값, max값 구하기
	// min = 9999, max = 0
	// for(i, 10번)
	//		if(max < scores[i])
	//			max = scores[i]
	//		if(scores[i] < min)
	//			min = scores[i]
	// 
	// print(min)
	// print(max)
	// 
	// 3) 입력받은 성적들 출력하기
	// for(i, 10번)
	//		print(scores[i])

	int numbers[10] = { 0, };

	// 1) 입력받기.
	for (int i = 0; i < 10; i++)
	{
		printf("scores[%d]를 입력해주세요 : ", numbers[i]);
		scanf_s("%d", &numbers[i]);
	}

	// 2) min값, max값 구하기
	int min = numbers[0]; // INT16_MAX;
	int max = numbers[0]; // 0;
	for (int i = 0; i < 10; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	printf("min : %d\n", min);
	printf("max : %d\n", max);

	// 3) 입력받은 성적들 출력하기
	for (int i = 0; i < 10; i++)
	{
		printf("scores[%d] : %d\n", i, numbers[i]);
	}
}

void example4()
{
	// 3.
	// 10개 숫자를 입력받고
	// 
	// 홀수갯수와 짝수갯수를 출력해준다
	// 입력받은 숫자들을 다시 출력해준다.

	int numbers[10] = { 0, };

	// 1) 입력받기.
	for (int i = 0; i < 10; i++)
	{
		printf("numbers[%d]를 입력해주세요 : ", numbers[i]);
		scanf_s("%d", &numbers[i]);
	}

	// 2) 홀수갯수와 짝수갯수를 구한다

	int num1 = 0;	//홀수저장
	int num2 = 0;	//짝수저장
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			num2++;
		}
		if (numbers[i] % 2 == 1)
		{
			num1++;
		}
	}
	printf("홀수 갯수 : %d\n", num1);
	printf("짝수 갯수 : %d\n", num2);

	// 3) 입력받은 숫자들을 다시 출력해준다.
	for (int i = 0; i < 10; i++)
	{
		printf("numbers[%d] : %d\n", i, numbers[i]);
	}


}