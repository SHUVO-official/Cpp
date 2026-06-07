#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> prices = {8, 4, 6, 2, 3};
    int n = prices.size();
    vector<int> result(n);

    stack<int> st; // index রাখার জন্য

    for (int i = n - 1; i >= 0; i--) {
        // যতক্ষণ পর্যন্ত stack এর top > current price → pop করো
        while (!st.empty() && st.top() > prices[i]) {
            st.pop();
        }

        // যদি stack খালি না হয় → discount = st.top()
        if (!st.empty()) {
            result[i] = prices[i] - st.top();
        } else {
            result[i] = prices[i]; // discount নেই
        }

        // current price stack এ push করো
        st.push(prices[i]);
    }

    // Output print
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
