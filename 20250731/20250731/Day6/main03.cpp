#include <iostream>

int main()
{
	// --------------------------------------------
	//  3. Swap, Shuffle
	// --------------------------------------------

	// Swap
	int a = 10;
	int b = 20;

	// 어떠한 알고리즘


	// 1번상자, 2번상자

	// 3번상자를 만듭니다.
	// 3번상자에 1번상자내용을 복사해둔다.
	// 
	// 1번상자 = 2번상자
	// 2번상자 = 3번상자

	int temp = a;
	a = b;
	b = temp;
	printf("a : %d\n", a);	//20
	printf("b : %d\n", b);	//10

	// Shuffle
	int arr[10] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	// 배열 순서를 섞고 싶다.

	// 셔플은 어떻게 하는것인가?
	// Swap을 배열의 랜덤 인덱스 2개 잡아서 Swap
	// 
	// arr[랜덤1], arr[랜덤2] Swap
	// 이 행동을 10000번정도 반복하면, 잘섞인 배열이 만들어집니다.

	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;
		//우리가 바꿀 변수들은 arr[index1], arr[index2]
		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	// 실습
	// [로또번호 생성기]
	// 1~45까지 담긴 배열
	// 잘섞은다음 7개를 출력해주세요
	// 
	// 1) 1 ~ 45 까지 값이 담긴 배열을 만든다.
	// 2) 배열을 섞는다
	// 3) 배열의 0번째 인덱스부터 7개를 출력한다.

	int lotto[45] = { 0, };
	//lotto[0] = 1
	//lotto[1] = 2
	//..
	//lotto[44] = 45

	// 로또공이 45개 있고
	// 각각 번호가 1~45까지 적힌 형태로 만들수있음

	// 1) 1 ~ 45 까지 값이 담긴 배열을 만든다.
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}

	// 2) 배열을 섞는다
	for (int i = 0; i < 100000; i++)
	{
		//인덱스의 범위 : 0 ~ 44 : rand()%45
		int index1 = rand() % 45;
		int index2 = rand() % 45;
		
		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;
	}

	// 3) 배열의 0번째 인덱스부터 7개를 출력한다.
	for (int i = 0; i < 7; i++)
	{
		printf("%d번째 번호 : %d\n", i + 1, lotto[i]);
	}

}