#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define SIZE 20

//동적 구조체 생성 방법은 배열 생성방법과 동일
//temp* ps = new temp; 

struct MyStruct
{
	char name[SIZE];
	int age;
};

int main(){
	// 컴파일 시간
	/*
	char animal[SIZE];
	char* ps;
	
	cout << "동물 이름을 입력하십시오\n";
	cin >> animal; //동물 이름을 사용자에게 입력 받아 animal이라는 char[20]형 배열에 저장한다.
	//실행시간
	ps = new char[strlen(animal) + 1]; //strlen(변수) 소괄호로 둘러싸인 변수의 크기를 반환하는 함수
	//>> new 연산자를 통해 사용자가 몇 글자를 입력을 하던 그보다 한칸더 넉넉한 공간을 지정한다.
	strcpy(ps, animal); //strcpy(변수1, 변수2) 변수2의 값을 변수1에 복사

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;
	
	delete[] ps;
	*/

	MyStruct* temp = new MyStruct;//구조체는 데이터형으로 사용할 수 있다.
	//구조체를 new연산자를 통해 동적으로 선언하였다.

	cout << "당신의 이름을 입력하십시오\n";
	cin >> temp->name;//동적 구조체는 '.'으로 멤버 접근이 아닌 ->로 접근가능하다.

	cout << "당신의 나이를 입력하십시오\n";
	cin >> (*temp).age;// ->연산자를 통해서 접근하는것이 아닌 (*변수).멤버 로도 접근 가능하다.
	//>> cin >> temp->age; 와 동일

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << (*temp).age << "살 이군요!";
	
	delete temp;

	return 0;

}