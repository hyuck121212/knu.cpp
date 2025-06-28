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
	cout << "높이는 " << t1.getHeight() << "미터" << endl;
	cout << "높이는 " << t2.getHeight() << "미터" << endl;
	return 0;
}