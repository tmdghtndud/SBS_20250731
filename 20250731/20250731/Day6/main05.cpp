#include <iostream>

int main()
{
	//  빙고게임 

	// 1) 5*5 크기의 빙고판을 만든다. (컴퓨터, 내것 둘다)
	// 2) 빙고판에서 숫자를 하나씩 입력받아 체크한다 (최대 25번)
	//		2-1) 체크할때, 빙고줄이 3개이상이면 승리
	// 3) 승리가 아니면 패배

	// 수도코드
	// 
	// 
	// 1) 5*5 크기의 빙고판을 만든다. (컴퓨터, 내것 둘다)
	// userBingo = [1 ~ 25], comBingo = [1 ~ 25]
	// shuffle(userBingo)
	// shuffle(comBingo)

	// 2) 빙고판에서 숫자를 하나씩 입력받아 체크한다 (최대 25번)
	// for(count, 25번)
	//		내 빙고판 그리기
	//		for(i, 5번)
	//			for(j, 5번)
	//				index = i * 5 + j
	//				if(userBingo[index] == -1)
	//					print("XX")
	//				else
	//					print(userBingo[index] + " ")
	//			print(\n)
	//
	//		컴퓨터 빙고판 그리기
	//		for(i, 5번)
	//			for(j, 5번)
	//				index = i * 5 + j
	//				if(comBingo[index] == -1)
	//					print("XX")
	//				else
	//					print(comBingo[index] + " ")
	//			print(\n)
	//		
	//		//마킹번호를 부른다.
	//		if(컴퓨터 턴이면) 
	//			checkNumber = random(1~25)
	//		else
	//			input(checkNumber)
	//		
	//		//마킹한다.
	//		for(i, userBingo.Length번)
	//			if(userBingo[i] == checkNumber)
	//				userBingo[i] = -1	// -1이면 마킹된 애라고 취급할것이다.
	// 
	//		for(i, comBingo.Length번)
	//			if(comBingo[i] == checkNumber)
	//				comBingo[i] = -1	// -1이면 마킹된 애라고 취급할것이다.

	//		//빙고를 체크한다
	//		// 가로줄체크
	//		bingo = 0
	//		for(i, 5번)
	//			if(userBingo[i*5 + 0] == -1 and 
	//				userBingo[i*5 + 1] == -1 and 
	//				userBingo[i*5 + 2] == -1 and 
	//				userBingo[i*5 + 3 ] == -1 and 
	//				userBingo[i*5 + 4] == -1)
	//				bingo = bingo + 1
	//				
	// 
	//		// 세로줄체크
	//		for(i, 5번)
	//			if(userBingo[0*5 + i] == -1 and 
	//				userBingo[1*5 + i] == -1 and 
	//				userBingo[2*5 + i] == -1 and 
	//				userBingo[3*5 + i] == -1 and 
	//				userBingo[4*5 + i] == -1)
	//				bingo = bingo + 1
	// 
	// 
	//		// 대각선체크 /, \ 각각 
	//			순수 노가다. 코드에서 작성



	// 실제 구현
	srand(time(NULL));

	// userBingo = [1 ~ 25]
	int userBingo[25] = { 0, };
	int userBingoLength = sizeof(userBingo) / sizeof(userBingo[0]);
	for (int i = 0; i < userBingoLength; i++)
	{
		userBingo[i] = i + 1;
	}

	// comBingo = [1 ~25]
	int comBingo[25] = { 0, };
	int comBingoLength = sizeof(comBingo) / sizeof(comBingo[0]);
	for (int i = 0; i < comBingoLength; i++)
	{
		comBingo[i] = i + 1;
	}
	
	// Shuffle(userBingo)
	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 25;
		int index2 = rand() % 25;

		int temp = userBingo[index1];
		userBingo[index1] = userBingo[index2];
		userBingo[index2] = temp;
	}

	// Shuffle(comBingo)
	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 25;
		int index2 = rand() % 25;

		int temp = comBingo[index1];
		comBingo[index1] = comBingo[index2];
		comBingo[index2] = temp;
	}

	//내 빙고판 그리기
	//for(i, 5번)
	//	for(j, 5번)
	//		index = i * 5 + j
	//		print(userBingo[index] + " ")
	//	print(\n)
	for (int count = 0; count < 25; count++)
	{
		//		for(i, 5번)
		//			for(j, 5번)
		//				index = i * 5 + j
		//				if(comBingo[index] == -1)
		//					print("XX")
		//				else
		//					print(comBingo[index] + " ")
		//			print(\n)
		printf("내 빙고판 : \n");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int index = i * 5 + j;
				if (userBingo[index] == -1)
				{
					printf("XX\t");
				}
				else
				{
					printf("%d\t", userBingo[index]);
				}
			}
			printf("\n");
		}
		printf("\n\n");

		printf("컴퓨터 빙고판 : \n");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				int index = i * 5 + j;
				if (comBingo[index] == -1)
				{
					printf("XX\t");
				}
				else
				{
					printf("%d\t", comBingo[index]);
				}
			}
			printf("\n");
		}
		printf("\n\n");

		//if (컴퓨터 턴이면)
		//	checkNumber = random(1~25)
		//else
		//	input(checkNumber)

		int checkNumber = 0;
		if (count % 2 == 1)
		{
			checkNumber = rand() % 25 + 1;
		}
		else
		{
			printf("마킹할 넘버를 입력해주세요 : ");
			scanf_s("%d", &checkNumber);
		}
		printf("마킹번호 : %d\n", checkNumber);

		for (int i = 0; i < userBingoLength; i++)
		{
			if (userBingo[i] == checkNumber)
			{
				userBingo[i] = -1;
			}
		}

		for (int i = 0; i < comBingoLength; i++)
		{
			if (comBingo[i] == checkNumber)
			{
				comBingo[i] = -1;
			}
		}

		// 빙고 카운트 체크
		int userBingoCount = 0;
		int comBingoCount = 0;

		//가로줄 체크
		for (int i = 0; i < 5; i++)
		{
			if (userBingo[i * 5 + 0] == -1 &&
				userBingo[i * 5 + 1] == -1 &&
				userBingo[i * 5 + 2] == -1 &&
				userBingo[i * 5 + 3] == -1 &&
				userBingo[i * 5 + 4] == -1)
			{
				userBingoCount++;
			}

			if (comBingo[i * 5 + 0] == -1 &&
				comBingo[i * 5 + 1] == -1 &&
				comBingo[i * 5 + 2] == -1 &&
				comBingo[i * 5 + 3] == -1 &&
				comBingo[i * 5 + 4] == -1)
			{
				comBingoCount++;
			}
		}

		//세로줄 체크
		for (int i = 0; i < 5; i++)
		{
			if (userBingo[0 * 5 + i] == -1 &&
				userBingo[1 * 5 + i] == -1 &&
				userBingo[2 * 5 + i] == -1 &&
				userBingo[3 * 5 + i] == -1 &&
				userBingo[4 * 5 + i] == -1)
			{
				userBingoCount++;
			}

			if (comBingo[0 * 5 + i] == -1 &&
				comBingo[1 * 5 + i] == -1 &&
				comBingo[2 * 5 + i] == -1 &&
				comBingo[3 * 5 + i] == -1 &&
				comBingo[4 * 5 + i] == -1)
			{
				comBingoCount++;
			}
		}

		//대각선체크 \ 방향
		if (userBingo[0] == -1 && userBingo[6] == -1 && userBingo[12] == -1 && userBingo[18] == -1 && userBingo[24] == -1)
		{
			userBingoCount++;
		}
		if (comBingo[0] == -1 && comBingo[6] == -1 && comBingo[12] == -1 && comBingo[18] == -1 && comBingo[24] == -1)
		{
			comBingoCount++;
		}

		//대각선체크 / 방향
		if (userBingo[4] == -1 && userBingo[8] == -1 && userBingo[12] == -1 && userBingo[16] == -1 && userBingo[20] == -1)
		{
			userBingoCount++;
		}
		if (comBingo[0] == -1 && comBingo[6] == -1 && comBingo[12] == -1 && comBingo[18] == -1 && comBingo[24] == -1)
		{
			comBingoCount++;
		}

		if (3 <= userBingoCount)
		{
			printf("유저 승리!\n");
			break;
		}

		if (3 <= comBingoCount)
		{
			printf("컴퓨터 승리!\n");
			break;
		}
	}
}