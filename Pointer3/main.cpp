#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define SIZE 20

//���� ����ü ���� ����� �迭 ��������� ����
//temp* ps = new temp; 

struct MyStruct
{
	char name[SIZE];
	int age;
};

int main(){
	// ������ �ð�
	/*
	char animal[SIZE];
	char* ps;
	
	cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal; //���� �̸��� ����ڿ��� �Է� �޾� animal�̶�� char[20]�� �迭�� �����Ѵ�.
	//����ð�
	ps = new char[strlen(animal) + 1]; //strlen(����) �Ұ�ȣ�� �ѷ����� ������ ũ�⸦ ��ȯ�ϴ� �Լ�
	//>> new �����ڸ� ���� ����ڰ� �� ���ڸ� �Է��� �ϴ� �׺��� ��ĭ�� �˳��� ������ �����Ѵ�.
	strcpy(ps, animal); //strcpy(����1, ����2) ����2�� ���� ����1�� ����

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�" << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;
	
	delete[] ps;
	*/

	MyStruct* temp = new MyStruct;//����ü�� ������������ ����� �� �ִ�.
	//����ü�� new�����ڸ� ���� �������� �����Ͽ���.

	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;//���� ����ü�� '.'���� ��� ������ �ƴ� ->�� ���ٰ����ϴ�.

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;// ->�����ڸ� ���ؼ� �����ϴ°��� �ƴ� (*����).��� �ε� ���� �����ϴ�.
	//>> cin >> temp->age; �� ����

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << (*temp).age << "�� �̱���!";
	
	delete temp;

	return 0;

}