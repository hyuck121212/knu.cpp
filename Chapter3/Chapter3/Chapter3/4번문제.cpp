#include <iostream>
#include <string>

using namespace std;

class CoffeeMachine {
private:
	int beans;
	int water;
	int sugar;
public:
	CoffeeMachine(int beans, int water, int sugar);
	void makeEspresso();
	void makeAmericano();
	void makeSweetCoffee();
	void display();
	void refill();
};

CoffeeMachine::CoffeeMachine(int beans, int water, int sugar) {
	this->beans = beans;
	this->water = water;
	this->sugar = sugar;
}

void CoffeeMachine::makeEspresso() {
	beans -= 1;
	water -= 1;
}

void CoffeeMachine::makeAmericano() {
	beans -= 1;
	water -= 2;
}

void CoffeeMachine::makeSweetCoffee() {
	beans -= 1;
	water -= 2;
	sugar -= 1;
}

void CoffeeMachine::display() {
	cout << "머신 상태 - 원두: " << beans << "\t물: " << water << "\t설탕: " << sugar << endl;
}

void CoffeeMachine::refill() {
	beans = 10;
	water = 10;
	sugar = 10;
}

int main() {
	CoffeeMachine cm(5, 10, 3);
	cm.makeEspresso();
	cm.display();
	cm.makeAmericano();
	cm.display();
	cm.makeSweetCoffee();
	cm.display();
	cm.refill();
	cm.display();
	return 0;
}