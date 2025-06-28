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
	srand((unsigned int)time(0));  // ���� �õ� �ʱ�ȭ (main���� �� ����)
	Random rng;

	cout << "-- 0���� " << RAND_MAX << "������ ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = rng.generate();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� 4������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = rng.generateInRange(2, 4);
		cout << n << ' ';
	}

	cout << endl;
	return 0;
}