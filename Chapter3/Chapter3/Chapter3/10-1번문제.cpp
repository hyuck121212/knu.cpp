#include <iostream>
#include <string>

using namespace std;

class Add {
	int lhs, rhs;
public:
	void set(int x, int y) {
		lhs = x;
		rhs = y;
	}
	int compute() {
		return lhs + rhs;
	}
};

class Sub {
	int lhs, rhs;
public:
	void set(int x, int y) {
		lhs = x;
		rhs = y;
	}
	int compute() {
		return lhs - rhs;
	}
};

class Mul {
	int lhs, rhs;
public:
	void set(int x, int y) {
		lhs = x;
		rhs = y;
	}
	int compute() {
		return lhs * rhs;
	}
};

class Div {
	int lhs, rhs;
public:
	void set(int x, int y) {
		lhs = x;
		rhs = y;
	}
	int compute() {
		return rhs != 0 ? lhs / rhs : 0;
	}
};

int main() {
	Add adder;
	Sub subtractor;
	Mul multiplier;
	Div divider;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>> ";
		int x, y;
		char op;
		cin >> x >> y >> op;

		switch (op) {
		case '+':
			adder.set(x, y);
			cout << adder.compute() << endl;
			break;
		case '-':
			subtractor.set(x, y);
			cout << subtractor.compute() << endl;
			break;
		case '*':
			multiplier.set(x, y);
			cout << multiplier.compute() << endl;
			break;
		case '/':
			divider.set(x, y);
			cout << divider.compute() << endl;
			break;
		default:
			cout << "지원되지 않는 연산자입니다." << endl;
			break;
		}
	}

	return 0;
}