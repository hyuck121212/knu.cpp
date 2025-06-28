#include <iostream>
#include <string>

using namespace std;

class Account {
public:
	string owner;
	int accountId;
	int amount;
	Account(string owner, int accountId, int amount);
	void add(int money);
	int remove(int money);
	int getBalance();
	string getName();
};

Account::Account(string owner, int accountId, int amount) {
	this->owner = owner;
	this->accountId = accountId;
	this->amount = amount;
}

void Account::add(int money) {
	amount += money;
}

int Account::remove(int money) {
	amount -= money;
	return amount;
}

int Account::getBalance() {
	return amount;
}

string Account::getName() {
	return owner;
}

int main() {
	Account acc("kitae", 1, 5000);
	acc.add(50000);
	cout << acc.getName() << "ÀÇ ÀÜ¾×Àº " << acc.getBalance() << endl;

	int remaining = acc.remove(20000);
	cout << acc.getName() << "ÀÇ ÀÜ¾×Àº " << acc.getBalance() << endl;

	return 0;
}