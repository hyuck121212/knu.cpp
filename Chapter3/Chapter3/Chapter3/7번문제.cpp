#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class SelectableRandom {
public:
	int getEven();
	int getOdd();
	int getEvenInRange(int start, int end);
	int getOddInRange(int start, int end);
};

int SelectableRandom::getEven() {
	int num;
	do {
		num = rand();
	} while (num % 2 != 0);
	return num;
}

int SelectableRandom::getOdd() {
	int num;
	do {
		num = rand();
	} while (num % 2 == 0);
	return num;
}

int SelectableRandom::getEvenInRange(int start, int end) {
	int num;
	do {
		num = rand() % (end - start + 1) + start;
	} while (num % 2 != 0);
	return num;
}

int SelectableRandom::getOddInRange(int start, int end) {
	int num;
	do {
		num = rand() % (end - start + 1) + start;
	} while (num % 2 == 0);
	return num;
}

int main() {
	srand((unsigned int)time(0)); // 시드 초기화

	SelectableRandom rng;

	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		cout << rng.getEven() << ' ';
	}

	cout << endl << endl << "-- 2에서 9까지의 홀수 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		cout << rng.getOddInRange(2, 9) << ' ';
	}

	cout << endl;
	return 0;
}