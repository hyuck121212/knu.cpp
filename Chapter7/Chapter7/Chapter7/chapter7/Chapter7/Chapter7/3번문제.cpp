#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0)
		: title(title), price(price), pages(pages) {
	}

	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle() { return title; }

	bool operator!() const {
		return price == 0;
	}
};

int main() {
	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl;
	return 0;
}