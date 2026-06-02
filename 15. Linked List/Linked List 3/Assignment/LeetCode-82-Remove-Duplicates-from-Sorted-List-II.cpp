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
    Node* deleteDuplicates(Node* head) {
        if (!head) return NULL;

        // Dummy node বানানো হলো edge case handle করার জন্য
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* prev = dummy;   // prev সবসময় unique node এর আগে থাকবে
        Node* curr = head;

        while (curr != NULL) {
            // যদি duplicate পাওয়া যায়
            if (curr->next != NULL && curr->val == curr->next->val) {
                // যতক্ষণ পর্যন্ত same value আছে, curr কে সামনে নিয়ে যাও
                while (curr->next != NULL && curr->val == curr->next->val) {
                    curr = curr->next;
                }
                // prev->next কে skip করাও → duplicate বাদ দাও
                prev->next = curr->next;
            } else {
                // যদি duplicate না থাকে, prev কে সামনে নিয়ে যাও
                prev = prev->next;
            }
            curr = curr->next;
        }

        return dummy->next;
    }
};

int main() {
    // Example Linked List: 1 -> 2 -> 3 -> 3 -> 4 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next = new Node(5);

    cout << "Original List: ";
    display(head);

    Solution s;
    head = s.deleteDuplicates(head);

    cout << "After Removing Duplicates: ";
    display(head);

    return 0;
}
