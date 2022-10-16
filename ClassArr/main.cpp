#include <iostream>
#include "Time.h"

using namespace std;

const int MAX = 3;

int main() {
	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "��° ���Ҹ� �����մϴ�." << endl;
		cout << "�ð��� �Է��Ͻʽÿ�." << endl;
		cin >> hours;
		cout << "���� �Է��Ͻʽÿ�." << endl;
		cin >> mins;
		char check;
		cout << "�� ������ �ִٸ� 1, ���ٸ� 0�� �Է��Ͻʽÿ�." << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "���� �Է��Ͻʽÿ�." << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "��° �����Դϴ�." << endl;
		times[i]->show();
		//Time�� ���� ������ �迭������ �迭���ҿ� NewTime �迭�� ���ٸ� NewTime�� �����ϴ� show�� ȣ��ȴ�
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];
	}
	return 0;
}