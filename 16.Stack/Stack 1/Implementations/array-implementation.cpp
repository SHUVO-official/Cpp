#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int arr[5];   // fixed size array (capacity = 5)
    int idx;      // stack এর top index

    Stack() {
        idx = -1; // শুরুতে stack খালি থাকে
    }

    // নতুন element যোগ করা (Push)
    void push(int val) {
        if (idx == sizeof(arr)/sizeof(arr[0])-1) { // arr[0..4] → মোট 5 জায়গা
            cout << "Stack is full!" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    // উপরের element সরানো (Pop)
    void pop() {
        if (idx == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        idx--;
    }

    // উপরের element দেখা (Top)
    int top() {
        if (idx == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[idx];
    }

    // Stack এ কয়টা element আছে (Size)
    int size() {
        return idx + 1;
    }

    void display()
        {
            for(int i=0;i<=idx;i++)
                {
                    cout<<arr[i]<<" ";
                }
        }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // এখানে "Stack is full!" দেখাবে

    cout << "Stack size = " << st.size() << endl; // Output: 5
    cout << "Top element = " << st.top() << endl; // Output: 50

    st.pop(); // 50 মুছে যাবে
    cout << "Now top = " << st.top() << endl; // Output: 40

    st.display();
}
