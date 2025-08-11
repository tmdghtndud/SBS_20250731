#include <iostream>


int main()
{
	//------------------------------
	//  6. 포인터-4 
	//	   ★ 동적 할당
	//------------------------------

	// ## 동적할당이란?
	// 실행중에 원하는 크기만큼 메모리를 할당 (heap 영역)

	// ## 왜사용하는가?
	// Heap 영역에 할당하기 위해서
	// 큰객체를 넓은곳에서 할당하기 위해


	// ## 사용법
	// C : malloc
	// malloc(할당할 크기byte)
	// C++ ONLY : new 

	{
		int* p = (int*)malloc(sizeof(int));
		*p = 10;
		free(p);
		p = nullptr;
	}

	//할당 해제하는 방법
	// C: free
	// free(힙주소)
	// C++ : delete

	//할당만 하고 해제를 안하는경우를
	// 메모리 릭 / 메모리 누수 라고 부릅니다.
	// 주로 최적화 작업이라고하면 
	// 메모리 릭 잡기에요


	// 동적 배열
	// 배열 malloc
	int arrSize = 10;
	int* arr = (int*)malloc(sizeof(int) * arrSize);

	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = i;
	}

	printf("arr[5] = %d\n", arr[5]);

	free(arr);
	arr = nullptr;

	printf("유저가 몇명입니까? : ");
	int userCount = 0;
	scanf_s("%d", &userCount);

	int* userArr = (int*)malloc(sizeof(int) * userCount);
	// 이렇게하면 유저수를 입력한 만큼 userArr의 크기가 결정 된다.

	int a[100] = {};
	//					정적배열		 동적배열
	// 크기 결정 시점  :  컴파일타임    런타임
	// 메모리 영역     :  Stack        Heap
	// 할당방법        :  배열선언      malloc, new
	// 크기 변경       :  불가능       가능하긴하나, 보통안함.
	// 해제           :  자동         free, delete 수동해제

	// 쉽게생각하면
	// 큰데이터 : 동적할당
	// 작은데이터 : 정적할당

	

	return 0;
}