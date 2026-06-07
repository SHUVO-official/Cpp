#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 1};
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st; // index রাখার জন্য

    // 2 বার traverse (circular effect এর জন্য)
    for (int i = 0; i < 2 * n; i++) {
        int num = nums[i % n]; // circular index
        while (!st.empty() && nums[st.top()] < num) {
            result[st.top()] = num;
            st.pop();
        }
        if (i < n) st.push(i); // প্রথম n বার index push করবো
    }

    // Output print
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
