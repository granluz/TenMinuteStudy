#include <iostream>

using namespace std;

int main() {
	//산술연산자
	// + - * / &
	/*
	+ : 두 개의 피연산자의 합을 계산한다.
	- : 첫 번째 피연산자에서 두 번째 피 연산자의 차를 계산한다.
	* : 두 개의 피연산자의 곱을 계산한다.
	/ : 첫 번째 피연산자에서 두 번째 피연산자를 나눈다.
	두 개의 피연산자가 모두 정수이면 결과값은 '몫'이라 부른다.
	% : 첫 번째 피연산자를 두 번째 피연산자로 나누어 나머지를 구한다.
	19/6 = 3 나머지(%) == 1
	*/

	int A = 10;
	int B = 3;

	int Plus = A + B;
	int Minus = A - B;
	int Muti = A * B;
	int Devision = A / B;
	int Remainder = A % B;

	cout << "Plus : " << Plus << endl;
	cout << "Minus : " << Minus << endl;
	cout << "Muti : " << Muti << endl;
	cout << "Devision : " << Devision << endl;
	cout << "Remainder : " << Remainder << endl;

	//C++가 복잡한 산술 연산을 수행할 수 있을까? 
	int Multiple = Plus + Minus * Muti; // Plus + (Minus * Muti) = 13 +(7 * 30) = 223 

	cout << Multiple << endl; //223이 출력된다.
		
	return 0;
}