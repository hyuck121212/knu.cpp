#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Circle;
Circle operator+(int value, Circle c);

class Circle {
	int r;
public:
	Circle(int r = 0) { this->r = r; }
	void print() { cout << "radius = " << r << " ÀÎ ¿ø" << endl; }
	friend Circle operator+(int value, Circle c);
};

Circle operator+(int value, Circle c) {
	Circle result;
	result.r = value + c.r;
	return result;
}

int main() {
	Circle c1(5), c2(4);
	c2 = 1 + c1;
	c1.print();
	c2.print();
	return 0;
}