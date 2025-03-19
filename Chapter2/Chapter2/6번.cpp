#include <iostream>
using namespace std;
#include <string>

int main() {
	string password, password2;

	cout << "새 암호를 입력 :";
	getline(cin, password);

	cout << "새 암호를 다시 입력 : ";
	getline(cin, password2);

	if (password == password2) cout << "같습니다";
	else cout << "틀렸습니다";
	return 0;
}
