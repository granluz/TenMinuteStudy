#include <iostream>

using namespace std;

int main() {
	//auto = c++만의 데이터형
	/*
	C++는 초기화하는 변수 값을 보고 데이터형을 추론 가능
	초기화 하는 값으로 자동으로 데이터 형을 결정한다.
	*/

	auto n = 100; // int
	auto x = 1.5f; // float
	auto y = 1.3e12l; // long long
	auto e = 1.5; // double
	//데이터형을 추론하여 C++에 결정을 요구하는것은 좋은 코딩습관은 아니다.

	//3개의 float형 변수를 선언시
	auto x = 0.0f;
	float y = 0.0f;
	auto z = 0; //int가 된다.
	//auto를 맹신하는것은 안좋다.
	//복잡한 변수형을 다룰때 유용하게 사용 가능하다.

	return 0;
}