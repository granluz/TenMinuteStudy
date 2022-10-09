#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형
	int a = 77;
	char b = a; // ascll 코드 77번에 대응하는 M이 나온다.
	//char 형은 한가지의 문자만 저장할 수 있다.
	b = 'a'; // 작은 따음표로 입력 시 a로 나온다.
	//null 문자 '\0' 
	//ex
	char c[] = { 'a','b','c', '\0'};
	// "" == null문자가 명시적으로 포함되어 있다. -> String
	cout << c << endl;	
	
	//bool형 : 0 혹은 1 만 나타낼 수 있다. 0 = false, 1 = true
	bool d = 0;
	bool e = 1;
	bool f = 10; // bool 형은 0 이외의 값은 모두 1로 출력한다.
	
	cout << d << "  " << e << "  " << f << endl;

	return 0;
}