#include <iostream>

using namespace std;

//class 혹은 typeName
template<typename Any>
Any sum(int, Any);
template<typename Any>
float sum(float, Any);
//오버로딩이 가능하다.

int main() {
	//함수 템플릿 : 함수의 일반화에 대한 서술 == 일반화는 객체지향 프로그래밍의 목표 중 하나이다
	//구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	//>>데이터형에 상관 없이 일반적으로 사용할 수 있는 함수를 만드는것.
	
	int a = 3;
	int b = 4;
	cout << sum(a,b) << endl;
	
	float c = 3.14f;
	float d = 1.592f;
	cout << sum(c, d) << endl;

	cout << sum(a, c) << endl;
	return 0;
}

template<class Any>
Any sum(int a, Any b) {
	return a + b;
}

template<class Any>
float sum(float a, Any b) {
	return a + b;
}