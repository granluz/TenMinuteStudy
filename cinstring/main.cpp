#include <iostream>
#include <cstring> // strlen()�Լ��� ����ϱ� ���ؼ� strlen == ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�

/*
1. ����� �Է�
>> cin, get/getline
2.string
*/

using namespace std;

int main() {
	const int Size = 15;
	char name1[Size]; // �޸𸮿� ��Ƶ� 15���� ����ִ� �迭 ����
	char name2[Size] = "C++programing"; // ���ڿ� ����� �ʱ�ȭ�� �迭 "" <- �ڵ����� null���� �����Ѵ�.

	cout << "�ȳ��ϼ���! ���� " << name2 << "�Դϴ�!" << endl;
	cout << "������ ��� �ǽó���?" << endl;
	//cin >> name1;
	//whith space �Ұ� ������ ������ ���ڿ��� ���̶� �ν��Ѵ�(spacebar, tab, enter)
	cin.getline(name1, Size);//cin.getline(����, �Է��� ���� ũ��) ������ ������ �� �ִ�.
	//get�� getline�� ������ ������� �����Ѵ�.
	cout << "�׷�����! " << name1 << "��, ����� �̸��� " << endl;
	cout << strlen(name1) << " ���Դϴ�." << endl; // ���ڿ��� ���̸� ��ȯ�ϴ� �Լ� strlen
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�." << endl; //����Ʈ�� ũ�⸦ ��ȯ�ϴ� �Լ�
	cout << "�̸���" << name1[0] << "�ڷ� �����ϴ±���." << endl;
	//name2[3] = '\0'; // ù �����ڸ� ����ϱ� ���� 4��° �迭�� null ���� ����
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ� :";
	name2[3] = '\0';
	cout << name2 << endl;



	//c++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string(���յ�������)�迭

	/*
	C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷��� �� �� �ִ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
	>>���ڿ��� ������ ������� ��� �����ϴ�.
	�迭�� �ٸ� �迭�� ��°�� ������ �� �ִ�.
	�迭 ����� �������� �ʾƵ� �ȴ�.
	*/
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; �Ұ���
	str1 = str2; // ����
	//cin.getline(str2, 10);//�Ұ�
	cout << str1 << endl;
	cout << sizeof(str1) << endl;
	cout << str1[0] << endl;
	return 0;

}