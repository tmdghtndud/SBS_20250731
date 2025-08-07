#include <iostream>

int main()
{
	// --------------------------------------------
	//  4. 그 외 배열 짜잘한 내용.
	// --------------------------------------------
	// 배열의 길이
	int arr[5] = { 0, };

	// sizeof 기능 활용
	// sizeof 뒤에 자료형을 넣으면 자료형의 크기가 나옵니다.
	printf("sizeof(int) : %d\n", sizeof(int));
	int a = 10;
	// sizeof 뒤에 변수를 넣으면 변수의 크기가 나옵니다.
	printf("sizeof(a) : %d\n", sizeof(a));

	// sizeof 뒤에 변수를 넣으면 변수의 크기가 나옵니다.
	printf("sizeof(arr) : %d\n", sizeof(arr));

	// 배열의 길이는  배열의 전체크기 / 배열의 첫번째변수크기
	int arrLength = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 길이 : %d\n", arrLength);

	for (int i = 0; i < arrLength; i++)
	{

	}

	// 숙제
	//  - 어려운 숙제들 위주로 나갈거에요.
	//  - 풀이를 안하고 넘어갈떄도 있을거에요
	//  - 풀이를해도 깊게안하고 코드 딱딱치고 넘어갈 수 있습니다.
	//
	// - 오늘 숙제
	//   vs 컴퓨터 빙고
	// 5*5 빙고판 만들어서 (arr[25])
	// 1~25까지 숫자를 적어서 노출해주고
	// 내가 한번, 컴퓨터가한번 돌아가면서 숫자 입력해주고
	// 부른숫자는 X로 표현해준다.
	// 한줄이 모두 X가 되면 그 사람 승리
	//  OR 3빙고 먼저 된 사람이 승리
	// 
	// - 주말 숙제
	//  1. 가위바위보
	//  2. 가위바위보 하나빼기
	//  3. 숫자야구 (3자리 버전, 4자리 버전)
	//  4. 텍스트 RPG


	int user[25] = { 0, };
	int com[25] = { 0, };

	for (int i = 0; i < 25; i++)
	{
		user[i] = i + 1;
		com[i] = i + 1;
	}

	printf("User 빙고판 \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%02d  ", user[i * 5 + j]);
			/*if (체크되었다)
			{
				printf("XX  ");
			}
			else
			{
				printf("%02d  ", user[i * 5 + j]);
			}*/
		}
		printf("\n");
	}
	// https://github.com/tmdghtndud/SBS_20250731
}