/*#include<iostream>

using namespace std;

int n;

struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void setPowerOn(bool pow) {
		if (pow == true) {
			powerOn = pow;
			cout << "TV�� �׽��ϴ�" << endl;
		}
		else if(pow == false) {
			powerOn = pow;
			cout << "TV�� �����ϴ�" << endl;
		}
	}

	void setChannel(int ch) {
		if (ch >= 0 && ch <= 500) {
			channel = ch;
			cout << channel << "�� ä���Դϴ�." << endl;
		}
	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "volume(" << volume << ") : ";
			for (int i = 0; i < volume; i+=10) {
				cout << '+';
			}
			cout << endl;
		}
	}
};

int main() {
	TV lg;
	lg.setPowerOn(true);
	lg.setChannel(10);
	lg.setVolume(50);
}
*/