#include <iostream>

using namespace std;

int main() {
	//���������
	// + - * / &
	/*
	+ : �� ���� �ǿ������� ���� ����Ѵ�.
	- : ù ��° �ǿ����ڿ��� �� ��° �� �������� ���� ����Ѵ�.
	* : �� ���� �ǿ������� ���� ����Ѵ�.
	/ : ù ��° �ǿ����ڿ��� �� ��° �ǿ����ڸ� ������.
	�� ���� �ǿ����ڰ� ��� �����̸� ������� '��'�̶� �θ���.
	% : ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� ������ �������� ���Ѵ�.
	19/6 = 3 ������(%) == 1
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

	//C++�� ������ ��� ������ ������ �� ������? 
	int Multiple = Plus + Minus * Muti; // Plus + (Minus * Muti) = 13 +(7 * 30) = 223 

	cout << Multiple << endl; //223�� ��µȴ�.
		
	return 0;
}