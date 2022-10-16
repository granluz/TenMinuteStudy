#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	//c++ friend
	//이항 연산자 : 두개 이상의 피연산자를 요구하는 연산자
	//operator*
	Time t1(1, 20);
	Time t2;
	t2 = 3 * t1;
	//t2 = t1 * 3;
	t2.show();

	return 0;
}