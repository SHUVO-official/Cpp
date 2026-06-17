#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
public:
    vector<int> arr;
    int f, b, s, c; // f = front, b = back, s = size, c = capacity

    MyCircularQueue(int k) {
        arr.resize(k);
        c = k;
        f = 0;
        b = 0;
        s = 0;
    }

    void enQueue(int value) {
        if (isFull()) {
            cout << "Queue is full." << endl;
            return;
        }
        arr[b] = value;
        b++;
        if (b == c) b = 0;   // ঘুরে আবার শুরুতে যাবে
        s++;
        cout << "Inserted: " << value << endl;
    }

    void deQueue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Deleted: " << arr[f] << endl;
        f++;
        if (f == c) f = 0;   // ঘুরে আবার শুরুতে যাবে
        s--;
    }

    int Front() {
        if (isEmpty()) return -1;
        return arr[f];
    }

    int Back() {
        if (isEmpty()) return -1;
        int idx = b - 1;
        if (idx < 0) idx = c - 1;  // ঘুরে আবার শেষ index এ যাবে
        return arr[idx];
    }

    bool isEmpty() {
        return s == 0;
    }

    bool isFull() {
        return s == c;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        int i = f;
        for (int j = 0; j < s; j++) {
            cout << arr[i] << " ";
            i++;
            if (i == c) i = 0;
        }
        cout << endl;
    }
};

int main() {
    MyCircularQueue q(3); // capacity = 3

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40); // full

    q.display();
    cout << "Front: " << q.Front() << " Back: " << q.Back() << endl;

    q.deQueue();
    q.deQueue();

    q.display();

    q.enQueue(40);
    q.display();

    cout << "Front: " << q.Front() << " Back: " << q.Back() << endl;
}
