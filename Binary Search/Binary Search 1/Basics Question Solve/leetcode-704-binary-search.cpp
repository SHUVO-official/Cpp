#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    // Input: array size
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n);
    // Input: array elements (sorted হতে হবে binary search কাজ করার জন্য)
    cout << "Enter " << n << " sorted elements: ";
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    // Input: target element
    cout << "Enter target element: ";
    cin >> target;

    int lo = 0, hi = n - 1;
    int ans = -1; // default -1 মানে element পাওয়া যায়নি

    // Binary Search Loop
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2; // midpoint বের করা

        if(v[mid] == target) {
            ans = mid; // target পাওয়া গেছে
            break;
        }
        else if(v[mid] > target) {
            hi = mid - 1; // target ছোট হলে বাম দিকে search করবো
        }
        else {
            lo = mid + 1; // target বড় হলে ডান দিকে search করবো
        }
    }

    // Output result
    if(ans != -1) cout << "Target found at index: " << ans << endl;
    else cout << "Target not found" << endl;

    return 0;
}
