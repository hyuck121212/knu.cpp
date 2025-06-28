#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Book {
	string name;
	int cost, length;
public:
	Book(string name = "", int cost = 0, int length = 0) {
		this->name = name;
		this->cost = cost;
		this->length = length;
	}
	void display() {
		cout << name << ' ' << cost << "�� " << length << " ������" << endl;
	}
	string getName() { return name; }
	bool operator!() {
		return cost == 0;
	}
};

int main() {
	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl;
	return 0;
}