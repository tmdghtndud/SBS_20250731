#include <iostream>

//문자열 길이 구하는 함수
int MyStrlen(const char* str)
{
	int length = 0;
	
	// str[length] == \0 일때까지
	// length 를 더해가면서 반복한다

	while (str[length] != '\0')
	{
		length++;
	}

	return length;
}

// 문자열 비교 함수 
int MyStrCmp(const char* str1, const char* str2)
{
	// 다르면 1
	//   실제 strcmp 함수는 -1, 1로 나옴 (누가 더크냐에따라 다르게나옴)
	// 같으면 0

	// 가이드라인
	// 1) strlen을 사용해 str1의 문자열 길이를 구한다
	// 2) str1을 순환하면서, str2와 하나씩 인덱스 비교를 한다.
	// 3) 하나라도 다르면 1을 return 한다.

	// 수도코드
	// strLength = strlen(str1)
	// for(i, strLength)
	//		if(str1[i] != str2[i])
	//			return 1;
	// return 0;
	int strLength = strlen(str1);
	for (int i = 0; i < strLength; i++)
	{
		if (str1[i] < str2[i])
		{
			return -1;
		}
		else if (str1[i] > str2[i])
		{
			return 1;
		}
	}
	return 0;
}

// dest (destination) : 복사될곳
// src(source) : 원본
char* MyStrCpy(char* dest, const char* src)
{
	// 가이드라인
	// 1) 원본의 길이를 구하고
	// 2) dest[i] 에 src[i] 를 대입한다.
	// 3) dest[srcLength] = '\0' 를 대입해줍니다.

	int srcLength = strlen(src);
	for (int i = 0; i < srcLength; i++)
	{
		dest[i] = src[i];
	}
	dest[srcLength] = '\0';
	
	return dest;
}

// 연결된 문자열
char* MyStrCat(char* dest, const char* src)
{
	// ex. dest : Hello
	//     src : World
	// MyStrCat 결과 => HelloWorld

	int destLengh = strlen(dest);
	int srcLength = strlen(src);

	// for(i, srcLength)
	//		dest[i + destLength] = src[i]
	for (int i = 0; i < srcLength; i++)
	{
		dest[i + destLengh] = src[i];
	}

	dest[destLengh + srcLength] = '\0';
	return dest;
}

int main()
{
	char str1[100] = "ABC";
	char str2[100] = "ABCDE";
	char str3[100] = "";

	// 문자열 길이구하기

	// 배열의 길이 구하는 방법은
	// sizeof를 활용해서 배열의 길이를 구했습니다.
	// arrSize = sizeof(배열) / sizeof(배열0번쨰 인덱스)

	// 
	printf("str1 length : %d\n", MyStrlen(str1));

	// strcmp
	// string compare
	// 문자열 비교
	int a = 3;
	int b = 3;
	if (a == b)
	{
		printf("a와 b는 같다\n");
	}

	//str1의 값은 주소값
	if (str1 != str2)
	{
		printf("str1 : %s\n", str1);
		printf("str2 : %s\n", str2);
		printf("두개는 다른 주소다.\n");
	}
	
	if (strcmp(str1, str2) == 0)
	{
		printf("str1 : %s\n", str1);
		printf("str2 : %s\n", str2);
		printf("두개는 값은 같다. \n");
	}
	
	// strcpy
	// string copy
	// 문자열 복사
	MyStrCpy(str3, str2);
	//strcpy(str3, str2);
	//strcpy_s(str3, sizeof(str3), str2);
	printf("str3 : %s\n", str3);


	// strcat
	// string catenate
	// 문자열 연결
	

	return 0;
}