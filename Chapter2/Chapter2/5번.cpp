#include <iostream>
using namespace std;
#include <string>

int main() {
	char a[101];
	int x = 0;
	cout << "문자 입력(100개 미만)\n";
	cin.getline(a, 101, '\n');

	for (int i = 0; i < 100; i++)
	{
		if (a[i] == 'x')
		{
			x++;
		}
	}
	cout << "x의 개수 : " << x;
	return 0;
}
