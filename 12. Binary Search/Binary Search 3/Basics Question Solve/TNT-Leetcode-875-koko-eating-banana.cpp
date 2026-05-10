// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
// Return the minimum integer k such that she can eat all the bananas within h hours.

// Example 1:
// Input: piles = [3,6,7,11], h = 8
// Output: 4

// Example 2:
// Input: piles = [30,11,23,4,20], h = 5
// Output: 30

// Example 3:
// Input: piles = [30,11,23,4,20], h = 6
// Output: 23

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;   // n = piles এর সংখ্যা, h = ঘণ্টা
    vector<int> piles(n);

    // Input নেওয়া
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int lo = 1;
    int hi = *max_element(piles.begin(), piles.end());
    int ans = hi;

    // Binary Search শুরু
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // current guess speed
        long long hours = 0;

        // এখানে normal for loop ব্যবহার করা হয়েছে
        for (int i = 0; i < n; i++) {
            int bananas = piles[i];
            // ceil(bananas / mid) এর সমান
            hours += (bananas + mid - 1) / mid;
        }

        if (hours <= h) {
            ans = mid;      // এই speed এ সম্ভব
            hi = mid - 1;   // আরও ছোট speed চেষ্টা করো
        } else {
            lo = mid + 1;   // এই speed এ সম্ভব নয়, বড় speed চেষ্টা করো
        }
    }

    cout << ans << endl;
    return 0;
}
