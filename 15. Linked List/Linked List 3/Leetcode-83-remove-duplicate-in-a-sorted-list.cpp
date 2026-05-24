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
    Node* deleteDuplicates(Node* head) {
        if (head == NULL || head->next == NULL) return head; 
        // লিস্ট ফাঁকা বা একটাই node থাকলে 그대로 return করো

        Node* current = head;
        while (current != NULL && current->next != NULL) {
            if (current->val == current->next->val) {
                // যদি duplicate পাওয়া যায় → skip করে দাও
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
    // Example Linked List তৈরি: 1 -> 1 -> 2 -> 3 -> 3
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);

    cout << "Original List: ";
    display(head);

    Solution s;
    head = s.deleteDuplicates(head);

    cout << "After removing duplicates: ";
    display(head);

    return 0;
}
