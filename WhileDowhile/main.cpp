#include <iostream>

using namespace std;

int main()
{
	//while문, do while문

	//while과 do while은 조건을 검사하는 부분만 소괄호에 정의하는 형태로 사용
	//>> 카운터가 미리 정의 되어 있어야한다.
	
	string str = "Dumbo";
	bool a = true;
	bool b = false;
	//int i = 0;

	//while (str[i] != '\0')//while문은 for문과는 다르게 bool 데이터 하나만으로 내부 정의 가능
	//{	
	//	//code
	//	cout << str[i] << endl;
	//	i++;
	//}
	/*
	for (int i = 0; i < 3; i++)
	{
		//int i는 for문 내에서 선언되었기에 for 문 밖에서는 사용 불가
		cout << "for문 입니다.\n";
	}
	
	int j = 0;

	while (j < 3)// while 은 true일때 항상실행으로 몸체에서 a의 값을 변경시켜주지 않으면 계속 실행됨
	{
		cout << "while문 입니다.\n";
		j++;
	}

	//cout << i << endl; 사용 불가
	cout << j << endl;
	*/

	//do while
	//>>반복을 실행하고 조건을 검사한다.
	bool j = false;
	do
	{
		cout << "while문 입니다.\n";	
	} while(j);

	return 0;
}