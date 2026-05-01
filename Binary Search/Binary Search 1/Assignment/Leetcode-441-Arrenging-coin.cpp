// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.

// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.


#include <iostream>
using namespace std;

int main() {
    long long n;  
    cin >> n;   // কয়টা কয়েন আছে তা ইনপুট নেবে

    long long lo = 1, hi = n;  // binary search এর জন্য range সেট করা হলো
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;   // মাঝের মান বের করা
        long long m = mid * (mid + 1) / 2;    // mid পর্যন্ত কয়টা কয়েন লাগবে (sum of 1..mid)

        if (m == n) {
            cout << mid << endl;   // ঠিক n কয়েন হলে mid rows complete
            return 0;
        }
        if (m > n) {
            hi = mid - 1;   // বেশি কয়েন লাগছে, তাই ছোট মানে নামাও
        } else {
            lo = mid + 1;   // কম কয়েন লাগছে, তাই বড় মানে যাও
        }
    }
    cout << hi << endl;   // শেষ পর্যন্ত complete rows এর সংখ্যা hi তে থাকবে
    return 0;
}
