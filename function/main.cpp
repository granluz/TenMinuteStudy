#include <iostream>

using namespace std;

const float PIE = 3.14;
//1,2. 우리는 이러한 함수를 사용할거야 라고 원형을 미리 제공한다.
void cheers(int n) {
	//호출한 함수로부터 int형 변수 하나를 담는다.
	for (int i = 0; i < n; i++)
	{
		//담은 함수를 조건만큼 반복 출력한다.
		cout << "Cheers!" << endl;
	}
	//return; 을 생략하여도 무방하다.
};//함수의 원형을 명시
float circle(int x) {
	//호출한 함수로부터 int형 변수 하나를 담는다.
	//x * x * const PIE를 리턴해준다.
	return x * x * PIE;
};

int main()
{
	int a;
	cout << "하나의 수를 입력하십시오." << endl;
	cin >> a;
	cheers(a);//3. 입력 받은 int a를 cheers로 전달

	int b;
	cout << "원의 반지름 길이를 입력하십시오." << endl;
	cin >> b;
	float c = circle(b);
	cout << "원의 넓이는 " << c << " 입니다." <<endl;

	return 0;
}

//1. 함수를 정의해준다.
//void cheers(int n) {
	//호출한 함수로부터 int형 변수 하나를 담는다.
	//for (int i = 0; i < n; i++)
	//{
		//담은 함수를 조건만큼 반복 출력한다.
		//cout << "Cheers!" << endl;
	//}
	//return; 을 생략하여도 무방하다.
//}

//float circle(int x) {
	//호출한 함수로부터 int형 변수 하나를 담는다.
	//x * x * const PIE를 리턴해준다.
	//return x * x * PIE;
//}

/*1. 리턴값이 있는 타입

	typeName functionName(parameterList)
	{
		statement(s);
		return value;
	}

	2. 리턴값이 없는 타입

	void functionName(parameterList)
	{
		statement(s);
		return; // 생략될 수 있음
	}
	*/