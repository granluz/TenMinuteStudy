#include <iostream>

using namespace std;

const int SIZE = 30; //SIZE 상수를 선언하고 30의 값을 준다.

int main()
{
	cout << "문장을 입력하십시오.\n";
	char line[SIZE]; //char형의 배열을 선언한다. 
	cin.get(line, SIZE);//사용자로 부터 입력을 받는다.
	cout << "입력하신 문장은\n";
	int spaces = 0;

	for (int i = 0; line[i] != '\0'; i++) {
	//for 문을 사용하여 개행문자를 만나기 전까지
		cout << line[i];
		//문장을 출력한다

		if (line[i] != ' ')
			continue;
		//컨티뉴를 통해 입력한 문장에 공백이 없다면 컨티뉴를 통해 다시 반복
		//>>공백이 있다면 sapces++를 실행하고 반복한다.

		spaces++;
	}
	cout << "입니다.\n";
	cout << "입력하신 문장에서 공백의 수는 " << spaces << " 개 입니다.\n";
	cout << "for문이 끝났습니다.\n";
	

	return 0;
}