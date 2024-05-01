#include <iostream>
#include <string>

using namespace std;



// 포인터 변수 ptr에 *를 안 붙이면 포인터의 현재 위치
// *를 붙이면, 포인터가 가르키는 위치에 있는 값을 의미


void reverse(int* arr, int size)	
{
	int* ptr_start = arr;			// arr 배열의 인덱스 0번에 위치
	int* ptr_end = arr + size - 1;	// 맨 마지막 인덱스에 위치, 'arr 배열의 인덱스 0번' + '배열의 크기' - 1
									// -1을 하는 이유는 가령, 배열의 크기가 5라고 하면 인덱스 0~4까지 인데
									// 0 + 5 = 5이기 때문에 0~5번 인덱스까지 총 배열의 크기가 6으로 나오므로 -1을 해줌.

	while (ptr_start < ptr_end)		// ptr_start라는 포인터 위치가 ptr_end 포인터 위치보다 작으면
									// 즉, 인덱스 위치가 작으면 
	{
		int temp = *ptr_start;		// 현재의 *ptr_start의 값을 잠시 다른 쪽에 넣어둠. 
									// 왜냐하면, *ptr_start와 *ptr_end의 값을 바꿀건데

		*ptr_start = *ptr_end;		// 여기서 먼저 *ptr_start의 값이 달라지기 때문
		*ptr_end = temp;			// 위에서 변하기 전의 *ptr_start의 값을 여기에 넣음
									// 그럼 결과적으로 *ptr_start와 *ptr_end에 있던 값이 바뀜

		ptr_start++;				// 여기서 포인터의 위치를 ptr_start는 한칸 뒤로
		ptr_end--;					// ptr_end는 한칸 앞으로 당겨서 위의 작업 반복


		
	}
}

int main()
{
   //배열의 값을 역순으로 바꿔주는 reverse()함수

	// 1. main에서 배열을 생성
	int val[5] = { 1,2,3,4,5 };

	// 2. main에서 생성한 배열의 주소값을 reverse 함수로 넘겨주고, reverse함수에서 값 변경
	int* ptr = val;			// *ptr(포인터가 가르키는 값)에 배열 val의 값 저장 => 다차원 배열도 저장될까?
							// *ptr는 초기에 배열의 인덱스 0번에 위치해있다.
							
	/*
	cout << ptr << endl;	// 이 상황에서는 어떤 위치에 값을 넣을지 정해지지 않아 이상한 값이 나온다.
	cout << *ptr << endl;	// 이 상황에서 *ptr은 배열 val의 인덱스 0번에 위치해있고 그 값을 가져온다.
	*/

	reverse(val, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << val[i];
	}
}

