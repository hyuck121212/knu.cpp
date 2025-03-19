#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
	int n = 0;
	cout << "끝 수 입력 : ";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.\n";
	return 0;
}

int sum(int a, int b) {
	int k, j = 0;
	for (k = a; k <= b; k++) {
		j += k;
	}
	return j;
}
