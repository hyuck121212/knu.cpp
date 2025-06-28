#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Color;
Color operator+(Color a, Color b);
bool operator==(Color a, Color b);

class Color {
	int r, g, b;
public:
	Color() : Color(0, 0, 0) {}
	Color(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}
	void print() {
		cout << r << ' ' << g << ' ' << b << endl;
	}
	friend Color operator+(Color a, Color b);
	friend bool operator==(Color a, Color b);
};

Color operator+(Color a, Color b) {
	Color result;
	result.r = a.r + b.r;
	result.g = a.g + b.g;
	result.b = a.b + b.b;
	return result;
}

bool operator==(Color a, Color b) {
	return (a.r == b.r && a.g == b.g && a.b == b.b);
}

int main() {
	Color c1(255, 0, 0), c2(0, 0, 255), mixed;
	mixed = c1 + c2;
	mixed.print();

	Color purple(255, 0, 255);
	if (mixed == purple)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;

	return 0;
}