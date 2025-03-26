#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
private:
    bool even;
public:
    SelectableRandom(bool even) : even(even) { srand((unsigned int)time(0));}
    int next();
    int nextInRange(int a, int b);
};

int SelectableRandom::next() {
    int n = rand();
    if ((n % 2 == 0) != even) n++; 
    return n;
}

int SelectableRandom::nextInRange(int a, int b) {
    int n = rand() % (b - a + 1) + a;
    if ((n % 2 == 0) != even) n++;
    if (n > b) n -= 2;
    return n;
}

int main() {
    SelectableRandom evenRandom(true);
    SelectableRandom oddRandom(false);

    cout << "-- Â¦¼ö ·£´ý Á¤¼ö 10°³ --" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << evenRandom.next() << " ";
    }
    cout << "\n";

    cout << "-- È¦¼ö ·£´ý Á¤¼ö 10°³ --" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << oddRandom.next() << " ";
    }
    cout << "\n";

    cout << "-- 2¿¡¼­ 10±îÁöÀÇ Â¦¼ö ·£´ý Á¤¼ö 10°³ --" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << evenRandom.nextInRange(2, 10) << " ";
    }
    cout << "\n";

    cout << "-- 1¿¡¼­ 9±îÁöÀÇ È¦¼ö ·£´ý Á¤¼ö 10°³ --" << "\n";
    for (int i = 0; i < 10; i++) {
        cout << oddRandom.nextInRange(1, 9) << " ";
    }
    cout << "\n";

    return 0;
}
