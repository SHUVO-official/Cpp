#include <bits/stdc++.h>
using namespace std;

class Queue {
    vector<int> v;   // vector দিয়ে ডাটা রাখবো
    int f;           // front index

public:
    Queue() {
        f = 0;
    }

    // ✅ Enqueue → নতুন element যোগ করা
    void push(int val) {
        v.push_back(val);   // vector-এর শেষে বসানো
        cout << val << " inserted\n";
    }

    // ✅ Dequeue → সামনে থেকে element সরানো
    void pop() {
        if (f == v.size()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << v[f] << " removed\n";
        f++;   // শুধু front index বাড়ানো
    }

    // ✅ Front → প্রথম element দেখা
    int front() {
        if (f == v.size()) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return v[f];
    }

    // ✅ Back → শেষ element দেখা
    int back() {
        if (f == v.size()) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return v.back();
    }

    // ✅ Size → কয়টা element আছে
    int size() {
        return v.size() - f;
    }

    // ✅ Empty check
    bool empty() {
        return (f == v.size());
    }

    // ✅ Display → সব element দেখানো
    void display() {
        if (f == v.size()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = f; i < v.size(); i++) {
            cout << v[i] << " ";
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
    q.display();   // Output: 10 20 30 40

    q.pop();       // removes 10
    q.display();   // Output: 20 30 40

    cout << "Front: " << q.front() << endl; // 20
    cout << "Back: " << q.back() << endl;   // 40
    cout << "Size: " << q.size() << endl;   // 3
}
