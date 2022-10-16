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
{//���ù��� �ð��� ���� �ð��� �����ش�
	hours += h;
};

void Time::addMins(int m)
{
	mins += m;//mins�� ���ù��� ���� �����ش�. ex)76
	hours += mins / 60;//hours�� mins�� 60���� �������� ���ؼ� �����Ѵ�. ex) 76/60 = 1
	mins %= 60;//mins�� 60�� ������ ���� �޴´�. ex) 16
};

Time Time::operator+(Time& t)//ȣ���� time��ü�� �Ű����� time ��ü�� ���� ���� ���ο� time�� �����.
{
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;

	return sum;
};

void Time::show()
{//ȣ���� ��ü�� �ð��� ���� ���
	cout << "�ð� : " << hours << endl;
	cout << "�� : " << mins << endl;
};