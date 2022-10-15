#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main(){
	/*
	사용할 수 없는 경우
	1. 함수의 리턴형만 다를 경우
	>>파라미터(매개변수)가 달라야한다
	2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우
	*/
	cout << "두 정수를 입력하십시오.\n";
	int a;
	int b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << "입니다\n";
	cout << "두 실수를 입력하십시오.\n";
	float c;
	float d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << sum(c, d) << "입니다\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}