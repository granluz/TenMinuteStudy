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
	virtual void show();//���� �޼��带 ����Ѵ�.
	~Time();
	int getHour() { return hours; }
	int getMins() { return mins; }
	friend Time operator*(int n, Time& t) {
		return t * n;
	}; //operator*�� ����Լ��� �ƴϴ�. ������ ����Լ��� ������ ���� ������ ���´�.
	/*
	t*n���� �����Ѵٸ�, ������ ���۷����Ͱ� ȣ��� t*n���� ���°� ��ȯ�ɰ��̰�
	time operator�� ����� ���̴�.
	*/
	friend std::ostream& operator<<(std::ostream&, Time&);//ostream�� �ִ� <<�� �Ű������� �������Ѵ�.
};

class NewTime : public Time {
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void show() override;//show�� ��ӹ޾� ����Ѵ�.
};


#endif