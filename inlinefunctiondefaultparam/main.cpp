#include <iostream>

using namespace std;

inline float square(float x){ return x * x; }
//���α׷��� ����ӵ� ����� ���� ���ȴ�.

const int SIZE = 8;
int sumArr(int*, int a = 2);
//a = 1 �� ���� default�� sumArr(arr, 1)�� ���޵ȴ�.
//�����ϰ��� �ϴ� ����Ʈ �Ű������� ��ġ�� ���� ���������� ��ġ�ϰų� 
//>> �����ϰ��� �ϴ� ����Ʈ �Ű������� ������ �Ű��������� ��� ����Ʈ ���� �������ش�.
int main(){
	//�ζ��� �Լ�
	/*
	int a;
	cout << "�� ���� ���̸� �Է� �� �ּ���" << endl;
	cin >> a;
	cout << "�� ���� ���̰� " << a << "�� ���簢���� ���̴�?" << endl;
	float b = square(a); // �Լ��� ȣ���ϰ� ����ϴ°��� �Ϲ����� �Լ��� �����ϴ�.
	cout << b << endl;
	*/
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
	int sum = sumArr(arr);

	cout << "�Լ��� �� ���� " << sum << " �Դϴ�.";

	return 0;

}

int sumArr(int* arr, int a) {
	int total = 0;

	for (int i = 0; i < a; i++)
		total = total + arr[i];

	return total;
}
