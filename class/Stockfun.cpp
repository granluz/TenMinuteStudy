#include "Stock.h"

void Stock::acquire(string co, int n, float pr) {//주식 선언
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
void Stock::buy(int n, float pr) {//주식 사고
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {//주식 팔고
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {//주식 가격을 바꾸고
	share_val = pr;
	set_total();
}
void Stock::show() {//주식 정보를 출력
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}



Stock::Stock()
{
}

Stock::~Stock()
{
}