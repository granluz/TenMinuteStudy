#include <iostream>

using namespace std;

const int SIZE = 30; //SIZE ����� �����ϰ� 30�� ���� �ش�.

int main()
{
	cout << "������ �Է��Ͻʽÿ�.\n";
	char line[SIZE]; //char���� �迭�� �����Ѵ�. 
	cin.get(line, SIZE);//����ڷ� ���� �Է��� �޴´�.
	cout << "�Է��Ͻ� ������\n";
	int spaces = 0;

	for (int i = 0; line[i] != '\0'; i++) {
	//for ���� ����Ͽ� ���๮�ڸ� ������ ������
		cout << line[i];
		//������ ����Ѵ�

		if (line[i] != ' ')
			continue;
		//��Ƽ���� ���� �Է��� ���忡 ������ ���ٸ� ��Ƽ���� ���� �ٽ� �ݺ�
		//>>������ �ִٸ� sapces++�� �����ϰ� �ݺ��Ѵ�.

		spaces++;
	}
	cout << "�Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ���� " << spaces << " �� �Դϴ�.\n";
	cout << "for���� �������ϴ�.\n";
	

	return 0;
}