#include<iostream>

using namespace std;

//1. �Ű������� ���ȭ (��� �Լ�)
//2. �޼����� ���ȭ(��� �޼���)


class Account {
public:
	Account() : money(0){}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		money += d;
		cout << d << "���� �����ߴ�!" << endl;
	}
	void Draw(int d) {
		if (money >= d ) {
			money -= d;
			cout << d << "���� �����ߴ�!" << endl;
		}
	}

	int ViewMoney() {
		return money;
	}

private:
	int money;
};

int main() {
	Account jeil(100);

	jeil.Deposit(100);
	jeil.Draw(20);
	
	cout << "�ܾ��� " << jeil.ViewMoney() << "���Դϴ�." << endl;
}