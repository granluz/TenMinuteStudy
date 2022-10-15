#include <iostream>

using namespace std;

//분기 구문 : if 와 switch
//for문 처럼 프로그램에게 의사결정능력을 부여하는것
int main()
{
	//if else 구문
	//조건 값이 참이라면 이프 구문에 선언된 코드가 실행
	//거짓이라면 else 구문에 선언된 코드가 실행 된다.
	//컴퓨터는 if 와 else 구문을 하나의 코드 블럭으로 인식한다
	if (false){
		cout << "#1";
	}
	else{//else 구문 뒤에 다시 if else 구문을 선언 가능하다.
		if (true) {
			cout << "#2";
		}
		else{
			cout << "#1";
		}
	}	
	cout << endl;

	cout << "프로그램이 종료 되었습니다.";

	return 0;

}