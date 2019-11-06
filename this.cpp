/*#include<iostream>

using namespace std;

class Myclass {
public:
	void PrintThis() {
		cout << "나의 주소는" << this << endl;
	}
};

int main() {
	Myclass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}
//class 마다 instance를 생성하게 되는데, 이 때 함수는
//중복되는 내용을 방지하고자 memory 내에 공통된 공간에 위치하게 됨
//즉, Myclass a와 b에서 PrintThis() 함수는 동일한 공간을 가리키고 있는 것
//따라서 단순히 this만으로 해당 객체가 무엇인지 구분할 수 없음
//그러나 사실은 매개변수로 this에 해당하는 객체의 주소를 넘기고 있는 것
*/