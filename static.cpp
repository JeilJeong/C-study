/*#include<iostream>

using namespace std;

int idCnt = 1;

class Color {
public:
	Color() : r(0), g(0), b(0), id(idCnt++) {	}
	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCnt++) {	}
	
	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int getId() { return id; }
	
	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.b + b.b) / 2, (a.g + b.g) / 2);
	}

	static int idCnt;

private:
	float r;
	float g;
	float b;

	int id;
};

int Color::idCnt = 1;

//static을 사용하는 이유는 class와 밀접한 관련이 있는 함수이면서
//특정한 object에 소속되지 않고, class 안으로 이동함으로써 private value에 접근 가능하며
//마지막으로 Color::(namespace)를 사용하여 활용 가능하기 때문이다.
//기본적으로 instance 호출 시 생성자(for initailization)와 소멸자(for free)가 등장
//만약 instance가 globally 호출 시 main 보다 먼저 생성되고, main 종료 이후 소멸
//특정 함수 내에서 호출 시에는 함수 호출 이후에 생성되고, 함수 호출 이후에 소멸

int main() {
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color puple = Color::MixColors(blue, red);

	cout << "r = " << puple.GetR() << " g = " << puple.GetG() << " b = " << puple.GetB() << endl;
	cout << "blue.GetId() = " << blue.getId() << endl;
	cout << "red.GetId() = " << red.getId() << endl;
	cout << "puple.GetId() = " << puple.getId() << endl;
}
*/