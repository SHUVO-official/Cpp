//Ques: Search element in an infinite sorted array

#include<bits/stdc++.h>                 
using namespace std;                

int main(){
    // Example sorted array (ধরা যাক infinite array এর ছোট অংশ)
    vector<int> v={1,2,4,7,10,12,15,18};   
    
    int lo = 0 , hi = 1;             // শুরুতে ছোট range [0,1]
    int tgt = 10;                    // Target element (এখানে 10 খুঁজছি)

    // Step 1: Range খুঁজে বের করা (doubling technique)
    while(v[hi] < tgt) {             // যতক্ষণ a[hi] target এর থেকে ছোট
        lo = hi;                     // lo কে hi তে নিয়ে আসি
        hi *= 2;                     // hi কে দ্বিগুণ করি (range বাড়াই)
    }
    cout << lo << " " << hi << endl; // Range print করে দেখানো

    // Step 2: Binary Search চালানো
    bool flag = false;               // Target পাওয়া গেছে কিনা check করার জন্য
    while(lo <= hi) {                // যতক্ষণ range valid থাকে
        int mid = lo + (hi - lo)/2;  // মাঝখানের index বের করি
        if(v[mid] == tgt) {          // যদি target পাওয়া যায়
            flag = true;             // flag true করি
            break;                   // লুপ থেকে বের হয়ে যাই
        }
        else if(v[mid] > tgt) {      // যদি মাঝের মান target এর থেকে বড় হয়
            hi = mid - 1;            // তাহলে ডান দিক বাদ দিয়ে বাম দিকে খুঁজি
        }
        else {                       // যদি মাঝের মান target এর থেকে ছোট হয়
            lo = mid + 1;            // তাহলে বাম দিক বাদ দিয়ে ডান দিকে খুঁজি
        }
    }

    // Step 3: Final Result print করা
    if(flag) cout << "Element exists" << endl;   // Target পাওয়া গেছে
    else cout << "Element not found" << endl;    // Target পাওয়া যায়নি
}
