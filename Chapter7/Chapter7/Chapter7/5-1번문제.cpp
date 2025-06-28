#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Color {
	int red;
	int green;
	int blue;
public:
	Color() :Color(0, 0, 0) {}
	Color(int r, int g, int b) {
		this->red = r; this->green = g; this->blue = b;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	Color operator +(Color c) {
		Color tmp;
		tmp.red = this->red + c.red;
		tmp.green = this->green + c.green;
		tmp.blue = this->blue + c.blue;
		return tmp;
	}
	bool operator ==(Color c) {
		if (this->red == c.red && this->green == c.green && this->blue == c.blue) return true;
		else return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
	return 0;
}