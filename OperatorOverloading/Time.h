#include <iostream>
#ifndef TIME
#define TIME

using namespace std;

class Time
{
//Time 클래스는 hours, mins를 프라이빗 멤버로 가지고 있다.
private:
	int hours;
	int mins;

public:
	Time(int, int);//매개변수를 지정한 생성자 오버로딩
	Time();//default 생성자
	~Time();
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	void show();
};

#endif 
