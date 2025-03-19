#include <iostream>
using namespace std;
#include <string>

int main() {
	string x;
	int i = 0;
	cout << "문자열 입력 : ";
	cin >> x;

	for (i = 1; i < x.length() + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << x[j];
		}
		cout << "\n";
	}
	return 0;
}
