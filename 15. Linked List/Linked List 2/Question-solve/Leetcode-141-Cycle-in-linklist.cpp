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

// Linked List print করার জন্য function
void display(Node* head, int limit = 10) {
    // limit দেওয়া হয়েছে যাতে cycle থাকলে infinite loop না হয়
    int count = 0;
    while (head != NULL && count < limit) {
        cout << head->val << " ";
        head = head->next;
        count++;
    }
    cout << endl;
}

class Solution {
public:
    bool hasCycle(Node* head) {
        // দুইটা pointer: slow (এক ধাপ করে যাবে), fast (দুই ধাপ করে যাবে)
        Node* slow = head;
        Node* fast = head;

        // যতক্ষণ fast NULL না হয় এবং fast->next NULL না হয়
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;           // slow এক ধাপ এগোবে
            fast = fast->next->next;     // fast দুই ধাপ এগোবে

            // যদি slow আর fast একই node এ মিলে যায় → cycle আছে
            if (slow == fast) return true;
        }

        // যদি fast NULL হয়ে যায় → cycle নেই
        return false;
    }
};

int main() {
    // Example Linked List তৈরি করা
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Cycle তৈরি করা: শেষ node (40) আবার 20 এর সাথে connect করা
    head->next->next->next->next = head->next;

    Solution s;

    if (s.hasCycle(head)) {
        cout << "Cycle detected in Linked List" << endl;
    } else {
        cout << "No cycle found in Linked List" << endl;
    }

    return 0;
}
