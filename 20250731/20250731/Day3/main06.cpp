#include <iostream>
void example1();
void example2();
void example3();
void example4();
void example5();
void example6();
void example7();
int main()
{
	// 함수

	// 실습
	// 1. 정수를 하나 입력받고, 
	//    10~20 사이의 수인지 판단

	// 디버깅할떄는 F11로 함수안으로 들어갈수있음.
	//example1();
	//example2();
	//example3();
	//example4();
	//example5();
	//example6();
	example7();
}

void example1()
{
	// 1. 정수를 하나 입력받고, 
	//    10~20 사이의 수인지 판단
	// 
	// 수도코드 ( 이거를 프로그램으로 만들어야할때, 어떤 로직으로 만들어야할까 상상해보는 단계)

	// input(number) - number를 입력받는다.
	// if ( 10 <= number and number <= 20 ) then
	//		print(OK)
	// else 
	//		print(NO)

	// input(number)
	int number = 0;
	printf("number를 입력해주세요 : ");
	scanf_s("%d", &number);

	//if ( 10 <= number and number <= 20 ) then
	// ... 생략
	if (10 <= number && number <= 20)
	{
		printf("OK\n");
	}
	else
	{
		printf("NO\n");
	}
}

void example2()
{
	// 2. 정수를 하나 입력받고
	//	  홀수/짝수 판단 

	// 수도코드
	// 홀수/ 짝수의 조건

	// input(number)
	// if (number % 2 == 0) then
	//		print(짝수)
	// else
	//		print(홀수)

	// input(number)
	int number = 0;
	printf("number를 입력해주세요 : ");
	scanf_s("%d", &number);

	// if (number % 2 == 0) then
	// ... 생략
	if (number % 2 == 0)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수\n");
	}
}

void example3()
{
	// 3. 정수를 하나 입력받고
	//    3의 배수이면서 5의 배수인지 판별

	// 수도코드
	// input(number)
	// if( (number is 3의 배수) and (number is 5의 배수) ) then
	//		print(OK)
	// else
	//		print(NO)

	int number = 0;
	printf("number를 입력해주세요 : ");
	scanf_s("%d", &number);

	if ( (number % 3 == 0) && (number % 5 == 0))
	{
		printf("OK\n");
	}
	else
	{
		printf("NO\n");
	}
}

void example4()
{
	// 4. 키(실수)와 나이(정수)를 입력받고,
	//	  140cm 이상이고, 12세 이상이면, 놀이기구 탑승 가능
	//							아니면 탑승 불가능 문구출력

	// 수도코드
	// input(height)
	// input(age)

	// if( 140 <= height and 12 <= age ) then
	//		print(놀이기구 탑승 가능)
	// else
	//		print(탑승 불가능)

	float height = 0;
	printf("height를 입력해주세요 : ");
	scanf_s("%f", &height);

	int age = 0;
	printf("age를 입력해주세요 : ");
	scanf_s("%d", &age);

	if (140 <= height && 12 <= age)
	{
		printf("놀이기구 탑승 가능\n");
	}
	else
	{
		printf("탑승 불가능\n");
	}
}

void example5()
{
	// 5. 세 정수를 입력받고, 
	//		모두 다르면, 모두 다름
	//		둘만 같으면, 두개만 같음
	//		모두 같으면, 모두 같음 출력

	// 수도코드
	// 
	// input(num1)
	// input(num2)
	// input(num3)
	// 
	// if ( num1 == num2 and num2 == num3 ) then
	//		print(모두 같음)
	// else if ( num1 != num2 and num2 != num3 and num1 != num3 ) then
	//		print(모두 다름)
	// else
	//		print(두개만 같음)

	int num1 = 0;
	printf("num1을 입력해주세요 : ");
	scanf_s("%d", &num1);

	int num2 = 0;
	printf("num2을 입력해주세요 : ");
	scanf_s("%d", &num2);

	int num3 = 0;
	printf("num3을 입력해주세요 : ");
	scanf_s("%d", &num3);

	if (num1 == num2 && num2 == num3)
	{
		printf("모두 같음\n");
	}
	else if (num1 != num2 && num2 != num3 && num1 != num3)
	{
		printf("모두 다름\n");
	}
	else
	{
		printf("두개만 같음\n");
	}
}

void example6()
{
	// 6. 점수 3개(정수)를 입력받고 평균이 80 이상이고, 
	//		모든 과목이 60점 이상이고, 다시한번 출석했나요?를 물어보고, 출석했으면 "합격"
	//																아니면	 "출결로 인한 불합격" 출력
	//						아니면	"점수 미달로 인한 불합격" 출력

	// 수도코드
	// input(score1)
	// input(score2)
	// input(score3)
	// average = (score1 + score2 + score3) / 3

	// if ( 80 <= average && 60 <= score1 && 60 <= score2 && 60 <= score3) then
	//		input(attend)
	//		if(attend)
	//			print(합격)
	//		else
	//			print(출결로 인한 불합격)
	// else
	//		print(점수 미달로 인한 불합격)

	int score1 = 0;
	printf("score1을 입력해주세요 : ");
	scanf_s("%d", &score1);

	int score2 = 0;
	printf("score2을 입력해주세요 : ");
	scanf_s("%d", &score2);

	int score3 = 0;
	printf("score3을 입력해주세요 : ");
	scanf_s("%d", &score3);

	float average = (score1 + score2 + score3) / 3.0;

	if (80 <= average &&	// 80점이상이고
		(60 <= score1 && 60 <= score2 && 60 <= score3))		// 각점수가 60점 이상이면
	{
		int attend = 0;
		printf("출결했나요? (했으면 1, 안했으면 0) : ");
		scanf_s("%d", &attend);

		if (attend == 1)
		{
			printf("합격\n");
		}
		else
		{
			printf("출결로 인한 불합격\n");
		}
	}
	else
	{
		printf("점수 미달로 인한 불합격\n");
	}
}

void example7()
{
	// 7. 1~7까지 입력받고 1:Monday, 2: Tuesday ~~ ... 7 : Sunday 출력

	// 수도코드
	//input(day)
	//switch(day)
	//	case 1: print(Monday)
	//	case 2: print(Tuesday)
	//	case 3: print(Wednesday)
	//	case 4: print(Thursday)
	//	case 5: print(Friday)
	//	case 6: print(Saturday)
	//	case 7: print(Sunday)
	//  default: print(Invalid)

	int day = 0;
	printf("day를 입력해주세요 : ");
	scanf_s("%d", &day);

	switch (day)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	default:
		printf("Invalid\n");
		break;
	}
}

