#include <iostream>

using namespace std;

int main() {
	//char : ���� ������
	int a = 77;
	char b = a; // ascll �ڵ� 77���� �����ϴ� M�� ���´�.
	//char ���� �Ѱ����� ���ڸ� ������ �� �ִ�.
	b = 'a'; // ���� ����ǥ�� �Է� �� a�� ���´�.
	//null ���� '\0' 
	//ex
	char c[] = { 'a','b','c', '\0'};
	// "" == null���ڰ� ��������� ���ԵǾ� �ִ�. -> String
	cout << c << endl;	
	
	//bool�� : 0 Ȥ�� 1 �� ��Ÿ�� �� �ִ�. 0 = false, 1 = true
	bool d = 0;
	bool e = 1;
	bool f = 10; // bool ���� 0 �̿��� ���� ��� 1�� ����Ѵ�.
	
	cout << d << "  " << e << "  " << f << endl;

	return 0;
}