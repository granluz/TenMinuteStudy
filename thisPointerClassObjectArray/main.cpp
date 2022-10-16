#include "Stock.h"


int main() {
	Stock s[4] =
	{
		Stock("A", 10, 1000),
		Stock("B", 20, 2000),
		Stock("C", 30, 3000),
		Stock("D", 40, 4000)//각 배열의 원소에 해당되는 생성자를 불러줌으로 값을 부여 가능
	};

	Stock *first = &s[0];//Stock first를 를 만들어 s배열 첫 원소에 할당
	for (int i = 1; i < 4; i++)//카운터를 1부터 시작하여 배열의 끝까지 반복
	{
		first = &first->topval(s[i]);
		//fisrt에는 s[0]이 저장되어있으므로 s[0]과 s[i] 즉 s[1] 두번째 원소의 값과 비교하여 저장한다.
	}
	first->show();
	/*
	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	s1.show();
	s2.show();

	cout << "A와 B중 share val이 큰 객체는\n";
	s1.topval(s2).show();
	*/
	return 0;
}