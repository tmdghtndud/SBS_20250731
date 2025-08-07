#include <iostream>

/*
	스무고개를 만들건데

	1. 컴퓨터가 1~100까지의 [랜덤한 수]를 저장해둔다.
	2. 사용자는 맞출기회를 20번 주는데
	3. 사용자가 입력한 수보다 [랜덤한 수]가 크면 UP!
										 작으면 DOWN!
										 같으면 게임에 승리하였습니다.
		를 출력한다.
	4. 20번을 모두 소모할동안 게임에 승리하지 못하면, 사용자는 패배한다.
	*/

int main()
{
	// 스무고개 풀이

	// 프로그램 만들때 가이드라인을 짜두면 좋음
	// 
	// 1) 컴퓨터가 1~100까지의 [랜덤한 수]를 저장해둔다.
	// secret = random(1, 100)
	srand(time(NULL));
	// (1 - 1) ~ (100 - 1)
	// 0 ~ 99
	int secret = rand() % 100 + 1;

	// 2) 사용자는 맞출기회를 20번 주는데
	// chance = 20
	int chance = 3;

	/*
		3) 사용자가 입력한 수보다 [랜덤한 수]가 크면 UP!
										 작으면 DOWN!
										 같으면 게임에 승리하였습니다.
		를 출력한다.
	*/
	// isWin = false
	// for(i, chance번)
	//		input(guess)
	//		if ( guess < secret )
	//			print(UP!)
	//		else if ( secret < guess )
	//			print(DOWN!)
	//		else
	//			print(승리하였습니다)
	//			isWin = true
	//			break;
	bool isWin = false;
	for (int i = 0; i < chance; i++)
	{
		int guess = 0;
		do
		{
			printf("guess를 입력해주세요.");
			scanf_s("%d", &guess);
		} while (false == (1 <= guess && guess <= 100));

		if (guess < secret)
		{
			printf("UP!\n");
		}
		else if (secret < guess)
		{
			printf("DOWN!\n");
		}
		else
		{
			printf("승리하였습니다.\n");
			isWin = true;
			break;
		}
	}



	// 4) 20번을 모두 소모할동안 게임에 승리하지 못하면, 사용자는 패배한다.
	// if (isWin == false)
	//		print(패배 하였습니다.)
	//		print(secret)
	if (isWin == false)
	{
		printf("패배하였습니다.\n");
		printf("정답은 : %d\n", secret);
	}
}