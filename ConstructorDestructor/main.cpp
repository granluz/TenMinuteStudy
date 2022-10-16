#include "Stock.h"


int main() {
	
	cout << "생성자를 이용하여 객체 생성\n";
	Stock temp("Luz", 100, 1000);

	cout << "디폴트 생성자를 이용하여 객체 생서\n";
	Stock temp2;

	cout << "temp를 temp2에 대입\n";
	temp2 = temp;

	cout << "temp와 temp2 출력\n";
	temp.show();
	temp2.show();

	cout << "생성자를 이용하여 temp 내용 재설정\n";
	temp = Stock("Gran", 80, 500);

	cout << "재설정된 temp 출력\n";
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