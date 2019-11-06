/*#include<iostream>

using namespace std;

class Time {
public:
	Time() : h(0), m(0), s(0) {}
	Time(int s_) : Time() { s = s_; }
	Time(int m_, int s_) : Time(s_) { m = m_; }
	Time(int h_, int m_, int s_) : Time(m_, s_) { h = h_; }

	int h;
	int m;
	int s;
};

int main() {
	Time t1;
	Time t2(10);
	Time t3(50, 21);
	Time t4(1, 54, 31);

	cout << "Time t1: " << t1.h << "시 " << t1.m << "분 " << t1.s << "초" << endl;
	cout << "Time t2: " << t2.h << "시 " << t2.m << "분 " << t2.s << "초" << endl;
	cout << "Time t3: " << t3.h << "시 " << t3.m << "분 " << t3.s << "초" << endl;
	cout << "Time t4: " << t4.h << "시 " << t4.m << "분 " << t4.s << "초" << endl;

}
*/