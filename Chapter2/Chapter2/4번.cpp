#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e = 0;
	float max = 0;

	cout << "5개의 실수 입력 : ";
	cin >> a >> b >> c >> d >> e;

	if (max < a)
	{
		max = a;
	}
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}
	cout << "제일 큰 수 : " << max;
	return 0;
}
