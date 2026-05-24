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

// লিস্ট print করার helper function
void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// দুইটা sorted list merge করার helper function
Node* mergeTwoLists(Node* a, Node* b) {
    Node* dummy = new Node(-1);   // dummy node তৈরি
    Node* temp = dummy;           // temp pointer dummy তে রাখা হলো

    // যতক্ষণ দুই লিস্টে node আছে
    while (a != NULL && b != NULL) {
        if (a->val <= b->val) {   // ছোট মানটা আগে বসাও
            temp->next = a;
            a = a->next;
        } else {
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;        // temp কে এগিয়ে নাও
    }

    // যদি কোনো লিস্ট শেষ হয়ে যায়, অন্যটা connect করে দাও
    if (a != NULL) temp->next = a;
    else temp->next = b;

    return dummy->next;           // dummy বাদ দিয়ে আসল head return করো
}

// Merge Sort দিয়ে লিস্ট sort করা
Node* sortList(Node* head) {
    // Base case: ফাঁকা লিস্ট বা একটাই node থাকলে return করো
    if (head == NULL || head->next == NULL) return head;

    // Middle বের করা (slow-fast pointer technique)
    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow এখন middle এ আছে
    Node* mid = slow->next;
    slow->next = NULL; // লিস্টকে দুই ভাগে ভাগ করো

    // Recursive ভাবে দুই ভাগ sort করো
    Node* left = sortList(head);
    Node* right = sortList(mid);

    // দুইটা sorted লিস্ট merge করো
    return mergeTwoLists(left, right);
}

int main() {
    // Example Linked List: 4 -> 2 -> 1 -> 3
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(6);
    head->next->next->next->next->next = new Node(5);
    

    cout << "Original List: ";
    display(head);

    head = sortList(head);

    cout << "Sorted List: ";
    display(head);

    return 0;
}
