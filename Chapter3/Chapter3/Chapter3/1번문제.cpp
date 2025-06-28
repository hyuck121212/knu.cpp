#include <iostream>

using namespace std;

class Tower {
public:
	int h;
	Tower();
	Tower(int h);
	int getHeight();
};

Tower::Tower() {
	h = 1;
}

Tower::Tower(int h) {
	this->h = h;
}

int Tower::getHeight() {
	return h;
}

int main() {
	Tower t1;
	Tower t2(100);
	cout << "���̴� " << t1.getHeight() << "����" << endl;
	cout << "���̴� " << t2.getHeight() << "����" << endl;
	return 0;
}