#include <iostream>

using namespace std;

//class Ȥ�� typeName
template<typename Any>
Any sum(int, Any);
template<typename Any>
float sum(float, Any);
//�����ε��� �����ϴ�.

int main() {
	//�Լ� ���ø� : �Լ��� �Ϲ�ȭ�� ���� ���� == �Ϲ�ȭ�� ��ü���� ���α׷����� ��ǥ �� �ϳ��̴�
	//��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
	//>>���������� ��� ���� �Ϲ������� ����� �� �ִ� �Լ��� ����°�.
	
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