#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
public:
	Shape(string name, int width, int height) {
		this->name = name;
		this->width = width;
		this->height = height;
	}
	string getname() {
		return name;
	}
	virtual double getArea() = 0;
};

class Oval : public Shape {
public:
	Oval(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() {
		return 3.14 * width * height;
	}
};

class Rect : public Shape {
public:
	Rect(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() {
		return width * height;
	}
};

class Triangular : public Shape {
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() {
		return width * height / 2.0;
	}
};

int main() {
	Shape* p[3];
	p[0] = new Oval("ºó´ë¶±", 10, 20);
	p[1] = new Rect("Âû¶±", 30, 40);
	p[2] = new Triangular("Åä½ºÆ®", 30, 40);

	for (int i = 0; i < 3; i++) {
		cout << p[i]->getname() << " ³ÐÀÌ´Â " << p[i]->getArea() << endl;
	}

	for (int i = 0; i < 3; i++) delete p[i];
	return 0;
}
