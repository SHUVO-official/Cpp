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
    Node* swapPairs(Node* head) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;

        while (head != NULL && head->next != NULL) {
            Node* first = head;
            Node* second = head->next;

            // swap
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // move pointers
            prev = first;
            head = first->next;
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
    // Example Linked List: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    Solution s;
    Node* result = s.swapPairs(head);

    cout << "Swapped List: ";
    display(result);

    return 0;
}
