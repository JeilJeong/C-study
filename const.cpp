/*#include<iostream>

using namespace std;

//1. 매개변수의 상수화 (모든 함수) -> 코드가 길어지면 특정 매개변수의 값이 의도치 않게 실수로 변화할 수 있음, 이는 문맥적으로 의도치 않은 오류가 발생하는 것
// 이를 방지하기 위해 매개변수의 상수화로 parameter의 값을 유지해주기!

//2. 메서드의 상수화(멤버 메서드) -> 멤버 메서드가 멤버 변수를 수정할 수 없음(어차피 get함수의 경우 멤버 변수를 바꿀 의도가 아니기 때문에 큰 문제가 없다)


class Account {
public:
	Account() : money(0){}
	Account(int money) : money(money) {}

	void Deposit(const int d) {
		money += d;
		cout << d << "원을 예금했습니다." << endl;
	}
	void Draw(const int d) {
		if (money >= d ) {
			money -= d;
			cout << d << "원을 인출했습니다." << endl;
		}
	}

	int ViewMoney() const {
		return money;
	}
// const int ViewMoney()는 return 값이 상수형이라는 것, 상수형 메서드가 아님

private:
	int money;
};

int main() {
	Account jeil(100);

	jeil.Deposit(100);
	jeil.Draw(20);
	
	cout << "잔액은 " << jeil.ViewMoney() << "원입니다." << endl;
}
*/