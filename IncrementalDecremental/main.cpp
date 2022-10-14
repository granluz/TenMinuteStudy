#include <iostream>

using namespace std;

int main()
{
	//char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 0; i < 5; i++)
	{
		cout << i << "번째 입니다." << endl;
	}
	//증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << "a는" << a << ", b는 " << b << endl;
	cout << "a++는" << a++ << endl; // 변수의 값을 판단하고 증가 a의 값 10을 판단하고 증가한다. a 에는 11이 저장되어있다.
	cout << "++b는" << ++b << endl; // 변수의 값을 증가하고 판단 11로 증가시키고 판단한다.
	cout << "a는 " << a << ",b는 " << b << endl;
 	
	for (int i = 5; i > 0; i--)
	{
		cout << i << "번째 입니다." << endl;
	}
	/*
	관계표현식 : 기본적으로 좌항 의 값을 우항의 값과 비교
	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지않다.
	*/
	return 0;
}