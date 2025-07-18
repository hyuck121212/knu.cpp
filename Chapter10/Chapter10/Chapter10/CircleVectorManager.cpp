#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Circle.h"
#include "UI.h"
#include "CircleVectorManager.h"

CircleVectorManager::CircleVectorManager() {}
CircleVectorManager::~CircleVectorManager() {}

void CircleVectorManager::edit() {
	int radius;
	string name;
	UI::getCircle(radius, name);
	v.push_back(new Circle(radius, name));
}

void CircleVectorManager::remove() {
	string name;
	name = UI::getCircleName();

	vector<Circle*>::iterator it = v.begin();
	while (it != v.end()) {
		Circle* p = *it;
		if (p->getName() == name) {
			it = v.erase(it);
			delete p;
		}
		else {
			it++;
		}
	}
}

void CircleVectorManager::paint() {
	vector<Circle*>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		Circle* p = *it;
		UI::println(p->getName());
	}
	UI::println();
}

void CircleVectorManager::run() {
	UI::println("원을 삽입하고 삭제하는 프로그램입니다.");
	while (true) {
		int menu = UI::getMainMenu();
		switch (menu) {
		case EDIT:
			edit(); break;
		case REMOVE:
			remove(); break;
		case PAINT:
			paint(); break;
		case EXIT:
			return;
		default:
			UI::println("다시 입력해주세요");
		}
	}
}