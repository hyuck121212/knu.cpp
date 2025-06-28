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
		cout << name << ' ' << cost << "원 " << length << " 페이지" << endl;
	}
	string getName() { return name; }
	bool operator!() {
		return cost == 0;
	}
};

int main() {
	Book book("벼룩시장", 0, 50);
	if (!book) cout << "공짜다" << endl;
	return 0;
}