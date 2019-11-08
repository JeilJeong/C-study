//�������� 2��
/*#include<iostream>

using namespace std;

class GameWindow {
public:
	GameWindow();
	GameWindow(const int, const int);

	int GetWidth() const;
	int GetHeight() const;

	void ResizeWindow(const int, const int);

private:
	int width;
	int height;
};

GameWindow::GameWindow() : width(0), height(0){}
GameWindow::GameWindow(const int w, const int h) {
	ResizeWindow(w, h);
}

int GameWindow::GetWidth() const { return width; }
int GameWindow::GetHeight() const { return height; }

void GameWindow::ResizeWindow(const int w, const int h) {
	if (w < 800)
		width = 800;
	else
		width = w;
	if (h < 600)
		height = 600;
	else
		height = h;
}

int main() { 
	GameWindow mainWindow;
	mainWindow.ResizeWindow(500, 768);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;
}
*/

//�������� 3��
/*#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() : num(cnt++), ch('\0') {}

	void Check(MyClass *ptr) {
		if (ptr + num == this) {
			cout << num << endl;
		}
	}
	static int cnt;

private:
	int num;
	char ch;
};

int MyClass::cnt = 0;

int main() {
	MyClass obj[5];

	cout << "Test #1 : " << endl;
	for (int i = 0; i < 5; i++) {
		obj[i].Check(obj);
	}

	cout << "Test #2 : " << endl;
	for (MyClass &i : obj) {
		i.Check(obj);
	}

	cout << "cnt = " << MyClass::cnt << endl;
}
*/

// ���� �Ҵ� : �Ҵ� �ñ⸦ ������ �� ����(���α׷� ���� ����, �Լ� ���� ���� ��� �Բ� ���� �� �Ҹ�)
// ���� �Ҵ� : ���α׷� ���� �߿� ������ �޸𸮿� �Ҵ�(�Ҵ� �ñ� ���� ����)
/*
#include<iostream>

using namespace std;

class Vector2 {
public:
	Vector2() : x(0), y(0) {
		cout << this << " : Vector2()" << endl;
	}
	Vector2(const float x, const float y) : x(x), y(y) {
		cout << this << " : Vector2(const float x, const float y)" << endl;
	}

	~Vector2() {
		cout << this << " : ~Vector()" << endl;
	}

	float GetX() const { return x; }
	float GetY() const { return y; }

private:
	float x;
	float y;
};

int main() {
	//new�� int(5)�� ������ �޸� ���� ������ �ּҸ� ��ȯ
	/*int *a = new int(5);

	cout << "a : " << *a << endl;

	//delete�� �޸� �Ҵ� ����
	delete a;
	*/

	//�迭 ���� �Ҵ�
	/*int *arr;
	int len;

	cout << "�����Ҵ� �迭 ���� �Է� : ";
	cin >> len;

	arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}
	cout << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
	
	delete[] arr;
	

	//��ü ���� �Ҵ�
	Vector2 s1 = Vector2();
	Vector2 s2 = Vector2(3, 2);

	Vector2 *d1 = new Vector2();
	Vector2 *d2 = new Vector2(3, 2);

	cout << "(" << d1->GetX() << ", " << d1->GetY() << ")" << endl;
	cout << "(" << d2->GetX() << ", " << d2->GetY() << ")" << endl;

	delete d1;
	delete d2;
}
*/