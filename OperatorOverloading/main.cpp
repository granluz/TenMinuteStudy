#include "Time.h"

int main() {
	//Time
	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;//total이라는 새로운 Time개체를 만들어준다.
	total = day1+day2;//day1과 day2를 더한 값을 대입한다.
	total.show();

	return 0;
}