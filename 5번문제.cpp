#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	int x = 0;
public:
	int next();
	int nextInRange(int a, int b);
};

int Random::next() {
	int n = rand();
	return n;
}
int Random::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	return n;
}

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << "\n";
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << "\n" << "--2에서 4까지의 랜덤 정수 10개--" << "\n";
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << "\n";
	return 0;
}

