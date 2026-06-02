#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Helper function: লিস্ট print করা
void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

class Solution {
public:
    int getDecimalValue(Node* head) {
        int result = 0;
        while (head != NULL) {
            result = result * 2 + head->val; // shift left + add bit
            head = head->next;
        }
        return result;
    }
};

int main() {
    // Example Linked List: 1 -> 0 -> 1 (binary 101)
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(1);

    cout << "Binary List: ";
    display(head);

    Solution s;
    int ans = s.getDecimalValue(head);

    cout << "Decimal Value: " << ans << endl;

    return 0;
}
