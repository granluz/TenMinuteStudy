#include "Time.h"

Time::Time()
{
	hours = 0;
	mins = 0;
}

Time::~Time()
{
}

Time::Time(int h, int m)
{
	hours = h;
	mins = m;
}

void Time::addHours(int h)
{//지시받은 시간을 원래 시간에 더해준다
	hours += h;
};

void Time::addMins(int m)
{
	mins += m;//mins에 지시받은 분을 더해준다. ex)76
	hours += mins / 60;//hours에 mins를 60으로 나눈값을 더해서 저장한다. ex) 76/60 = 1
	mins %= 60;//mins는 60의 나머지 값을 받는다. ex) 16
};

Time Time::operator+(Time& t)//호출한 time개체와 매개변수 time 개체의 값을 더해 새로운 time을 만든다.
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;

	return sum;
};

void Time::show()
{//호출한 개체의 시간과 분을 출력
	cout << "시간 : " << hours << endl;
	cout << "분 : " << mins << endl;
};