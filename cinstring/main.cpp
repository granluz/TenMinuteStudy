#include <iostream>
#include <cstring> // strlen()함수를 사용하기 위해서 strlen == 문자열의 길이를 반환하는 함수

/*
1. 사용자 입력
>> cin, get/getline
2.string
*/

using namespace std;

int main() {
	const int Size = 15;
	char name1[Size]; // 메모리에 잡아둔 15개의 비어있는 배열 공간
	char name2[Size] = "C++programing"; // 문자열 상수로 초기화된 배열 "" <- 자동으로 null값을 포함한다.

	cout << "안녕하세요! 저는 " << name2 << "입니다!" << endl;
	cout << "성함이 어떻게 되시나요?" << endl;
	//cin >> name1;
	//whith space 불가 공백을 만나면 문자열의 끝이라 인식한다(spacebar, tab, enter)
	cin.getline(name1, Size);//cin.getline(변수, 입력을 받을 크기) 공백을 포함할 수 있다.
	//get과 getline은 동일한 방식으로 동작한다.
	cout << "그렇군요! " << name1 << "님, 당신의 이름은 " << endl;
	cout << strlen(name1) << " 자입니다." << endl; // 문자열의 길이를 반환하는 함수 strlen
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다." << endl; //바이트의 크기를 반환하는 함수
	cout << "이름이" << name1[0] << "자로 시작하는군요." << endl;
	//name2[3] = '\0'; // 첫 세글자를 출력하기 위해 4번째 배열에 null 문자 삽입
	cout << "제 이름의 처음 세 문자는 다음과 같습니다 :";
	name2[3] = '\0';
	cout << name2 << endl;



	//c++에서 문자열을 다루는 방법 중 하나인 string(복합데이터형)배열

	/*
	C스타일로 string 객체를 초기화할 수 있다.
	cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
	cout을 사용하여 string 객체를 디스플레이 할 수 있다.
	배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
	>>문자열과 동등한 방식으로 사용 가능하다.
	배열을 다른 배열에 통째로 대입할 수 있다.
	배열 사이즈를 지정하지 않아도 된다.
	*/
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2; 불가능
	str1 = str2; // 가능
	//cin.getline(str2, 10);//불가
	cout << str1 << endl;
	cout << sizeof(str1) << endl;
	cout << str1[0] << endl;
	return 0;

}