#include <iostream>
#ifndef TIME
#define TIME

using namespace std;

class Time
{
//Time Ŭ������ hours, mins�� �����̺� ����� ������ �ִ�.
private:
	int hours;
	int mins;

public:
	Time(int, int);//�Ű������� ������ ������ �����ε�
	Time();//default ������
	~Time();
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	void show();
};

#endif 
