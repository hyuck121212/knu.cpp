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
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return;
		}
		if (!isValidInkJetPrint(pages)) {
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return;
		}
		setPrintedCount(getPrintedCount() + pages);
		setAvailableCount(getAvailableCount() - pages);
		availableInk -= pages;
		cout << "����Ʈ�Ͽ����ϴ�" << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << availableInk << endl;
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
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return;
		}
		if (!isValidLaserPrint(pages)) {
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			return;
		}
		setPrintedCount(getPrintedCount() + pages);
		setAvailableCount(getAvailableCount() - pages);
		availableToner -= pages;
		cout << "����Ʈ�Ͽ����ϴ�" << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ink->show();
	cout << "������ : ";
	laser->show();

	int printer, paper;
	char ch;
	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> paper;
		if (printer == 1) ink->print(paper);
		else if (printer == 2) laser->print(paper);

		ink->show();
		laser->show();

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> ch;
		if (ch == 'n') break;
	}

	delete ink;
	delete laser;
	return 0;
}