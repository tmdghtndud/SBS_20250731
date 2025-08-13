#include <iostream>
#define NUMBER_COUNT 4
// answer 배열(정답이)이 유효성검사를 통과하면 1(True)
//                      유효성검사를 통과하지 않으면 0 (False)
bool IsValidAnswer(int* answer)
{
	bool isValidate = true;

	if (answer[0] == 0)
	{
		isValidate = false;
	}
	for (int i = 0; i < NUMBER_COUNT; i++)
	{
		for (int j = i + 1; j < NUMBER_COUNT; j++)
		{
			if (answer[i] == answer[j])
			{
				isValidate = false;
			}
		}
	}
	return isValidate;
}

void SplitNumber(int* answer, int number)
{
	for (int i = 0; i < NUMBER_COUNT; i++)
	{
		answer[NUMBER_COUNT - 1 - i] = number % 10;
		number /= 10;
	}

}

int main()
{
	// 숫자야구
	// 가이드라인
	// 1) 정답 생성
	// 2) 9번반복하는 숫자야구 시작
	// 3) 사용자 입력을 받고, 각 자릿수별로 나눈다.
	// 4) 정답과 비교해서 strike, ball 갯수를 출력해준다
	// 5) 정답과 동일하면 승리, 9번반복하는동안 다틀리면 패배

	// 1) 정답 생성
	//   rand()%10000 을 무한반복한다.
	//   언제까지? => 각자릿수가 안겹칠때까지.
	//   
	//	 do
	//		fullAnswer = rand(1000, 9999)
	//   while(fullAnswer 각자릿수가 하나라도 겹치면)

	//   로또번호 추첨기처럼 10개의 공을 넣어서 4개의 숫자를 뽑는 방법
	//   절대 각자릿수가 겹칠일이 없음.

	srand(time(NULL));

	int answer[NUMBER_COUNT] = {};
	int fullAnswer = 0;
	do
	{
		fullAnswer = rand() % 8999 + 1000;
		SplitNumber(answer, fullAnswer);

	} while (IsValidAnswer(answer) == false);

	printf("정답 : %d\n", fullAnswer);

	bool isGameWin = false;

	// 2) 9번반복하는 숫자야구 시작
	for (int gameTurn = 0; gameTurn < 9; gameTurn++)
	{
		// 3) 사용자 입력을 받고, 각 자릿수별로 나눈다.
		//   do
		//		input(userNumber)
		//		userAnswer = split(userNumber)
		//   while(validate(userAnswer) == false);

		int userInput = 0;
		int userAnswer[NUMBER_COUNT] = {};
		do
		{
			printf("정답을 유추해주세요 : ");
			scanf_s("%d", &userInput);
			SplitNumber(userAnswer, userInput);
		} while (IsValidAnswer(userAnswer) == false);

		// 4) 정답과 비교해서 strike, ball 갯수를 출력해준다
		// strike 갯수세는 로직
		// strike => 자릿수도 같고, 값도 같은 것
		// 각 자릿수별로 값이 같은지 비교하면되겠다. (answer, userAnswer)

		// for(i, 4)
		//		if(answer[i] == userAnswer[i])
		//			strike++
		int strike = 0;
		for (int i = 0; i < NUMBER_COUNT; i++)
		{
			if (answer[i] == userAnswer[i])
			{
				strike++;
			}
		}

		int ball = 0;
		// 볼갯수는 자릿수는 같지않고, 값은 같은게 있으면 ball 증가.
		// userAnswer 기준으로 => answer 를 비교해볼겁니다
		
		// for(i, 4) => i는 userAnswer 의 인덱스
		//		for(j, 4) => j는 answer의 인덱스
		//			if(i != j and userAnswer[i] == answer[j])
		//				ball++
		for (int i = 0; i < NUMBER_COUNT; i++)
		{
			for (int j = 0; j < NUMBER_COUNT; j++)
			{
				if (i != j && userAnswer[i] == answer[j])
				{
					ball++;
				}
			}
		}

		printf("strike : %d\n", strike);
		printf("ball : %d\n", ball);

		if (strike == NUMBER_COUNT)
		{
			isGameWin = true;
			printf("게임 승리\n");
			break;
		}
	}

	if (isGameWin == false)
	{
		printf("게임 패배\n");
	}


	return 0;
}