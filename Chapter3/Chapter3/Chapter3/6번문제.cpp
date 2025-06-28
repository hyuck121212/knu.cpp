#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
	int seed = 0;
public:
	int getEven();
	int getEvenInRange(int start, int end);
};

int Random::getEven() {
	int num;
	do {
		num = rand();
	} while (num % 2 != 0);
	return num;
}

int Random::getEvenInRange(int start, int end) {
	int num;
	do {
		num = rand() % (end - start + 1) + start;
	} while (num % 2 != 0);
	return num;
}

int main() {
	srand((unsigned int)time(0)); // 시드 초기화

	Random rng;

	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		cout << rng.getEven() << ' ';
	}

	cout << endl << endl << "-- 2에서 10까지의 짝수 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		cout << rng.getEvenInRange(2, 10) << ' ';
	}

	cout << endl;
	return 0;
}