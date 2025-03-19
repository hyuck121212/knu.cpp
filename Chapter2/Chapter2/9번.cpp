#include <iostream>
using namespace std;
#include <string>

int main() {
	string name, address;
	int age;
	cout << "이름 : ";
	getline(cin, name);
	cout << "주소 : ";
	getline(cin, address);
	cout << "나이 : ";
	cin >> age;
	cout << name << ", " << address << ", " << age << "세" << '\n';
	
	return 0;
}
