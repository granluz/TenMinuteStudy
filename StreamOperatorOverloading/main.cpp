#include <iostream>
#include "Time.h"

using namespace std;

int main() {
//��Ʈ�� ���� << ������ �����ε� 
	Time t1(3, 45);

	t1.show();

	cout << t1;
	//<<�����ڴ� iostream�� ���Ե� cout�� time�� ��ü t1 �ΰ��� �ǿ����ڰ� �ʿ��ϴ�.
	//friend�Լ��� ���� �����ε� �����ϴ�.
	return 0;
}