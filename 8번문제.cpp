#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
    int n;

    Integer(int n) {
        this->n = n;
    }

    Integer(string x) {
        n = stoi(x);
    }

    void set(int value) {
        n = value;
    }

    int get() {
        return n;
    }

    bool isEven() {
        return n % 2 == 0;
    }
};

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
    return 0;
}