#include <iostream>

using namespace std;

inline float square(float x){ return x * x; }
//프로그램의 실행속도 향상을 위해 사용된다.

const int SIZE = 8;
int sumArr(int*, int a = 2);
//a = 1 의 값이 default로 sumArr(arr, 1)로 전달된다.
//선언하고자 하는 디폴트 매개변수의 위치를 가장 오른쪽으로 위치하거나 
//>> 선언하고자 하는 디폴트 매개변수의 오른쪽 매개변수들을 모두 디폴트 값을 선언해준다.
int main(){
	//인라인 함수
	/*
	int a;
	cout << "한 변의 길이를 입력 해 주세요" << endl;
	cin >> a;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
	float b = square(a); // 함수를 호출하고 사용하는것은 일반적인 함수와 동일하다.
	cout << b << endl;
	*/
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
	int sum = sumArr(arr);

	cout << "함수의 총 합은 " << sum << " 입니다.";

	return 0;

}

int sumArr(int* arr, int a) {
	int total = 0;

	for (int i = 0; i < a; i++)
		total = total + arr[i];

	return total;
}
