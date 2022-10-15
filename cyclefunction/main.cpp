#include <iostream>

using namespace std;

int func(int);

int main()
{
	//함수를 지시하는 포인터
	//어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
	/*
	1. 함수의 주소를 얻는다.
	2. 함수를 지시하는 포인터를 선언한다.
	3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
	*/
	int a;
	cin >> a;
	int (*pf)(int);//int형 매개변수를 갖는 int형 포인터
	pf = func; // pf가 함수를 지시하게 되었으므로 pf가 함수 이름과 같은 역할을 한다.

	cout << (*pf)(a) << endl;
	
	//파라미터를 생략하고 이름만 선언시 주소를 얻을 수 있다.
	return 0;
}

int func(int n) {
	return n + 1;
}