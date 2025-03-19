#include <iostream>
using namespace std;

int main() {
	int k, n, sum = 0;

	cout << "끝 수 입력 : ";
	cin >> n;

	for (k = 1; k <= n; k++) {
		sum += k;
	}

	cout << "1부터 " << n << "까지의 합은 " << sum << "입니다.";
	return 0;
}