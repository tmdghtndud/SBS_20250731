#include <iostream>

int main()
{
	// ---------------------------
	//  1. 변수명 컨벤션
	// ---------------------------
	// 변수 < 

	// 변수 : 데이터를 담기위한 상자
	// 변수명 : 변수(상자)의 이름표
	
	//자료형 변수명 = 값;
	int yEar = 2025;
	int Year = 2025;
	int YEAR = 2025;

	// 이 이름에 대한 규약이 있습니다.
	// 모든 프로그래머한테 적용이 되고있어서
	// 지켜주면 가독성이 많이 올라갑니다.

	// 변수명 컨벤션
	// 보통 사람들이 변수를 짓는 규칙
	// 
	// 친구랑 같이 노트북을 사용합니다.
	// 친구 노트북에 파일명이 다 [1.word, 2.png, 3.txt]
	// 보기어렵기 때문에 컨벤션을 지켜서 변수명을 선언해줘야 한다.

	// 컨벤션 규칙 (언어에 따라서 선택)
	// 1. 카멜 케이스 : 소문자로 시작하고, 띄어쓰기마다 대문자를 쓴다
	//	  user name => userName
	//    student => student
	//    my name => myName

	// 2. 파스칼 케이스 : 대문자로 시작하고, 띄어쓰기마다 대문자를 쓴다.
	//	  user name => UserName
	//    student => Student
	//    my name => MyName

	// 3. 스네이크 케이스 : 소문자로 시작하고, 띄어쓰기마다 _ 를 쓴다.
	//    user name => user_name
	//    student => student
	//    my name => my_name

	// 한국 회사랑, 구글에서 권고하는 컨벤션
	// 
	// 한국 회사 : C, C++, C#, JAVA, javascript, 등등 => 카멜 케이스
	//			  Python => 스네이크 케이스 
	// 
	// 구글 : C# => 카멜케이스
	//		  C, C++, Python => 스네이크 케이스

	// 수업에서 쓸 컨벤션 : 카멜 케이스


	//  상황에 따라서 선택
	// 4. 대문자 스네이크 케이스 : 대문자로 시작하고, 띄어쓰기마다 _ 를쓴다 (상수에 사용)
	//    max size  => MAX_SIZE
	//    default value => DEFAULT_VALUE

	// 5. 케밥 케이스 (하이픈 케이스) : 소문자로 시작하고, 띄어쓰기마다 - 를 쓴다 (script류 언어의 파일명/ 클래스명 에 종종 사용)
	//    main contianer => main-container

	// 6. 헝가리안 표기법 : 카멜케이스 앞에 자료형(약어)을 붙인다. (현재는 사장된 방식)
	//	  age => nAge
	//    name => strName 
	int age = 3;

	printf("나이는 : %d\n", age);

}