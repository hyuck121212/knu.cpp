#include <iostream>
#include <string>
using namespace std;

class Color;
Color operator+(const Color& c1, const Color& c2);
bool operator==(const Color& c1, const Color& c2);

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

	friend Color operator+(const Color& c1, const Color& c2);
	friend bool operator==(const Color& c1, const Color& c2);
};

Color operator+(const Color& c1, const Color& c2) {
	return Color(c1.red + c2.red, c1.green + c2.green, c1.blue + c2.blue);
}

bool operator==(const Color& c1, const Color& c2) {
	return c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue;
}

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