// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.

 // Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Example 3:
// Input: nums = [1], target = 0
// Output: -1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Rotated sorted array উদাহরণ
    vector<int> v = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;   // যেটা খুঁজতে হবে

    int lo = 0;
    int hi = v.size() - 1;
    int idx = -1;   // target না পাওয়া গেলে -1 থাকবে

    while (lo <= hi) {
        int mid = (lo + hi) / 2;   // মাঝের index বের করা

        if (v[mid] == target) {
            idx = mid;             // target পাওয়া গেছে
            break;
        }

        // যদি left half sorted থাকে
        if (v[lo] <= v[mid]) {
            if (v[lo] <= target && target < v[mid]) {
                hi = mid - 1;      // target left half এ আছে
            } else {
                lo = mid + 1;      // target right half এ আছে
            }
        }
        // নাহলে right half sorted
        else {
            if (v[mid] < target && target <= v[hi]) {
                lo = mid + 1;      // target right half এ আছে
            } else {
                hi = mid - 1;      // target left half এ আছে
            }
        }
    }

    cout << "Target Index = " << idx << endl;

    return 0;
}
