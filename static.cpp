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

//static�� ����ϴ� ������ class�� ������ ������ �ִ� �Լ��̸鼭
//Ư���� object�� �Ҽӵ��� �ʰ�, class ������ �̵������ν� private value�� ���� �����ϸ�
//���������� Color::(namespace)�� ����Ͽ� Ȱ�� �����ϱ� �����̴�.
//�⺻������ instance ȣ�� �� ������(for initailization)�� �Ҹ���(for free)�� ����
//���� instance�� globally ȣ�� �� main ���� ���� �����ǰ�, main ���� ���� �Ҹ�
//Ư�� �Լ� ������ ȣ�� �ÿ��� �Լ� ȣ�� ���Ŀ� �����ǰ�, �Լ� ȣ�� ���Ŀ� �Ҹ�

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