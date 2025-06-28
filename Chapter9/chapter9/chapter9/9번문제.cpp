#include <iostream>
using namespace std;

class Printer {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
protected:
	Printer(string mo = "", string me = "", int a = 0) {
		model = mo;
		manufacturer = me;
		availableCount = a;
		printedCount = 0;
	}
	bool isValidPrint(int pages) {
		return availableCount >= pages;
	}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void setPrintedCount(int v) { printedCount = v; }
	void setAvailableCount(int v) { availableCount = v; }
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string mo = "", string me = "", int a = 0, int i = 0) : Printer(mo, me, a) {
		availableInk = i;
	}
	bool isValidInkJetPrint(int pages) {
		return availableInk >= pages;
	}
	void print(int pages) {
		if (!isValidPrint(pages)) {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return;
		}
		if (!isValidInkJetPrint(pages)) {
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
			return;
		}
		setPrintedCount(getPrintedCount() + pages);
		setAvailableCount(getAvailableCount() - pages);
		availableInk -= pages;
		cout << "프린트하였습니다" << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << availableInk << endl;
	}
};

class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string mo = "", string me = "", int a = 0, int t = 0) : Printer(mo, me, a) {
		availableToner = t;
	}
	bool isValidLaserPrint(int pages) {
		return availableToner >= pages;
	}
	void print(int pages) {
		if (!isValidPrint(pages)) {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return;
		}
		if (!isValidLaserPrint(pages)) {
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
			return;
		}
		setPrintedCount(getPrintedCount() + pages);
		setAvailableCount(getAvailableCount() - pages);
		availableToner -= pages;
		cout << "프린트하였습니다" << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	ink->show();
	cout << "레이저 : ";
	laser->show();

	int printer, paper;
	char ch;
	while (true) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> printer >> paper;
		if (printer == 1) ink->print(paper);
		else if (printer == 2) laser->print(paper);

		ink->show();
		laser->show();

		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> ch;
		if (ch == 'n') break;
	}

	delete ink;
	delete laser;
	return 0;
}