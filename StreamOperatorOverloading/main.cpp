#include <iostream>
#include "Time.h"

using namespace std;

int main() {
//스트림 추출 << 연산자 오버로딩 
	Time t1(3, 45);

	t1.show();

	cout << t1;
	//<<연산자는 iostream에 포함된 cout과 time의 객체 t1 두개의 피연산자가 필요하다.
	//friend함수를 통해 오버로딩 가능하다.
	return 0;
}