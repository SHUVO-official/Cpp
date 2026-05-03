// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 // Example 1:
// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5

// Example 2:
// Input: c = 3
// Output: false

#include <iostream>
#include <cmath> // sqrt function ব্যবহার করার জন্য
using namespace std;

int main() {
    int c;
    cin >> c; // ইনপুট নিলাম

    long long lo = 0;                  // a শুরু হবে 0 থেকে
    long long hi = (long long) sqrt(c); // b শুরু হবে sqrt(c) থেকে

    bool found = false; // উত্তর track করার জন্য

    while (lo <= hi) {
        long long sum = lo * lo + hi * hi; // a^2 + b^2 হিসাব করলাম

        if (sum == c) {
            found = true; // মিল পেলে true
            break;
        } else if (sum < c) {
            lo++; // sum ছোট হলে a বাড়াই
        } else {
            hi--; // sum বড় হলে b কমাই
        }
    }

    if (found) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
