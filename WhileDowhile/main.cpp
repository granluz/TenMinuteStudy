#include <iostream>

using namespace std;

int main()
{
	//while��, do while��

	//while�� do while�� ������ �˻��ϴ� �κи� �Ұ�ȣ�� �����ϴ� ���·� ���
	//>> ī���Ͱ� �̸� ���� �Ǿ� �־���Ѵ�.
	
	string str = "Dumbo";
	bool a = true;
	bool b = false;
	//int i = 0;

	//while (str[i] != '\0')//while���� for������ �ٸ��� bool ������ �ϳ������� ���� ���� ����
	//{	
	//	//code
	//	cout << str[i] << endl;
	//	i++;
	//}
	/*
	for (int i = 0; i < 3; i++)
	{
		//int i�� for�� ������ ����Ǿ��⿡ for �� �ۿ����� ��� �Ұ�
		cout << "for�� �Դϴ�.\n";
	}
	
	int j = 0;

	while (j < 3)// while �� true�϶� �׻�������� ��ü���� a�� ���� ����������� ������ ��� �����
	{
		cout << "while�� �Դϴ�.\n";
		j++;
	}

	//cout << i << endl; ��� �Ұ�
	cout << j << endl;
	*/

	//do while
	//>>�ݺ��� �����ϰ� ������ �˻��Ѵ�.
	bool j = false;
	do
	{
		cout << "while�� �Դϴ�.\n";	
	} while(j);

	return 0;
}