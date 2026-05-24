#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
    vector<vector<int>> ans(m, vector<int>(n, -1));
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (head != NULL && top <= bottom && left <= right) {
        // left → right
        for (int j = left; j <= right && head != NULL; j++) {
            ans[top][j] = head->val;
            head = head->next;
        }
        top++;

        // top → bottom
        for (int i = top; i <= bottom && head != NULL; i++) {
            ans[i][right] = head->val;
            head = head->next;
        }
        right--;

        // right → left
        for (int j = right; j >= left && head != NULL; j--) {
            ans[bottom][j] = head->val;
            head = head->next;
        }
        bottom--;

        // bottom → top
        for (int i = bottom; i >= top && head != NULL; i--) {
            ans[i][left] = head->val;
            head = head->next;
        }
        left++;
    }

    return ans;
}

int main() {
    // Example Linked List তৈরি: 3 -> 0 -> 2 -> 6 -> 8 -> 1 -> 7 -> 9 -> 4 -> 2 -> 5 -> 5 -> 0
    ListNode* head = new ListNode(3);
    head->next = new ListNode(0);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(6);
    head->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next->next->next->next->next->next->next = new ListNode(0);

    int m = 3, n = 5;
    vector<vector<int>> ans = spiralMatrix(m, n, head);

    cout << "Spiral Matrix:" << endl;
    for (auto row : ans) {
        for (auto x : row) cout << x << " ";
        cout << endl;
    }

    return 0;
}
