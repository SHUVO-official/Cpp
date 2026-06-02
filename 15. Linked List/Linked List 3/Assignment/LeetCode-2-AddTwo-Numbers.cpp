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
    Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummy = new Node(0);
        Node* curr = dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int sum = carry;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new Node(sum % 10);
            curr = curr->next;
        }

        return dummy->next;
    }
};

int main() {
    // Example: (2 -> 4 -> 3) + (5 -> 6 -> 4)
    Node* l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    Node* l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);

    Solution s;
    Node* result = s.addTwoNumbers(l1, l2);

    cout << "Result: ";
    display(result);

    return 0;
}
