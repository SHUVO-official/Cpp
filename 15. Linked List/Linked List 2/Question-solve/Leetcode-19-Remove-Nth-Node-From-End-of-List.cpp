// Given the head of a linked list, remove the nth node from the end of the list and return its head.

// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

// Example 2:
// Input: head = [1], n = 1
// Output: []

// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]

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

void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

class Solution {
public:
    Node* removeNthFromEnd(Node* head, int n) {
        Node* slow = head;
        Node* fast = head;

        // fast কে (n+1) ধাপ এগিয়ে দাও
        for (int i = 1; i <= n + 1; i++) {
            if (fast == NULL) {
                // যদি fast NULL হয়, মানে head বাদ দিতে হবে
                return head->next;
            }
            fast = fast->next;
        }

        // slow আর fast একসাথে move করবে
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        // slow এখন nth node এর আগের node এ আছে
        slow->next = slow->next->next;
        return head;
    }
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    display(head);

    Solution s;
    head = s.removeNthFromEnd(head, 2); // শেষ থেকে 2nd node বাদ দাও

    cout << "After removing 2nd node from end: ";
    display(head);

    return 0;
}
