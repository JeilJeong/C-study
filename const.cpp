/*#include<iostream>

using namespace std;

//1. �Ű������� ���ȭ (��� �Լ�) -> �ڵ尡 ������� Ư�� �Ű������� ���� �ǵ�ġ �ʰ� �Ǽ��� ��ȭ�� �� ����, �̴� ���������� �ǵ�ġ ���� ������ �߻��ϴ� ��
// �̸� �����ϱ� ���� �Ű������� ���ȭ�� parameter�� ���� �������ֱ�!

//2. �޼����� ���ȭ(��� �޼���) -> ��� �޼��尡 ��� ������ ������ �� ����(������ get�Լ��� ��� ��� ������ �ٲ� �ǵ��� �ƴϱ� ������ ū ������ ����)


class Account {
public:
	Account() : money(0){}
	Account(int money) : money(money) {}

	void Deposit(const int d) {
		money += d;
		cout << d << "���� �����߽��ϴ�." << endl;
	}
	void Draw(const int d) {
		if (money >= d ) {
			money -= d;
			cout << d << "���� �����߽��ϴ�." << endl;
		}
	}

	int ViewMoney() const {
		return money;
	}
// const int ViewMoney()�� return ���� ������̶�� ��, ����� �޼��尡 �ƴ�

private:
	int money;
};

int main() {
	Account jeil(100);

	jeil.Deposit(100);
	jeil.Draw(20);
	
	cout << "�ܾ��� " << jeil.ViewMoney() << "���Դϴ�." << endl;
}
*/