// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// Example 3:
// Input: nums = [], target = 0
// Output: [-1,-1]

#include <bits/stdc++.h>
using namespace std;

// Helper function: প্রথম occurrence বের করার জন্য binary search
int firstOccurrence(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size() - 1, ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(nums[mid] == target) {
            ans = mid;          // সম্ভাব্য উত্তর পাওয়া গেছে
            hi = mid - 1;       // আরও বাম দিকে খুঁজবো
        }
        else if(nums[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans;
}

// Helper function: শেষ occurrence বের করার জন্য binary search
int lastOccurrence(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size() - 1, ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(nums[mid] == target) {
            ans = mid;          // সম্ভাব্য উত্তর পাওয়া গেছে
            lo = mid + 1;       // আরও ডান দিকে খুঁজবো
        }
        else if(nums[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return ans;
}

int main() {
    // Input array
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    // প্রথম ও শেষ occurrence বের করা
    int first = firstOccurrence(nums, target);
    int last = lastOccurrence(nums, target);

    // Output দেখানো
    cout << first << " " << last << endl; // Output: 3 4

    return 0;
}