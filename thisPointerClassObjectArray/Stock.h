#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock//Stock이라는 이름의 데이터형을 만들었다.
{
	//접근 제한자 private public protected
private://데이터 은닉을 통해 퍼블릭의 멤버 함수를 통해서만 접근 가능하다.
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock &topval(Stock&);//Stock 데이터형을 반환해야하므로 Stock으로 선언 후 매개변수로 하나의 Stock데이터형을 받아야한다.
	Stock(string, int, float);
	Stock();
	~Stock();

};


#endif // !Stock