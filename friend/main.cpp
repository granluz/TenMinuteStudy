#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	//c++ friend
	//���� ������ : �ΰ� �̻��� �ǿ����ڸ� �䱸�ϴ� ������
	//operator*
	Time t1(1, 20);
	Time t2;
	t2 = 3 * t1;
	//t2 = t1 * 3;
	t2.show();

	return 0;
}