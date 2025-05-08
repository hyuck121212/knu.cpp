#include <iostream>
#include <string>
using namespace std;

class Color {
	int red;
	int green;
	int blue;
public:
	Color() : Color(0, 0, 0) {}

	Color(int r, int g, int b) : red(r), green(g), blue(b) {}

	void show() const {
		cout << red << ' ' << green << ' ' << blue << endl;
	}

	Color operator+(const Color& c) const {
		return Color(red + c.red, green + c.green, blue + c.blue);
	}

	bool operator==(const Color& c) const {
		return red == c.red && green == c.green && blue == c.blue;
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