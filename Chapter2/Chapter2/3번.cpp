#include <iostream>
using namespace std;

int main() {
	int a, b = 0;

	cout << "두 수 입력 : ";
	cin >> a >> b;

	cout << "큰 수 : ";
	if (a > b)
	{
		cout << a;
	}
	else
	{
		cout << b;
	}
	return 0;
}
