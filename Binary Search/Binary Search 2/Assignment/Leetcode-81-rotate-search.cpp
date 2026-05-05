// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.
// You must decrease the overall operation steps as much as possible.

 // Example 1:
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true

// Example 2:
// Input: nums = [2,5,6,0,0,1,2], target = 3
// Output: false

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& v, int target) {
    int lo = 0;
    int hi = v.size() - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;  // মাঝের index বের করি

        if (v[mid] == target) return true; // target পাওয়া গেছে

        // যদি তিনটা সমান হয় (duplicates case)
        if (v[lo] == v[mid] && v[mid] == v[hi]) {
            lo++;   // বাম দিক সরাই
            hi--;   // ডান দিক সরাই
        }
        // যদি বাম দিক sorted হয়
        else if (v[lo] <= v[mid]) {
            if (v[lo] <= target && target < v[mid]) {
                hi = mid - 1; // target বাম দিকেই আছে
            } else {
                lo = mid + 1; // target ডান দিকে
            }
        }
        // নাহলে ডান দিক sorted
        else {
            if (v[mid] < target && target <= v[hi]) {
                lo = mid + 1; // target ডান দিকেই আছে
            } else {
                hi = mid - 1; // target বাম দিকে
            }
        }
    }
    return false; // target পাওয়া যায়নি
}

int main() {
    vector<int> v = {2,5,6,0,0,1,2};
    int target = 0;

    if (search(v, target)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
