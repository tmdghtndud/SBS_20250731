#include <iostream>

int main()
{
	// ---------------------------
	//  입력
	// ---------------------------

	// 출력 : printf

	// 입력 : scanf_s
	// scanf : 사용자가 입력한 값을 변수에 저장합니다.
	int input = 0;

	// 입력 유도 메세지 출력
	printf("값을 입력해주세요 : ");
	// %d => 정수 , %s => 문자열
	scanf_s("%d", &input);

	printf("입력한 값 : %d\n", input);

	char inputString[100] = "";
	printf("문자열을 입력해주세요 : ");
	scanf_s("%s", inputString, (unsigned int)sizeof(inputString));
	// scanf_s("%s", inputString, sizeof(inputString));
	//std::cin >> inputString;
	printf("입력한 문자열 : %s\n", inputString);

}