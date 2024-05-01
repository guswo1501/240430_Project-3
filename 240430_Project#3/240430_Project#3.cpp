#include <iostream>
#include <string>

using namespace std;

int main()
{
   //배열의 값을 역순으로 바꿔주는 reverse()함수

	// 1. main에서 배열을 생성
	int val[5] = { 1,2,3,4,5 };

	// 2. main에서 생성한 배열의 주소값을 reverse 함수로 넘겨주고, reverse함수에서 값 변경
	int* ptr = val;			// *ptr(포인터 ptr의 값(주소))에 배열 val의 값 저장 => 다차원 배열도 저장될까?
							// *ptr는 초기에 배열의 인덱스 0번에 위치해있다.
							
	cout << ptr << endl;	// 이 상황에서는 어떤 위치에 값을 넣을지 정해지지 않아 이상한 값이 나온다.
	cout << *ptr << endl;	// 이 상황에서 *ptr은 배열 val의 인덱스 0번에 위치해있고 그 값을 가져온다.

}

void reverse(int* arr, int size)
{
	int* ptr_start = arr;
	int* ptr_end = arr + size;
}