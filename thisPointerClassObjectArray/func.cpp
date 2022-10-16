#include "Stock.h"

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

Stock &Stock::topval(Stock& s)//호출한 Stock 객체가 있고 매개변수로 넣어준 Stock 객체가 있다
{
	if (s.share_val > share_val)//매개변수로 넣어준 Stock의 slhare_val가 호출한 Stock의 Share_val보다 크다면
		return s;//매개변수의 share_val(참조)를 리턴한다.
	else return *this;//this는 포인터이다.
}



Stock::Stock(string co, int n, float pr)//생성자에 매개변수를 취해준다.
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock()//오버로딩을 통해 생성자를 새로 만들어준다.
{
	name = "";
	shares = 0;
	share_val = 0.0f;
	set_total();
}

Stock::~Stock() //파괴자는 생성자와 마찬가지로 리턴값을 가질 수 없다, 파괴자는 파괴 외에는 다른 역할은 하지 않는다.
{	
}