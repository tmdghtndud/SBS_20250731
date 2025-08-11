#include <iostream>
enum class ERsp 
{
	Rock,
	Scissor,
	Paper,

	Max	// 갯수세기에 용이하기때문에 마지막에 보통 둠
};

void PrintRSP(ERsp hand)
{
	switch ((ERsp)hand)
	{
	case ERsp::Rock:
		printf("바위\n");
		break;
	case ERsp::Scissor:
		printf("가위\n");
		break;
	case ERsp::Paper:
		printf("보\n");
		break;

	default:
		break;
	}
}

int main()
{
	// - 주말 숙제
	//  1. 가위바위보
	//  2. 가위바위보 하나빼기
	//  3. 숫자야구 (3자리 버전, 4자리 버전)

	//------------------------------
	//  1. 가위바위보 풀이
	//------------------------------
	
	// 가이드라인을 어떻게 잡고
	// 가이드라인에 따른 수도코드를 어떻게 적을것인가

	// 1) 사용자, 컴퓨터 무엇을 낼지 입력 / 셋업
	// input(userHand)
	// comHand = rand(0,3) // 0~2까지랜덤
	// 
	// 2) 뭘냈는지 화면에 출력
	// printRSP(userHand)
	// printRSP(comHand)
	// 
	// 3) 승패판정
	// if (userHand == comHand)
	//		print(무승부)
	// else if ( (userHand == 가위 and comHand == 보) or
	//			(userHand == 바위 and comHand == 가위) or
	//			(userHand == 보 and comHand == 바위) )
	//		print(유저승리)
	// else
	//		print(컴퓨터승리)

	//https://github.com/tmdghtndud/SBS_20250731
	//20250731/20250731/Day8/main01.cpp

	// 이코드를 참고해서
	// 가위바위보 하나빼기를 만들어보세요
	// (쉬는시간 포함해서) 2시까지 시간드릴게요

	srand(time(NULL));

	// 1) 사용자, 컴퓨터 무엇을 낼지 입력 / 셋업
	int userHand = 0;
	printf("UserHand를 입력해주세요 (0 : 바위, 1: 가위, 2: 보)");
	scanf_s("%d", &userHand);
	
	int comHand = rand() % (int)ERsp::Max;

	// 2) 뭘냈는지 화면에 출력
	printf("유저가 낸것 : ");
	PrintRSP((ERsp)userHand);
	
	printf("컴퓨터가 낸것 : ");
	PrintRSP((ERsp)comHand);

	// 3) 승패판정
	if (userHand == comHand)
	{
		printf("무승부\n");
	}
	else if ((userHand == (int)ERsp::Scissor && comHand == (int)ERsp::Paper) ||
		(userHand == (int)ERsp::Rock && comHand == (int)ERsp::Scissor) ||
		(userHand == (int)ERsp::Paper && comHand == (int)ERsp::Rock))
	{
		printf("유저 승리\n");
	}
	else
	{
		printf("컴퓨터 승리\n");
	}


	return 0;
}