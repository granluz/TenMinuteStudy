#include "Time.h"

int main() {
	//Time
	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;//total�̶�� ���ο� Time��ü�� ������ش�.
	total = day1+day2;//day1�� day2�� ���� ���� �����Ѵ�.
	total.show();

	return 0;
}