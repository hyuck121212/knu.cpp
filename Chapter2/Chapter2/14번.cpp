#include <iostream>
using namespace std;
#include <string>
#include <cstring>

int main() {
    char coffee[100];
    int num = 0;
    int money = 0;
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
    while (true)
    {
        cout << "주문 : ";
        cin >> coffee >> num;

        if (strcmp(coffee, "에스프레소") == 0)
        {
            money += 2000 * num;
            cout << 2000 * num << "원입니다. 맛있게 드세요\n";
        }
        else if (strcmp(coffee, "아메리카노") == 0)
        {
            money += 2300 * num;
            cout << 2300 * num << "원입니다. 맛있게 드세요\n";
        }
        else if (strcmp(coffee, "카푸치노") == 0)
        {
            money += 2500 * num;
            cout << 2500 * num << "원입니다. 맛있게 드세요\n";
        }
        else {
            cout << "해당 메뉴는 없습니다. 다시 입력해주세요.\n";
            continue;
        }
        if (money >= 20000)
        {
            cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~\n";
            break;
        }
    }
    return 0;
}