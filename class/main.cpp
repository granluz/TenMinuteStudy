#include "Stock.h"


int main() {
	//추상화와 클래스
	Stock temp;
	temp.acquire("Luz", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;
}