// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.

 // Example 1:
 // Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1

// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1

#include <iostream>   
#include <vector>     
using namespace std;

int main() {
    // উদাহরণ ইনপুট: 1 3 5 4 3 2 1 0
    vector<int> v = {1, 3, 5, 4, 3, 2, 1, 0};  // একটি mountain array

    int lo = 0;                  // শুরু index (0 বাদ দিলাম কারণ mid-1 লাগবে)
    int hi = v.size() - 1;       // শেষ index (n-1 বাদ দিলাম কারণ mid+1 লাগবে)
    int peakIndex = 0;           // peak index রাখার জন্য ভ্যারিয়েবল

    // Binary Search চালানো হচ্ছে
    while (lo <= hi) {
        int mid = (lo + hi) / 2;   

        // যদি mid আসলেই peak হয়
        if (v[mid] > v[mid + 1] && v[mid] > v[mid - 1]) {
            peakIndex = mid;       // mid কে peakIndex এ রাখলাম
            break;                 // কাজ শেষ, loop থেকে বের হয়ে আসো
        }
        // যদি mid এর পরের মান বড় হয়, তাহলে peak ডান দিকে আছে
        else if (v[mid] < v[mid + 1]) {
            lo = mid + 1;          // search range ডান দিকে সরাও
        }
        // নাহলে peak বাম দিকে আছে
        else {
            hi = mid - 1;          // search range বাম দিকে সরাও
        }
    }

    cout << "Peak Index = " << peakIndex << endl;  // ফলাফল প্রিন্ট করো

    return 0;
}
