#include <iostream>
using namespace std;

int main() {
    int a, b;
    char x;

    while (true) {
        cout << "? ";
        cin >> a >> x >> b;

        int sum = 0;

        if (x == '+') sum = a + b;
        else if (x == '-') sum = a - b;
        else if (x == '*') sum = a * b;
        else if (x == '/') sum = a / b;
        else if (x == '%') sum = a % b;
        else continue;

        cout << a << " " << x << " " << b << " = " << sum << "\n";
    }
}
