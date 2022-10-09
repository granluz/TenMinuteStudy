# include <iostream>

using namespace std;

int main() {
	/*����ü(union)
	���� �ٸ� ���������� �ѹ��� �Ѱ����� ������ �� ����.
	>> ���� ���������� ����� ����� �� ������ ���ÿ��� ��� ���Ѵ�. 
	>> ������ �޸� ���� ����
	*/

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3f;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;


	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.

	enum spectrum {red, orange, yellow, green,
	blue, violet, indigo, ultraviolet };//�����ڴ� �⺻������ �ƹ��� �ɼ��� �������� ������ 0���� 1�� �������� ������ �ڵ����� ����
	// ���Կ����� =�� ����Ͽ� ���� �־��ټ��� �ִ�. (red = 0. orange = 2) �ʱ�ȭ�� ������ ���������ϰ� �ʱ�ȭ ���� ���� �����ڵ���
	//>> �� ���� �ʱ�ȭ �� ������ 1 �� ��������.
	/*
	����ü�� enum�̶�� ���������� �̸����� ���� �ΰ����� ��Ȱ ����
	1. spectrum�� ���ο� �������� �̸����� �����.
	2. ���ǵ� �پ��� ���� 0�������� 7���� �������� ���� ��Ÿ���� ��ȣ ����� �����.(������ ���ڷ� ��� �����ϴ�)
	*/

	spectrum a = orange;
	/* ������ a �� �������� �����Ѵ�.
	>>a ���� ���� �����ڵ��� ���� ���� �����ϴ�.
	��ȣ ����μ� �����ϱ� ������ ��� ������ ������ �� ����.
	>> orange + yellow = green �Ұ����ϴ�
	*/
	cout << a << endl; // 1�� ��µȴ�.

	/*
	�����ڵ��� �������� �����Ҷ��� int ������ ��ȯ �����ϴ�.
	*/
	int b; //int �� ������ ���� �����ϸ� int�� ������ ���Եȴ�.
	b = blue + 3; //blue �� ����ü ������ 4�� �ǹ̸� ������.
	cout << b << endl; // 7�� ��µȴ�.

	return 0;

}