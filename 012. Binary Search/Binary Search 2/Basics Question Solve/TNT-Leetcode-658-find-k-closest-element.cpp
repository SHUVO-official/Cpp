// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
 
// Example 1:
// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]

// Example 2:
// Input: arr = [1,1,2,3,4,5], k = 4, x = -1
// Output: [1,1,2,3]

#include <bits/stdc++.h>   // সব standard library একসাথে include করা
using namespace std;

int main() {
    // Case 1 data fix করা
    int n = 5;                          // array size
    vector<int> v = {1, 2, 3, 4, 5};    // sorted array
    int k = 4, x = 3;                   // k = কতগুলো element, x = target value

    // Step 1: Binary search দিয়ে x এর কাছাকাছি index বের করা
    int lo = 0, hi = n - 1;             // শুরুতে পুরো array range
    while (lo < hi) {                   // যতক্ষণ না lo == hi হয়
        int mid = lo + (hi - lo) / 2;   // মাঝের index বের করা
        if (v[mid] >= x) hi = mid;      // যদি mid এর মান x এর সমান বা বড় হয় → hi কমাও
        else lo = mid + 1;              // না হলে lo বাড়াও
    }
    // এখানে lo == hi হয়ে যাবে → x এর কাছাকাছি position পাওয়া যাবে

    // Step 2: দুই পাশে expand করা
    int left = lo - 1;   // lo এর আগের index থেকে শুরু (বাম দিক)
    int right = lo;      // lo index থেকে শুরু (ডান দিক)

    // Step 3: k elements collect করা
    while (right - left - 1 < k) {      // যতক্ষণ না k elements পাওয়া যায়
        if (left < 0) {                 // যদি বাম দিক শেষ হয়ে যায়
            right++;                    // শুধু ডান দিক বাড়াও
        } else if (right >= n) {        // যদি ডান দিক শেষ হয়ে যায়
            left--;                     // শুধু বাম দিক কমাও
        } else {                        // দুদিকই valid হলে compare করো
            if (abs(v[left] - x) <= abs(v[right] - x)) {
                left--;                 // যদি বাম দিকের element কাছাকাছি হয় → left কমাও
            } else {
                right++;                // না হলে ডান দিক বাড়াও
            }
        }
    }

    // Step 4: result print করা
    for (int i = left + 1; i < right; i++) {
        cout << v[i] << " ";            // final k closest elements print করা
    }
    cout << endl;

    return 0;                           // program শেষ
}
