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
    Node* deleteMiddle(Node* head) {
        // যদি একটাই node থাকে, তাহলে delete করে NULL ফেরত দিবো
        if(head == NULL || head->next == NULL) return NULL;

        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        // fast দুই ধাপ করে যাবে, slow এক ধাপ করে যাবে
        while(fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // এখন slow middle এ আছে, prev তার আগের node
        prev->next = slow->next; // middle বাদ দিয়ে link ঠিক করা

        return head;
    }
};

void display(Node* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    display(head);

    Solution s;
    head = s.deleteMiddle(head);

    display(head);
}
