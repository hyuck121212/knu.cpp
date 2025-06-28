#include <iostream>
using namespace std;

template <class T>
T biggest(T a[], int n) {
	if (n <= 0) return 0;

	T b = a[0];
	for (int i = 1; i < n; i++) {
		if (b < a[i]) {
			b = a[i];
		}
	}
	return b;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 8.6, 5.2, -105.3, 200.5, 96.8, 62.1};
	cout << biggest(y, 6);
}