#include <iostream>

using namespace std;

const float PIE = 3.14;
//1,2. �츮�� �̷��� �Լ��� ����Ұž� ��� ������ �̸� �����Ѵ�.
void cheers(int n) {
	//ȣ���� �Լ��κ��� int�� ���� �ϳ��� ��´�.
	for (int i = 0; i < n; i++)
	{
		//���� �Լ��� ���Ǹ�ŭ �ݺ� ����Ѵ�.
		cout << "Cheers!" << endl;
	}
	//return; �� �����Ͽ��� �����ϴ�.
};//�Լ��� ������ ���
float circle(int x) {
	//ȣ���� �Լ��κ��� int�� ���� �ϳ��� ��´�.
	//x * x * const PIE�� �������ش�.
	return x * x * PIE;
};

int main()
{
	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);//3. �Է� ���� int a�� cheers�� ����

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." <<endl;

	return 0;
}

//1. �Լ��� �������ش�.
//void cheers(int n) {
	//ȣ���� �Լ��κ��� int�� ���� �ϳ��� ��´�.
	//for (int i = 0; i < n; i++)
	//{
		//���� �Լ��� ���Ǹ�ŭ �ݺ� ����Ѵ�.
		//cout << "Cheers!" << endl;
	//}
	//return; �� �����Ͽ��� �����ϴ�.
//}

//float circle(int x) {
	//ȣ���� �Լ��κ��� int�� ���� �ϳ��� ��´�.
	//x * x * const PIE�� �������ش�.
	//return x * x * PIE;
//}

/*1. ���ϰ��� �ִ� Ÿ��

	typeName functionName(parameterList)
	{
		statement(s);
		return value;
	}

	2. ���ϰ��� ���� Ÿ��

	void functionName(parameterList)
	{
		statement(s);
		return; // ������ �� ����
	}
	*/