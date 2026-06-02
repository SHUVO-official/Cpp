//Ques: Given a sorted binary array {0,0,0,0,1,1,1,1,1,1}, eficiently count the total number of 1's in it.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {0,0,0,0,1,1,1,1,1,1};

    int lo = 0, hi = v.size()- 1, first = -1;

    // Binary search দিয়ে প্রথম 1 বের করা
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == 1) {
            first = mid;     // সঠিক উত্তর পাওয়া গেছে
            hi = mid - 1;    // আরও বাম দিকে খুঁজবো
        }
        else {
            lo = mid + 1;    // v[mid] == 0 হলে ডান দিকে যাবো
        }
    }

    // যদি কোনো 1 না থাকে
    if(first == -1) {
        cout << 0 << endl;   // মোট 1 এর সংখ্যা 0
    }
    else {
        int totalOnes = v.size() - first;
        cout << totalOnes << endl; // Output: 2
    }

    return 0;
}