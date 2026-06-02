//Given a positive integer num, return true if num is a perfect square or false otherwise.
// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.
// You must not use any built-in library function, such as sqrt.

 // Example 1:
// Input: num = 16
// Output: true
// Explanation: We return true because 4 * 4 = 16 and 4 is an integer.

// Example 2:
// Input: num = 14
// Output: false
// Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int lo = 0, hi = num;          // binary search range শুরু
    bool isSquare = false;         // flag: perfect square পাওয়া গেছে কিনা

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;   // মাঝের মান বের করা
        long long m = (long long)mid;   // mid কে long long এ convert
        long long y = (long long)num;   // num কে long long এ convert

        if (m * m == y) {               // যদি mid^2 == num হয়
            isSquare = true;            // perfect square পাওয়া গেছে
            break;                      // loop শেষ
        }
        else if (m * m > y) {           // mid^2 বড় হলে
            hi = mid - 1;               // ছোট range এ search করো
        }
        else {                          // mid^2 ছোট হলে
            lo = mid + 1;               // বড় range এ search করো
        }
    }

    // ফলাফল দেখানো
    if (isSquare) cout << num << " is a perfect square." << endl;
    else cout << num << " is NOT a perfect square." << endl;

    return 0;
}
