// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;  // ইউজার থেকে ইনপুট নেবে (যে সংখ্যার sqrt বের করতে হবে)

    int lo = 0, hi = x;  // binary search এর জন্য range সেট করা হলো
    int ans = 0;         // final উত্তর রাখার জন্য ভ্যারিয়েবল

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // মাঝের মান বের করা হলো
        long long m = (long long)mid;  // overflow এড়াতে long long এ কাস্ট করা
        long long y = (long long)x;

        if (m * m == y) {
            ans = mid;   // যদি ঠিক sqrt পাওয়া যায়, সেটাই উত্তর
            break;
        }
        else if (m * m > y) {
            hi = mid - 1;  // যদি square বড় হয়, তাহলে ডান দিক বাদ দিয়ে বাম দিকে খুঁজবো
        }
        else {
            lo = mid + 1;  // যদি square ছোট হয়, তাহলে বাম দিক বাদ দিয়ে ডান দিকে খুঁজবো
            ans = mid;     // সম্ভাব্য উত্তর আপডেট করা হলো
        }
    }

    cout << ans << endl;  // চূড়ান্ত উত্তর প্রিন্ট করবে
    return 0;
}
