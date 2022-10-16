#include "Stock.h"

void Stock::buy(int n, float pr) {//�ֽ� ���
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {//�ֽ� �Ȱ�
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {//�ֽ� ������ �ٲٰ�
	share_val = pr;
	set_total();
}
void Stock::show() {//�ֽ� ������ ���
	cout << "ȸ�� �� : " << name << endl;
	cout << "�ֽ� �� : " << shares << endl;
	cout << "�ְ� : " << share_val << endl;
	cout << "�ֽ� �� ��ġ : " << total_val << endl;
}

Stock &Stock::topval(Stock& s)//ȣ���� Stock ��ü�� �ְ� �Ű������� �־��� Stock ��ü�� �ִ�
{
	if (s.share_val > share_val)//�Ű������� �־��� Stock�� slhare_val�� ȣ���� Stock�� Share_val���� ũ�ٸ�
		return s;//�Ű������� share_val(����)�� �����Ѵ�.
	else return *this;//this�� �������̴�.
}



Stock::Stock(string co, int n, float pr)//�����ڿ� �Ű������� �����ش�.
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock()//�����ε��� ���� �����ڸ� ���� ������ش�.
{
	name = "";
	shares = 0;
	share_val = 0.0f;
	set_total();
}

Stock::~Stock() //�ı��ڴ� �����ڿ� ���������� ���ϰ��� ���� �� ����, �ı��ڴ� �ı� �ܿ��� �ٸ� ������ ���� �ʴ´�.
{	
}