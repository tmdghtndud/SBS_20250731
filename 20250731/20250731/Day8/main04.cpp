#include <iostream>

void PrintArr(int* arr, int arrSize)
{
	//arr 은 주소값일 뿐이고, 배열길이는 알수없습니다.
	for (int i = 0; i < arrSize; i++)
	{
		printf("%d 번째 값 : %d\n", i, arr[i]);
	}
}

int main()
{
	//------------------------------
	//  4. 포인터-3 
	//	부제 : 포인터와 배열 그리고 함수
	//------------------------------

	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int arrLength = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < arrLength; i++)
	{
		printf("%d 번째 값 : %d\n", i, arr[i]);
	}

	PrintArr(arr, arrLength);
	// 포인터와 배열은 거의 동일하기 때문에
	// 배열을 함수로 넘기고 싶으면, 포인터로 넘긴다.

}