#include "Stock.h"


int main() {
	//�߻�ȭ�� Ŭ����
	Stock temp;
	temp.acquire("Luz", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;
}