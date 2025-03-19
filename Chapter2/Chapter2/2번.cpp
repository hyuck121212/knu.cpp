#include <iostream>
using namespace std;

int main() {
	int i, j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			cout << j << 'X' << i << '=' << i * j << '\t';
		}
		cout << '\n';
	}
	return 0;
}
