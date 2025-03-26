#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    int year;
    int month;
    int day;
    Date(int y, int m, int d);
    Date(string date);
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string date) {
    int a;

    year = stoi(date);

    a = date.find('/');
    month = stoi(date.substr(a + 1));

    a = date.find('/', a + 1);
    day = stoi(date.substr(a + 1));
}

void Date::show() {
    cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << "\n";
}

int Date::getYear() {
    return year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << "\n";

    return 0;
}