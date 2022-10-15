#include <iostream>

using namespace std;

const int SIZE = 8;

//int sumArr(int*, int);
int sumArr(int*, int*);

int main()
{
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	//arr == &arr[0]
	//c++������ arr�� ù��° �ε����� �ּҸ� �ǹ��Ѵ�.
	cout << "size of arr " << sizeof arr << endl;
	//�迭 ��ü�� ũ�⸦ �ǹ��Ѵ�.
	//int sum = sumArr(arr, SIZE);
	int sum = sumArr(arr, arr+SIZE);
	cout << "�Լ���" << SIZE << "������ ����" << sum << "�Դϴ�.\n";
	//sum = sumArr(arr, 3);
	sum = sumArr(arr, arr+3);

	cout << "�Լ���" << "����° �ε��� ������ ���� " << sum << " �Դϴ�." << endl;
	return 0;
}
/*
int sumArr(int* arr, int n)//�ּҸ� ���� �ް� �ȴ�.
{
	cout << "size of arr " << sizeof arr << endl;
	//�迭�� ù��° ������ ũ�⸦ �ǹ��Ѵ�.
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		total = total + arr[i];				
	}
	return total;
}
*/


int sumArr(int* begin, int* end){
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++)
		total += *pt;

	return total;
}
