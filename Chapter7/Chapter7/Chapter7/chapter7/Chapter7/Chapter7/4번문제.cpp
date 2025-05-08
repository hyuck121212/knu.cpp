#include <iostream>
#include <string>
using namespace std;

class Book;
bool operator<(const string& str, const Book& b);

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

	friend bool operator<(const string& str, const Book& b);
};

bool operator<(const string& str, const Book& b) {
	return str < b.title;
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
	return 0;
}
