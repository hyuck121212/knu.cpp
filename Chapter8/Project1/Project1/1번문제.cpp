#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r = 0) : radius(r) {}
    int getRadius() { return radius; }
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(int r, string n) : Circle(r), name(n) {}
    void show();
};

void NamedCircle::show() {
    cout << "반지름이 " << getRadius() << "인 " << name << endl;
}

int main() {
    NamedCircle waffle(3, "waffle");
    waffle.show();
}