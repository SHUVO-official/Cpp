#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq; // STL deque declare করলাম

    // 👉 push operations
    dq.push_back(10);   // শেষে insert
    dq.push_back(20);
    dq.push_front(5);   // শুরুতে insert
    dq.push_front(1);

    cout << "Deque after push operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 👉 access front & back
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    // 👉 pop operations
    dq.pop_front(); // প্রথম element remove
    dq.pop_back();  // শেষ element remove

    cout << "Deque after pop operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 👉 size check
    cout << "Size: " << dq.size() << endl;

    // 👉 insert at specific position
    dq.insert(dq.begin() + 1, 99); // ২য় position এ 99 বসানো
    cout << "Deque after insert: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 👉 erase at specific position
    dq.erase(dq.begin()); // প্রথম element মুছে ফেলা
    cout << "Deque after erase: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 👉 clear পুরো deque
    dq.clear();
    cout << "Deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
