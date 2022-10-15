#include <iostream>

using namespace std;

const int SIZE = 8;

//int sumArr(int*, int);
int sumArr(int*, int*);

int main()
{
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	//arr == &arr[0]
	//c++에서는 arr는 첫번째 인덱스의 주소를 의미한다.
	cout << "size of arr " << sizeof arr << endl;
	//배열 전체의 크기를 의미한다.
	//int sum = sumArr(arr, SIZE);
	int sum = sumArr(arr, arr+SIZE);
	cout << "함수의" << SIZE << "까지의 합은" << sum << "입니다.\n";
	//sum = sumArr(arr, 3);
	sum = sumArr(arr, arr+3);

	cout << "함수의" << "세번째 인덱스 까지의 합은 " << sum << " 입니다." << endl;
	return 0;
}
/*
int sumArr(int* arr, int n)//주소를 전달 받게 된다.
{
	cout << "size of arr " << sizeof arr << endl;
	//배열의 첫번째 원소의 크기를 의미한다.
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
