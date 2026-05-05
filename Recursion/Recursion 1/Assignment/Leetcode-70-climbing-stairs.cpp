// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Example 1:
// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps

// Example 2:
// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step


#include <iostream>
using namespace std;
int countWays(int n) {
    // Base cases
    if (n == 0) return 1;   // কিছু না করলে একটাই উপায়
    if (n == 1) return 1;   // শুধু 1 ধাপ

    // Recurrence relation ব্যবহার করছি
    return countWays(n-1) + countWays(n-2);
}

int main() {
    int n;
    cin >> n;   // কয়টা ধাপ উঠতে হবে
    cout << countWays(n) << endl;
}
