#include <iostream>
#include <string>
using namespace std;

template <class T>
void reverseArray(T x[], int y) {
	for (int i = 0; i < y / 2; ++i) {
		T tmp = x[i];
		x[i] = x[y - i - 1];
		x[y - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; ++i)
		cout << x[i] << ' ';
}
