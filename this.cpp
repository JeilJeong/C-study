/*#include<iostream>

using namespace std;

class Myclass {
public:
	void PrintThis() {
		cout << "���� �ּҴ�" << this << endl;
	}
};

int main() {
	Myclass a, b;

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}
//class ���� instance�� �����ϰ� �Ǵµ�, �� �� �Լ���
//�ߺ��Ǵ� ������ �����ϰ��� memory ���� ����� ������ ��ġ�ϰ� ��
//��, Myclass a�� b���� PrintThis() �Լ��� ������ ������ ����Ű�� �ִ� ��
//���� �ܼ��� this������ �ش� ��ü�� �������� ������ �� ����
//�׷��� ����� �Ű������� this�� �ش��ϴ� ��ü�� �ּҸ� �ѱ�� �ִ� ��
*/