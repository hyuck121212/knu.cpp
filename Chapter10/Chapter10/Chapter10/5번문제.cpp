#include <iostream>
using namespace std;

template<class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* p = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++)
		p[i] = a[i];
	for (int i = 0; i < sizeb; i++)
		p[i + sizea] = b[i];
	return p;
}

int main() {
	cout << "두 개의 정수 배열을 합쳐줌" << endl;

	int x[] = { 1,2,3,4 };
	int y[] = { 5,6,7 };
	int* p = concat(x, 4, y, 3);
	for (int i = 0; i < 7; i++)
		cout << p[i] << ' ';
	cout << endl;
	delete[] p;

	cout << "두 개의 문자 배열을 합쳐줌" << endl;

	char a[] = {'K', 'N', 'U'};
	char b[] = { 'A', 'I'};
	char* q = concat(a, 3, b, 2);
	for (int i = 0; i < 5; i++)
		cout << q[i] << ' ';
	cout << endl;
	delete[] q;
}
