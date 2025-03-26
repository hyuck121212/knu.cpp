#include <iostream>
#include <string>
using namespace std;

class Oval {
private:
    int width;
    int height;
public:
    Oval() {
        width = height = 1;
    }

    Oval(int w, int h) {
        width = w;
        height = h;
    }

    ~Oval() {
        cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << "\n";
    }

    void show() {
        cout << "width = " << width << ", height = " << height << "\n";
    }

    void set(int w, int h) {
        width = w;
        height = h;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }
};

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << "\n";

    return 0;
}