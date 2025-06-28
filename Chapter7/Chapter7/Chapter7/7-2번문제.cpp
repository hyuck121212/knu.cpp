#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Matrix;
void operator>>(Matrix src, int dest[4]);
Matrix& operator<<(Matrix& target, int source[4]);

class Matrix {
	int data[4];
public:
	Matrix() : Matrix(0, 0, 0, 0) {}
	Matrix(int a, int b, int c, int d) {
		data[0] = a;
		data[1] = b;
		data[2] = c;
		data[3] = d;
	}
	void print() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; ++i)
			cout << data[i] << ' ';
		cout << "}" << endl;
	}
	friend void operator>>(Matrix src, int dest[4]);
	friend Matrix& operator<<(Matrix& target, int source[4]);
};

void operator>>(Matrix src, int dest[4]) {
	for (int i = 0; i < 4; ++i)
		dest[i] = src.data[i];
}

Matrix& operator<<(Matrix& target, int source[4]) {
	for (int i = 0; i < 4; ++i)
		target.data[i] = source[i];
	return target;
}

int main() {
	Matrix m1(4, 3, 2, 1), m2;
	int arr1[4], arr2[4] = { 1, 2, 3, 4 };

	m1 >> arr1;
	m2 << arr2;

	for (int i = 0; i < 4; ++i) cout << arr1[i] << ' ';
	cout << endl;

	m2.print();

	return 0;
}