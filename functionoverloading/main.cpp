#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main(){
	/*
	����� �� ���� ���
	1. �Լ��� �������� �ٸ� ���
	>>�Ķ����(�Ű�����)�� �޶���Ѵ�
	2. �Լ��� ����� ��, �� �� �̻��� �Լ��� �����Ǵ� ���
	*/
	cout << "�� ������ �Է��Ͻʽÿ�.\n";
	int a;
	int b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << "�Դϴ�\n";
	cout << "�� �Ǽ��� �Է��Ͻʽÿ�.\n";
	float c;
	float d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << sum(c, d) << "�Դϴ�\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}