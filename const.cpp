#include<iostream>

using namespace std;

//1. 매개변수의 상수화 (모든 함수)
//2. 메서드의 상수화(멤버 메서드)


class Account {
public:
	Account() : money(0){}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		money += d;
		cout << d << "원을 예금했다!" << endl;
	}
	void Draw(int d) {
		if (money >= d ) {
			money -= d;
			cout << d << "원을 인출했다!" << endl;
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
	
	cout << "잔액은 " << jeil.ViewMoney() << "원입니다." << endl;
}