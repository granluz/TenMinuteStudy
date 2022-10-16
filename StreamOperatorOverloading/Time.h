#include <iostream>

#ifndef TIME
#define TIME

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}; //operator*는 멤버함수가 아니다. 하지만 멤버함수와 동등한 접근 권한을 갖는다.
	/*
	t*n으로 정의한다면, 프렌드 오퍼레이터가 호출시 t*n으로 형태가 변환될것이고
	time operator로 연산될 것이다.
	*/
	friend std::ostream& operator<<(std::ostream&, Time&);//ostream에 있는 <<의 매개변수를 재정의한다.

};

#endif