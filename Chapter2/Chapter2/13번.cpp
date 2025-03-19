#include <iostream>
using namespace std;
#include <string>

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	int n = 0;
	while (n != 4) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 =";
		cin >> n;

		switch (n)
		{
			int num;
		case 1:
			cout << "몇인분?";
			cin >> num;
			cout << "짬뽕 " << num << "인분 나왔습니다.\n";
			break;
		case 2:
			cout << "몇인분?";
			cin >> num;
			cout << "짜장 " << num << "인분 나왔습니다.\n";
			break;
		case 3:
			cout << "몇인분?";
			cin >> num;
			cout << "군만두 " << num << "인분 나왔습니다.\n";
			break;
		case 4:
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		default:
			cout << "다시 주문하세요!!.\n";
			break;
		}
	}
	return 0;
}
