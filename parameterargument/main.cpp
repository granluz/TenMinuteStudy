#include <iostream>

using namespace std;

void helloCPP(int, int);
//�Լ��� ������ �����ϴ� �κп��� ������ �̸��� �����Ͽ��� �����ϴ�.
int main()
{
	int times;
	int times2;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> times;
	cout << "������ �ѹ� �� �Է��Ͻʽÿ�.\n";
	cin >> times2;
	helloCPP(times, times2);//ȣ���� �� ���Ǵ� ������ �������� argument��� �Ѵ�
	//������ ���� 1:1�� �����Ǳ⿡ ���� ���������� ��ġ�Ǿ�� �Ѵ�.

	return 0;
}

void helloCPP(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Hello\n";
	};
	for (int i = 0; i < m; i++)
	{
		cout << "C++!\n";
	};
}