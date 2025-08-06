#include <iostream>

void example2();
void example3();
void example4();
void example5();

int main()
{
	//example2();
	//example3();
	//example4();
	example5();
}

void example2()
{
	// 2)
	//  정수를 하나 입력받고,
	//  [입력받은 정수] 횟수 만큼 [성적]을 입력받고
	//  사용자가 입력한 성적의 합계 / 평균값을 출력한다.

	// 수도코드
	// 
	// input(count)
	// sum = 0
	// for(i, count 번)
	//		input(score)
	//		sum = sum + score
	// 
	// average = sum / count
	// print(sum)
	// print(average)

	int count = 0;
	printf("count를 입력해주세요 : ");
	scanf_s("%d", &count);

	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		int score = 0;
		printf("score를 입력해주세요. ");
		scanf_s("%d", &score);
		sum = sum + score;
	}
	float average = sum / (float)count;

	printf("합계 : %d\n", sum);
	printf("평균 : %f\n", average);
}

void example3()
{
	// 3) 
	//  정수를 하나 입력받고
	//  해당 정수의 팩토리얼을 구한다.  5! => 1*2*3*4*5

	// 수도코드
	// input(number)
	// factorial = 1
	//
	// for(i, 1 to number)
	//		factorial = factorial * i
	// 
	// print(factorial)

	int number = 0;
	printf("number를 입력해주세요 : ");
	scanf_s("%d", &number);

	int factorial = 1;
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}

	printf("factorial : %d\n", factorial);

}
void example4()
{
	// 4)
	//  정수를 입력 받고
	//  1부터 [입력받은 정수]까지의 홀수는 +, 짝수는 -로 누적한 값 출력하기

	// 수도코드
	// 
	// input(number)
	// sum = 0
	// 
	// for (i, 1 to number)
	//		if( i is 홀수 )
	//			sum = sum + i
	//		else 
	//			sum = sum - i
	//
	// print(sum)

	int number = 0;
	printf("number를 입력해주세요 : ");
	scanf_s("%d", &number);

	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (i % 2 == 1)
		{
			//sum = sum + i;
			sum += i;
		}
		else
		{
			//sum = sum - i;
			sum -= i;
		}
	}

	printf("합계 : %d\n", sum);

}
void example5()
{
	// 5)
	//  정수를 하나 입력받고
	//  1부터 [입력받은 정수]까지의 3의 배수 이면서, 5의 배수인 값들의 합 구하기

	// 수도코드 
	//  input(number)
	//  sum = 0
	//  for(i, 1 to number)
	//		if( i is 3의배수 AND i is 5의 배수) 
	//			sum += i
	//  print(sum)

	int number = 0;
	printf("number를 입력해주세요 : ");
	scanf_s("%d", &number);

	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("sum : %d\n", sum);
}