#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int num;
    while (true) {
        cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
        cin >> num;
        if (num != 0) {
            v.push_back(num);
            double sum = 0;
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
                sum += v[i];
            }
            cout << "\n" << "��� = " << sum / v.size() << endl;
        }
        else break;
    }
}