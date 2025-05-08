#include <iostream>
#include <string>
using namespace std;

class Book;
bool operator==(const Book& a, int price);
bool operator==(const Book& a, const string& title);
bool operator==(const Book& a, const Book& b);

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0)
		: title(title), price(price), pages(pages) {
	}

	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	string getTitle() { return title; }

	friend bool operator==(const Book& a, int price);
	friend bool operator==(const Book& a, const string& title);
	friend bool operator==(const Book& a, const Book& b);
};

bool operator==(const Book& a, int price) {
	return a.price == price;
}

bool operator==(const Book& a, const string& title) {
	return a.title == title;
}

bool operator==(const Book& a, const Book& b) {
	return a.title == b.title && a.price == b.price && a.pages == b.pages;
}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 c++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;

	return 0;
}