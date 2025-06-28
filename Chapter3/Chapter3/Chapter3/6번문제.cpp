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
	srand((unsigned int)time(0)); // �õ� �ʱ�ȭ

	Random rng;

	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		cout << rng.getEven() << ' ';
	}

	cout << endl << endl << "-- 2���� 10������ ¦�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		cout << rng.getEvenInRange(2, 10) << ' ';
	}

	cout << endl;
	return 0;
}