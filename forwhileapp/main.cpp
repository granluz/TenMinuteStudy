#include <iostream>

using namespace std;

//반복문의 활용방법
int main()
{
	//중첩 루프 : 2차원 배열에서 많이 활용
	int temp[4][5] =
	{
		//temp는 4개의 원소 배열을 가지고 있고 그 원소 배열은 각 5개의 원소배열을 가지고 있다.
		//행과 열 개념으로 사용 가능하다.
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
	};

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	//int a[5] = { 1, 3, 5, 7, 9 };
	////배열 기반 반복문
	//for (int i = 0; i < 5; i++)//count 값을 달아 원하는 사이즈 까지 출력 가능
	//{
	//	cout << a[i];
	//}
	//cout << endl;

	//for (int i : a)//주의 할 점 배열의 사이즈보다 적은 수가 초기화 되어있다면 나머지값인 0도 출력된다.
	//{
	//	cout << i;
	//}
	return 0;
}