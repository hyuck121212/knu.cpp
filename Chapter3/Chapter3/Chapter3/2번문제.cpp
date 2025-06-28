#include <iostream>
#include <string>

using namespace std;

class Date {
public:
	int y, m, d;
	Date(int y, int m, int d);
	Date(string str);
	void print();
	int getY();
	int getM();
	int getD();
};

Date::Date(int y, int m, int d) {
	this->y = y;
	this->m = m;
	this->d = d;
}

Date::Date(string str) {
	int pos;

	y = stoi(str);

	pos = str.find('/');
	m = stoi(str.substr(pos + 1));

	pos = str.find('/', pos + 1);
	d = stoi(str.substr(pos + 1));
}

void Date::print() {
	cout << y << "³â" << m << "¿ù" << d << "ÀÏ" << endl;
}

int Date::getY() {
	return y;
}

int Date::getM() {
	return m;
}

int Date::getD() {
	return d;
}

int main() {
	Date d1(2014, 3, 20);
	Date d2("1945/8/15");
	d2.print();
	cout << d1.getY() << ',' << d1.getM() << ',' << d1.getD() << endl;
	return 0;
}