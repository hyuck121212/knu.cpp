#include <iostream>
#include <string>

using namespace std;

class Oval {
private:
	int w;
	int h;
public:
	Oval() {
		w = h = 1;
	}
	Oval(int w, int h) {
		this->w = w;
		this->h = h;
	}
	~Oval() {
		cout << "Oval ¼Ò¸ê : width = " << w << ", height = " << h << endl;
	}
	void display() {
		cout << "width = " << w << ", height = " << h << endl;
	}
	void resize(int w, int h) {
		this->w = w;
		this->h = h;
	}
	int getWidth() {
		return w;
	}
	int getHeight() {
		return h;
	}
};

int main() {
	Oval oval1, oval2(3, 4);
	oval1.resize(10, 20);
	oval1.display();
	cout << oval2.getWidth() << "," << oval2.getHeight() << endl;

	return 0;
}