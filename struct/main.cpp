#include <iostream>

using namespace std;

int main() {
	/*구조체 == 복합데이터형 사용자의 입맛대로 원하는 데이터형을 만들수 있는 c++의 특장점이 가장 잘 들어난다.
	>> 다른 데이터형이 허용되는 데이터의 집합 : 배열처럼 원소를 하나의 구조체에 담을 수 있지만 원소들간 다른 데이터형이 허용된다.
	배열 == 같은 데이터형의 집합
	*/


	//축구선수.
	struct MyStruct//struct 로 구조체 선언하고 이름을 만들어준다.
	{
		//해당 변수들은 멤버라는 구성요소가 된다.
		string name;//선수의 이름
		string position;//선수의 포지션
		int height;//선수의 키
		int weight;//선수의 몸무게
	} B; // 중괄호 뒤에 사용할 변수명을 입력하면 구조체가 자동으로 만들어진다.
	
	MyStruct A = {
		"Son",
		"WingFoward",
		183,
		77
	};

	cout << A.name << endl;
	cout << A.position<< endl;
	cout << A.height << endl;
	cout << A.weight << endl;	

	//구조체 역시 배열처럼 값을 기입할때 멤버에 해당되는 모든 값을 기입하지 않아도 된다.
	B = {
		//빈 중괄호로 선언을 하면 빈 값은 각각 0에 해당되어 저장된다.
	};	
	
	//구조체 역시 배열로 선언 가능하다.
	MyStruct C[2];
	/*
	구조체 배열을 초기화 하는 방법
	1. MyStruct C[2] = {
		{"A", "A", 1, 1},
		>> 첫번째 인덱스 값을 넣고 ','로 구분한다
		{"B", "B", 2, 2}
	};
	멤버에 접근하는 방법
	C[0].name 으로 접근할 인덱스 번호를 입력하여 멤버 변수에 접근 가능하다
	*/ 
	C[0] = { "A", "A", 1, 1 };
	C[1] = { "B", "B", 2, 2 };
	cout << C[0].name << endl;
	cout << C[1].name << endl;
	
	return 0;
}
