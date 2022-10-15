#include <iostream>

using namespace std;

void helloCPP(int, int);
//함수의 원형을 제공하는 부분에서 변수의 이름은 생략하여도 무방하다.
int main()
{
	int times;
	int times2;
	cout << "정수를 입력하십시오.\n";
	cin >> times;
	cout << "정수를 한번 더 입력하십시오.\n";
	cin >> times2;
	helloCPP(times, times2);//호출할 때 사용되는 변수를 전달인자 argument라고 한다
	//순서에 따라 1:1로 대응되기에 변수 데이터형이 일치되어야 한다.

	return 0;
}

void helloCPP(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hello\n";
	};
	for (int i = 0; i < m; i++)
	{
		cout << "C++!\n";
	};
}