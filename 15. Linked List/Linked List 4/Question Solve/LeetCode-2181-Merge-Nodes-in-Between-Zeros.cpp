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

class Solution {
public:
    Node* mergeNodes(Node* head) {
        Node* dummy = new Node(0);
        Node* tail = dummy;
        Node* curr = head->next; // প্রথম 0 বাদ দিয়ে শুরু

        int sum = 0;
        while (curr != NULL) {
            if (curr->val == 0) {
                tail->next = new Node(sum);
                tail = tail->next;
                sum = 0;
            } else {
                sum += curr->val;
            }
            curr = curr->next;
        }

        return dummy->next;
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

int main() {
    // Example Linked List: 0 -> 3 -> 1 -> 0 -> 4 -> 5 -> 2 -> 0
    Node* head = new Node(0);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next = new Node(0);

    Solution s;
    Node* result = s.mergeNodes(head);

    cout << "Merged List: ";
    display(result);

    return 0;
}
