#include "Stock.h"


int main() {
	
	cout << "�����ڸ� �̿��Ͽ� ��ü ����\n";
	Stock temp("Luz", 100, 1000);

	cout << "����Ʈ �����ڸ� �̿��Ͽ� ��ü ����\n";
	Stock temp2;

	cout << "temp�� temp2�� ����\n";
	temp2 = temp;

	cout << "temp�� temp2 ���\n";
	temp.show();
	temp2.show();

	cout << "�����ڸ� �̿��Ͽ� temp ���� �缳��\n";
	temp = Stock("Gran", 80, 500);

	cout << "�缳���� temp ���\n";
	temp.show();
	/*
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();
	*/
	return 0;
}