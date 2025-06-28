#include <iostream>
#include <string>
#include <cstring>

using namespace std;

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
		for (int i = 0; i < 4; i++)
			cout << data[i] << ' ';
		cout << "}" << endl;
	}
	void operator >>(int out[4]) {
		for (int i = 0; i < 4; i++)
			out[i] = data[i];
	}
	Matrix& operator <<(int in[4]) {
		for (int i = 0; i < 4; i++)
			data[i] = in[i];
		return *this;
	}
};

int main() {
	Matrix mat1(4, 3, 2, 1), mat2;
	int arr1[4], arr2[4] = { 1, 2, 3, 4 };

	mat1 >> arr1;
	mat2 << arr2;

	for (int i = 0; i < 4; i++) cout << arr1[i] << ' ';
	cout << endl;

	mat2.print();

	return 0;
}