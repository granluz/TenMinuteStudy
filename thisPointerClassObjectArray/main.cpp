#include "Stock.h"


int main() {
	Stock s[4] =
	{
		Stock("A", 10, 1000),
		Stock("B", 20, 2000),
		Stock("C", 30, 3000),
		Stock("D", 40, 4000)//�� �迭�� ���ҿ� �ش�Ǵ� �����ڸ� �ҷ������� ���� �ο� ����
	};

	Stock *first = &s[0];//Stock first�� �� ����� s�迭 ù ���ҿ� �Ҵ�
	for (int i = 1; i < 4; i++)//ī���͸� 1���� �����Ͽ� �迭�� ������ �ݺ�
	{
		first = &first->topval(s[i]);
		//fisrt���� s[0]�� ����Ǿ������Ƿ� s[0]�� s[i] �� s[1] �ι�° ������ ���� ���Ͽ� �����Ѵ�.
	}
	first->show();
	/*
	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	s1.show();
	s2.show();

	cout << "A�� B�� share val�� ū ��ü��\n";
	s1.topval(s2).show();
	*/
	return 0;
}