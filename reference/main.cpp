#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {
	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "참조를 이용한 값의 교환\n";
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "포인터 이용한 값의 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "포인터를 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "값을 이용한 값의 교환\n";
	swapC(wallet1, wallet2);
	cout << "값을 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	return 0;
}

//참조로 전달하는 방식
void swapA(int& a, int& b) {
	int temp;//int temp라는 변수를 만든다.
	temp = a;//temp에 a를 넣는다
	a = b;//a에는 b를 넣는다
	b = temp;//b에는 temp의 값을 넣는다.
}

//포인터로 전달하는 방식
void swapB(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//값으로 전달하는 방식
void swapC(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}