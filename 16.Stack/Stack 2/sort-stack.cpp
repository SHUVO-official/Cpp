#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void sortStack(stack<int>& st) {
    vector<int> temp;

    // Step 1: Stack থেকে সব element vector এ নাও
    while (!st.empty()) {
        temp.push_back(st.top());
        st.pop();
    }

    // Step 2: Bubble Sort দিয়ে vector sort করো (ascending order)
    int n = temp.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                // swap
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    // Step 3: Sorted vector আবার stack এ push করো
    for (int x : temp) {
        st.push(x);
    }
}

int main() {
    stack<int> st;
    st.push(30);
    st.push(-5);
    st.push(18);
    st.push(14);
    st.push(-3);

    cout << "Original Stack (top to bottom):\n";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sortStack(st);

    cout << "Sorted Stack (top to bottom):\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
