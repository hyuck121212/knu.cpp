#include <iostream>
using namespace std;

class BaseArray {
    int capacity;
    int* mem;
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity;
        mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
    int size;
    int head;
    int tail;
public:
    MyQueue(int capacity) : BaseArray(capacity) {
        head = 0;
        tail = -1;
        size = 0;
    }

    void enqueue(int n) {
        if (size == getCapacity()) return;
        tail = (tail + 1) % getCapacity();
        put(tail, n);
        size++;
    }

    int dequeue() {
        if (size == 0) return 0;
        int val = get(head);
        head = (head + 1) % getCapacity();
        size--;
        return val;
    }

    int capacity() {
        return getCapacity();
    }

    int length() {
        return size;
    }
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n);
    }

    cout << "ť�� �뷮 = " << mQ.capacity() << ", ť�� ũ�� = " << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << " ";
    }

    cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
}