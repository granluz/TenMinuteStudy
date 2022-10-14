#include <iostream>

using namespace std;

int main()
{
	//반복문이란?
	char a[10] = { 'a', 'b', 'c', 'd',  'e' };

	//반복문은 원하는 코드를 원하는 만큼 출력 할 수 있다.
	for (int i = 0; i < 5; i++)
		//int형 변수 i 는 0 i가 5보다 작을때까지 i를 1씩 더한다
	{
		//code
		cout << i << "번째 입니다." << endl;
	}
	/*
	반복문의 4가지 규칙
	1. 반복문에 사용할 카운터 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행한다.
	4. 카운터의 값을 변화한다.
	*/

	return 0;
}