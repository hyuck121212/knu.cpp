#include <iostream>
#include <string>
using namespace std;

class Statistics {
	int* statistic;
	int size;
public:
	Statistics(int size = 0) {
		this->size = size;
		statistic = new int[size];
	}

	~Statistics() {
		delete[] statistic;
	}

	Statistics& operator<<(int x) {
		int* newData = new int[size + 1];
		for (int i = 0; i < size; i++)
			newData[i] = statistic[i];
		newData[size] = x;

		delete[] statistic;
		statistic = newData;
		size++;

		return *this;
	}

	Statistics& operator~() {
		for (int i = 0; i < size; i++)
			cout << statistic[i] << ' ';
		cout << endl;
		return *this;
	}

	Statistics& operator>>(int& avg) {
		int sum = 0;
		for (int i = 0; i < size; i++)
			sum += statistic[i];
		avg = (size > 0) ? (sum / size) : 0;
		return *this;
	}

	bool operator!() {
		return size == 0;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;

	return 0;
}