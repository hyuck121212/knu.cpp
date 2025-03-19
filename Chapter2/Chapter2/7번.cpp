#include <iostream>
using namespace std;
#include <string>

int main() {
	string stop;

	while (stop != "yes") {
		cout << "종료하고 싶으면 yes를 입력 : ";
		getline(cin, stop);
	}
	cout << "종료";
	
	return 0;
}
