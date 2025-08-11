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
	switch (hand)
	{
	case ERsp::Rock:
		printf("바위");
		break;
	case ERsp::Scissor:
		printf("가위");
		break;
	case ERsp::Paper:
		printf("보");
		break;
	default:
		printf("[에러]");
		break;
	}
}

int main()
{
	//------------------------------
	//  2. 가위바위보 하나빼기 풀이
	//------------------------------
	
	// 가이드라인
	// 1) 사용자, 컴퓨터 두손 무엇을 낼것인지 입력 / 셋업
	// int userHand[2], comHand[2]
	// for(i, userHand.Length)
	//		input(userHand[i])
	// for(i, comHand.Length)
	//		comHand[i] = rand(0, 3)

	srand(time(NULL));
	int userHand[2] = {};
	int comHand[2] = {};

	int userHandLength = sizeof(userHand) / sizeof(userHand[0]);
	for (int i = 0; i < userHandLength; i++)
	{
		printf("%d번째 손에 낼것을 선택해주세요 0: 바위, 1: 가위, 2: 보)", i + 1);
		scanf_s("%d", &userHand[i]);
	}

	int comHandLength = sizeof(comHand) / sizeof(comHand[0]);
	for (int i = 0; i < comHandLength; i++)
	{
		comHand[i] = rand() % (int)ERsp::Max;
	}

	// 디버그용도로 출력해보는 코드
	for (int i = 0; i < 2; i++)
	{
		printf("userHand[%d] = %d\n", i, userHand[i]);
		printf("comHand[%d] = %d\n", i, comHand[i]);
	}

	// 2) 뭘냈는지 화면에 출력 (왼손 오른손)
	// for(i, userHand.Length)
	//		printRSP(userHand[i])
	// for(i, comHand.Length)
	//		printRSP(comHand[i])
	printf("내 손 : ");
	for (int i = 0; i < userHandLength; i++)
	{
		PrintRSP((ERsp)userHand[i]);
		printf("\t");
	}
	printf("\n");

	printf("컴퓨터 손 : ");
	for (int i = 0; i < comHandLength; i++)
	{
		PrintRSP((ERsp)comHand[i]);
		printf("\t");
	}
	printf("\n");

	// 3) 사용자, 컴퓨터 왼손 오른손 중에 하나 선택하기
	// int userFinalHand, comFinalHand
	// input(userChooseIndex)
	// userFinalHand = userHand[userChooseIndex] 
	// comFinalHand = comHand[rand(0, 2)] 
	int userFinalHand = 0;
	int comFinalHand = 0;
	int userChooseIndex = 0;
	printf("왼손(0), 오른손(1) 중에 하나를 고르세요 : ");
	scanf_s("%d", &userChooseIndex);
	userFinalHand = userHand[userChooseIndex];
	comFinalHand = comHand[rand() % 2];
	
	printf("내 최종 선택 : ");
	PrintRSP((ERsp)userFinalHand);
	printf("\n");

	printf("컴퓨터 최종 선택 : ");
	PrintRSP((ERsp)comFinalHand);
	printf("\n");


	// 4) 최종선택한것 기준으로 승패판정
	if (userFinalHand == comFinalHand)
	{
		printf("무승부\n");
	}
	else if ((userFinalHand == (int)ERsp::Scissor && comFinalHand == (int)ERsp::Paper) ||
		(userFinalHand == (int)ERsp::Rock && comFinalHand == (int)ERsp::Scissor) ||
		(userFinalHand == (int)ERsp::Paper && comFinalHand == (int)ERsp::Rock))
	{
		printf("유저 승리\n");
	}
	else
	{
		printf("컴퓨터 승리\n");
	}


	return 0;
}