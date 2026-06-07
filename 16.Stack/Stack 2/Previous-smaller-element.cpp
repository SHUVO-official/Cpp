#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmaller(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);

    stack<int> st;

    for (int i = 0; i < n; i++) {
     
        // pop elements from stack until a smaller 
        // element is found or stack becomes empty
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        // if stack is not empty, top is nearest smaller
        if (!st.empty()) {
            result[i] = st.top();
        }

        // push current element to stack
        st.push(arr[i]);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 5, 0, 3, 4, 5};
    vector<int> ans = prevSmaller(arr);

    for (int x : ans) cout << x << " ";
    return 0;
}