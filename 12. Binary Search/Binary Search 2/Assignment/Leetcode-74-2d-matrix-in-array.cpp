// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

 // Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Matrix input নিই
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 13;

    int m = matrix.size();        // মোট কতগুলো row আছে
    int n = matrix[0].size();     // প্রতিটি row তে কতগুলো column আছে

    // Binary Search এর জন্য শুরু ও শেষ index ধরি
    int lo = 0;                   // প্রথম index (0)
    int hi = m * n - 1;           // শেষ index (m*n - 1)

    bool flag = false;           // target পাওয়া গেছে কিনা check করার জন্য

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // মাঝের index বের করি

        // mid কে 2D matrix এর row ও column এ convert করি
        int row = mid / n;             // কোন row তে আছে
        int col = mid % n;             // কোন column এ আছে

        int midValue = matrix[row][col]; // ঐ cell এর মান

        if (midValue == target) {
            flag = true;   // target পাওয়া গেছে
            break;
        }
        else if (midValue < target) {
            lo = mid + 1;   // target বড় হলে ডান দিকে search করবো
        }
        else {
            hi = mid - 1;   // target ছোট হলে বাম দিকে search করবো
        }
    }

    if(flag==true) cout << "true" << endl;
    else cout << "false" << endl;

    
}
