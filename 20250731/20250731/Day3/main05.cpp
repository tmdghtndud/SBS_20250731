#include <iostream>

int main()
{
	// ------------------------------------
	//  4. switch - case 문
	// ------------------------------------

	// 여러가지 선택지 중에서
	// "일치하는 항목"을 딱 골라서 실행해줌

	// 예제
	int input = 0;
	printf("자판기 번호를 골라주세요.");
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("콜라\n");
		break;
	case 2:
		printf("사이다\n");
		break;
	case 3:
		printf("환타\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		break;
	}

	if (input == 1)
	{
		printf("콜라\n");
	}
	else if (input == 2)
	{
		printf("사이다\n");
	}
	else if (input == 3)
	{
		printf("환타\n");
	}
	else
	{
		printf("잘못된 입력입니다.\n");
	}

	/*
	* 암기할 부분
	switch (값)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
	*/

	// ------------------------------------
	//  5. 변수의 유효범위 
	// ------------------------------------

	int a = 3;	// *어떠한 경우에서도 a, b, c 변수명은 되게 안좋습니다.

	// 변수는 언제 삭제 되냐.
	// 스코프가 끝나면 삭제됩니다.
	// } 중괄호가 끝나면 삭제됩니다.

	{
		// b라는 변수 생성
		int b = 0;
	}

	// b라는 변수 생성 (위의 b랑은 다름) (이름만 같음)
	int b = 0;
	/*
	switch (값)
	{
	case 1:
	{
		int a = 3;
		break;
	}
	case 2:
	{
		int a = 3;
		break;
	}
	case 3:
		break;
	default:
		break;
	}
	*/


	switch (input)
	{
		case 1:
		{
			printf("콜라를 선택했습니다.\n 어떤 콜라를 원하시나요\n 1: 코카콜라, 2: 펩시");
			int input2 = 0;
			scanf_s("%d\n", &input2);
			switch (input2)
			{
			case 1:
				printf("코카콜라\n");
				break;
			case 2:
				printf("펩시\n");
				break;
			default:
				printf("잘못 골랐습니다.\n");
				break;
			}
			break;
		}
		case 2:
		{
			printf("사이다를 선택했습니다.\n 어떤 사이다를 원하시나요\n 1: 칠성사이다, 2: 스프라이트");
			int input2 = 0;
			scanf_s("%d\n", &input2);
			switch (input2)
			{
			case 1:
				printf("칠성사이다\n");
				break;
			case 2:
				printf("스프라이트\n");
				break;
			default:
				printf("잘못 골랐습니다.\n");
				break;
			}
			break;
		}
		case 3:
		{
			printf("환타\n");
			break;
		}
		default:
		{
			printf("잘못된 입력입니다.\n");
			break;
		}
	}

}