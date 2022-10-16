#include "Time.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
};

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};

void Time::show() {
	std::cout << "�ð� : " << hours << std::endl;
	std::cout << "�� : " << mins << std::endl;
}

Time::~Time()
{
}

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "�ð� " << t.mins << "��";
	return os;
}

NewTime::NewTime() : Time(){
	day = 0;
	//Time �����ڿ����� hours, mins�� 0���� �ʱ�ȭ �Ǿ��ֱ⿡ day�� �ʱ�ȭ ���ָ� �ȴ�.
}
NewTime::NewTime(int h, int m, int d) : Time(h,m){
	day = d;
}

void NewTime::print() {
	std::cout << "�� : " << day << std::endl;
	show();
	//print�� ���� day�� ����ϰ� show�� ȣ���Ѵ�.
}