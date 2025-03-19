#include <iostream>
using namespace std;
#include <string>

int main() {
	char name[100];
	int best = 0;
	string longname;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요\n";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << (i + 1) << " : ";
		cout << name << "\n";

		if (strlen(name) > best) {
			longname = name;
			best = strlen(name);
		}
	}
	cout << "가장 긴 이름 : " << longname;
	
	return 0;
}

