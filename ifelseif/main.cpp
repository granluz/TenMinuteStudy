#include <iostream>

using namespace std;

//�б� ���� : if �� switch
//for�� ó�� ���α׷����� �ǻ�����ɷ��� �ο��ϴ°�
int main()
{
	//if else ����
	//���� ���� ���̶�� ���� ������ ����� �ڵ尡 ����
	//�����̶�� else ������ ����� �ڵ尡 ���� �ȴ�.
	//��ǻ�ʹ� if �� else ������ �ϳ��� �ڵ� ������ �ν��Ѵ�
	if (false){
		cout << "#1";
	}
	else{//else ���� �ڿ� �ٽ� if else ������ ���� �����ϴ�.
		if (true) {
			cout << "#2";
		}
		else{
			cout << "#1";
		}
	}	
	cout << endl;

	cout << "���α׷��� ���� �Ǿ����ϴ�.";

	return 0;

}