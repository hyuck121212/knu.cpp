#include <iostream>
#include <string>

using namespace std;

class Integer {
public:
	int value;

	Integer(int value) {
		this->value = value;
	}

	Integer(string str) {
		this->value = stoi(str);
	}

	void update(int value) {
		this->value = value;
	}

	int getValue() {
		return value;
	}

	bool isEven() {
		return value % 2 == 0;
	}
};

int main() {
	Integer a(30);
	cout << a.getValue() << ' ';
	a.update(50);
	cout << a.getValue() << ' ';

	Integer b("300");
	cout << b.getValue() << ' ';
	cout << b.isEven();

	return 0;
}