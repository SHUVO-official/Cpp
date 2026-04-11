// LeetCode-এর Problem 48 ("Rotate Image") হলো একটি square matrix (n × n) কে 90° clockwise ঘুরিয়ে দিতে হবে, এবং সেটা in-place করতে হবে—মানে নতুন কোনো matrix বানানো যাবে না, বরং একই matrix-এর ভেতরেই পরিবর্তন করতে হবে।
// Input: একটি n × n 2D matrix ।

// Task: এটিকে 90° clockwise ঘুরিয়ে দিতে হবে।

// Constraint: নতুন matrix allocate করা যাবে না, অর্থাৎ original matrix-এর ভেতরেই পরিবর্তন করতে হবে।
                // 1 2 3       7 4 1
                // 4 5 6   --> 8 5 2
                // 7 8 9       9 6 7

                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input
    cout << "Enter elements of matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Step 1: Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // Output
    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
