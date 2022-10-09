#include <iostream>

using namespace std;

int main()
{
	//변수란? 변할 수 있는 수
	//상수 : 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가(메모리 영역)?
	*/

	int a; //선언
	a = 7; //대입

	int b = 3; //선언과 동시에 값을 대입 == 초기화

	
	//변수는 사용되기 이전에 정의되어야 한다.

	cout << "a= " << a << endl << "b="<< b;
	
	return 0;
}