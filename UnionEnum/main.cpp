# include <iostream>

using namespace std;

int main() {
	/*공용체(union)
	서로 다른 데이터형을 한번에 한가지만 보관할 수 있음.
	>> 여러 데이터형을 멤버로 사용할 수 있으나 동시에는 사용 못한다. 
	>> 장점은 메모리 절약 가능
	*/

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3f;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;


	//열거체(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법.

	enum spectrum {red, orange, yellow, green,
	blue, violet, indigo, ultraviolet };//열거자는 기본적으로 아무런 옵션을 지정하지 않으면 0부터 1씩 더해지는 정수가 자동으로 저장
	// 대입연산자 =을 사용하여 값을 넣어줄수도 있다. (red = 0. orange = 2) 초기화시 무조건 정수여야하고 초기화 하지 않은 열거자들은
	//>> 그 이전 초기화 한 값에서 1 씩 더해진다.
	/*
	열거체는 enum이라는 데이터형의 이름으로 선언 두가지의 역활 수행
	1. spectrum을 새로운 데이터형 이름으로 만든다.
	2. 정의된 다양한 수를 0에서부터 7까지 정수값을 각각 나타내는 기호 상수로 만든다.(정수를 문자로 사용 가능하다)
	*/

	spectrum a = orange;
	/* 선언한 a 에 오랜지를 대입한다.
	>>a 에는 사용된 열거자들의 값만 대입 가능하다.
	기호 상수로서 관리하기 때문에 산술 연산을 적용할 수 없다.
	>> orange + yellow = green 불가능하다
	*/
	cout << a << endl; // 1이 출력된다.

	/*
	열거자들을 정수형에 대입할때는 int 형으로 변환 가능하다.
	*/
	int b; //int 형 변수에 값을 대입하면 int형 정수로 대입된다.
	b = blue + 3; //blue 는 열거체 내에서 4의 의미를 가진다.
	cout << b << endl; // 7이 출력된다.

	return 0;

}