#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
	int seed = 0;
public:
	int generate();
	int generateInRange(int start, int end);
};

int Random::generate() {
	int n = rand();
	return n;
}

int Random::generateInRange(int start, int end) {
	int n = rand() % (end - start + 1) + start;
	return n;
}

int main() {
	srand((unsigned int)time(0));  // 난수 시드 초기화 (main에서 한 번만)
	Random rng;

	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = rng.generate();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서 4까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = rng.generateInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;
	return 0;
}