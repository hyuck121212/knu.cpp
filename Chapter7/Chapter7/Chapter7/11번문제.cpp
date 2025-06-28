#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Stack {
	int data[100];
	int idx;
public:
	Stack() { idx = -1; }
	bool operator!() {
		return idx == -1;
	}
	Stack& operator<<(int value) {
		data[++idx] = value;
		return *this;
	}
	Stack& operator>>(int& value) {
		value = data[idx--];
		return *this;
	}
};

int main() {
	Stack st;
	st << 3 << 5 << 10;

	while (true) {
		if (!st) break;
		int num;
		st >> num;
		cout << num << ' ';
	}
	cout << endl;

	return 0;
}