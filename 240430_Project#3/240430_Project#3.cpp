#include <iostream>
#include <string>

using namespace std;

int main()
{
   //�迭�� ���� �������� �ٲ��ִ� reverse()�Լ�

	// 1. main���� �迭�� ����
	int val[5] = { 1,2,3,4,5 };

	// 2. main���� ������ �迭�� �ּҰ��� reverse �Լ��� �Ѱ��ְ�, reverse�Լ����� �� ����
	int* ptr = val;			// *ptr(������ ptr�� ��(�ּ�))�� �迭 val�� �� ���� => ������ �迭�� ����ɱ�?
							// *ptr�� �ʱ⿡ �迭�� �ε��� 0���� ��ġ���ִ�.
							
	cout << ptr << endl;	// �� ��Ȳ������ � ��ġ�� ���� ������ �������� �ʾ� �̻��� ���� ���´�.
	cout << *ptr << endl;	// �� ��Ȳ���� *ptr�� �迭 val�� �ε��� 0���� ��ġ���ְ� �� ���� �����´�.

}

void reverse(int* arr, int size)
{
	int* ptr_start = arr;
	int* ptr_end = arr + size;
}