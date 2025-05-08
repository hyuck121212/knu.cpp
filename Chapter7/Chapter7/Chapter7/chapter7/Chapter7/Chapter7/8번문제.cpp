#include <iostream>
#include <string>
using namespace std;

class Circle;
Circle& operator++(Circle& c);
Circle operator++(Circle& c, int);

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }

	friend Circle& operator++(Circle& c);
	friend Circle operator++(Circle& c, int);
};

Circle& operator++(Circle& c) {
	++c.radius;
	return c;
}

Circle operator++(Circle& c, int) {
	Circle temp(c);
	c.radius++;
	return temp;
}

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
	return 0;
}