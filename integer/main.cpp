#include <iostream>
#include <climits>

using namespace std;

int main(){

	//정수형 : 소수부가 없는 수
	//음의 정수, 0, 양의정수
	//short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은" << n_int << " 이다." << endl;

	cout << "shor는 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은" << n_short << " 이다." << endl;

	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은" << n_long << " 이다." << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은" << n_llong << " 이다." << endl;

	unsigned int a = -1; //unsigned 선언을 해줌으로 음수의 범위를 양수에 더해준다.
	cout << a << endl;


	//실수형 : 소수부가 있는 수
	float b = 3.14f;
	int c = 3.14;

	cout << a << " " << b << endl;//b는 소수로 출력되나 c는 정수로 출력된다.

	return 0;
}