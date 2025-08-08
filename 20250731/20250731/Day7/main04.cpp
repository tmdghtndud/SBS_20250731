#include <iostream>

void SetZeroCallByValue(int value)
{
	value = 0;
	printf("value : %d\n", value);
}

//C++ ONLY
void SetZeroCallByReference(int& value)
{
	value = 0;
	printf("value : %d\n", value);
}

void SetZeroCallByAddress(int* value)
{
	*value = 0;
	printf("value : %d\n", *value);
}

int main()
{
	// ## 함수 사용법
	// Call By Value
	// Call By Reference
	// Call By Address

	// 입력값을 어떻게 넘기냐에 따라서, 함수의 동작 방식이 달라집니다.
	// 
	// Call By Value
	//	값을 복사해서 전달

	// Call By Reference (C++ ONLY)
	//	원본을 전달
	
	// Call By Address
	//	주소를 전달 (포인터)

	int number = 10;
	//SetZeroCallByValue(number);
	printf("number : %d\n", number);

	//SetZeroCallByReference(number);
	//printf("number : %d\n", number);

	//SetZeroCallByAddress(&number);
	//printf("number : %d\n", number);

	return 0;
}