#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom() { srand((unsigned int)time(0)); }
	int next();
	int nextInRange(int a, int b);
};

int EvenRandom::next() {
	int n = rand();
	if (n % 2 != 0) n--;
	return n;
}

int EvenRandom::nextInRange(int a, int b) {
	int n = rand() % (b - a + 1) + a;
	if (n % 2 != 0) n--;
	if (n < a) n += 2;
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--\n";
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}                                     
	cout << "\n" << "--2에서 10까지의 랜덤 정수 10개--" << "\n";
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << "\n";
	return 0;
}