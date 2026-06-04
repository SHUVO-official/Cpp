#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    vector<int> v; // stack এর জন্য dynamic vector

    // নতুন element যোগ করা (Push)
    void push(int val) {
        v.push_back(val); // vector এর শেষে element ঢুকবে
    }

    // উপরের element সরানো (Pop)
    void pop() {
        if (v.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        v.pop_back(); // শেষ element মুছে যাবে
    }

    // উপরের element দেখা (Top)
    int top() {
        if (v.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return v.back(); // vector এর শেষ element = stack top
    }

    // Stack এ কয়টা element আছে (Size)
    int size() {
        return v.size();
    }

    // Stack খালি কিনা (Empty check)
    bool empty() {
        return v.empty();
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // এখানে কোনো "full" error হবে না, কারণ vector auto grow করে

    cout << "Stack size = " << st.size() << endl; // Output: 6
    cout << "Top element = " << st.top() << endl; // Output: 60

    st.pop(); // 60 মুছে যাবে
    cout << "Now top = " << st.top() << endl; // Output: 50
}
