#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
    int f, b;       // f = front index, b = back index
    int arr[5];     // fixed size array

    Queue() {
        f = 0;
        b = 0;
    }

    // ✅ Enqueue → নতুন element যোগ করা
    void push(int val) {
        if (b == 5) {   // যদি array full হয়
            cout << "Queue is full." << endl;
            return;
        }
        arr[b] = val;   // নতুন element পিছনে বসানো
        b++;
    }

    // ✅ Dequeue → সামনে থেকে element সরানো
    void pop() {
        if (f == b) {   // যদি empty হয়
            cout << "Queue is empty." << endl;
            return;
        }
        f++; // সামনে থেকে সরানো মানে শুধু index বাড়ানো
    }

    // ✅ Front → প্রথম element দেখা
    int front() {
        if (f == b) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[f];
    }

    // ✅ Back → শেষ element দেখা
    int back() {
        if (f == b) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[b - 1];
    }

    // ✅ Size → কয়টা element আছে
    int size() {
        return b - f;
    }

    // ✅ Empty check
    bool empty() {
        return (f == b);
    }

    // ✅ Display → সব element দেখানো
    void display() {
        if (f == b) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = f; i < b; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();   // Output: 10 20 30 40 50

    q.push(60);    // Queue full → দেখাবে "Queue is full."
    q.pop();       // 10 remove হবে
    q.display();   // Output: 20 30 40 50

    cout << "Front: " << q.front() << endl; // 20
    cout << "Back: " << q.back() << endl;   // 50
    cout << "Size: " << q.size() << endl;   // 4
}
