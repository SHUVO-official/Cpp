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
    Node* removeElements(Node* head, int val) {
        // Step 1: শুরুতে head এর value যদি val হয়, তাহলে head বাদ দিতে হবে
        while (head != NULL && head->val == val) {
            head = head->next;
        }

        // Step 2: এখন লিস্টের ভেতরে traverse করবো
        Node* current = head;
        while (current != NULL && current->next != NULL) {
            if (current->next->val == val) {
                // যদি পরের node এর value val হয় → skip করে দাও
                current->next = current->next->next;
            } else {
                // না হলে normal ভাবে এগিয়ে যাও
                current = current->next;
            }
        }

        return head;
    }
};

int main() {
    // Example Linked List তৈরি: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(6);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(6);

    cout << "Original List: ";
    display(head);

    Solution s;
    int val = 6; // সব 6 বাদ দিতে হবে
    head = s.removeElements(head, val);

    cout << "After removing " << val << ": ";
    display(head);

    return 0;
}
