#include <iostream>

enum EColor
{ 
	YELLOW = 1000, 
	GREEN, 
	BLUE = 500,
	BLACK
};

enum EDay
{
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY = 3,
	THURSDAY = 4,
	FRIDAY = 5,
	SATURDAY = 6,
	SUNDAY = 7
};

enum class 자료형이름
{
	값1,
	값2,
	값3,
};

enum class EDay2
{
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int main()
{
	// ------------------------------------
	//  2. Enum (열거형) - 새로운 자료형
	// ------------------------------------
	// 
	// 기본 자료형
	// int, float, char
	//
	// 사용자 정의 자료형
	// Enum - 정수형 [이름이 달린 정수형]
	
	// ## 어떻게 사용하는것인가?
	// "스코프가 없는곳"에서 
	// enum 자료형이름 { 값1, 값2, 값3 };

	// ## 왜 쓰는가?
	// 가독성을 위해서

	EColor myColor = YELLOW;

	//Enum 특징
	// 정수형 자료형과 자유롭게 변환이 됩니다. (암시적 변환가능)


	// ------------------------------------
	//  3. 명시적 변환 / 암시적 변환
	// ------------------------------------
	int day = (int)THURSDAY;

	int number1 = 3;
	float number2 = 2.9;
	number2 = (float)number1;	// 명시적 변환 (권장됨)
	number2 = number1;	// 암시적 변환 (권장하지 않음)
	number1 = (int)number2;	// 2.9에서 2로 손실되겠구나.


	int day = 0;
	printf("day를 입력해주세요 : ");
	scanf_s("%d", &day);

	switch ((EDay2)day)
	{
	case EDay2::Monday:
		printf("Monday\n");
		break;
	case EDay2::Tuesday:
		printf("Tuesday\n");
		break;
	case EDay2::Wednesday:
		printf("Wednesday\n");
		break;
	case EDay2::Thursday:
		printf("Thursday\n");
		break;
	case EDay2::Friday:
		printf("Friday\n");
		break;
	case EDay2::Saturday:
		printf("Saturday\n");
		break;
	case EDay2::Sunday:
		printf("Sunday\n");
		break;
	default:
		printf("Invalid\n");
		break;
	}


	// ------------------------------------
	//  4. Enum Class (열거형) - 새로운 자료형 (C++ ONLY)
	// ------------------------------------

	// ## 어떻게 사용하는가?
	// "스코프가 없는곳"에서 
	// enum class 자료형이름 { 값1, 값2, 값3 };

	// :: 뜻 => 앞에 있는거 내용을 참조한다.
	자료형이름 value = 자료형이름::값1;

	// enum class 를 더 많이씁니다.
	// 
	// C/C++ 언어는 특성상
	// switch - case 에서도 그렇고 break를 생략해도 되는데 생략하지 않앙햐고
	// 등등 사용자한테 열려있는게 많아요.

	// 요즘 언어들은 암시적 형변환을 진짜 진짜 싫어합니다.
	// 명시적 형변환만 가능한, enum class 를 많이 사용합니다.


}