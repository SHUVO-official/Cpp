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
    Node* swapNodes(Node* head, int k) {
        Node* first = head;
        Node* second = head;
        Node* temp = head;

        int length = 0;

        // Step 1: লিস্টের length বের করা
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        // Step 2: প্রথম k-th node খুঁজে বের করা
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Step 3: দ্বিতীয় node খুঁজে বের করা (length-k+1 position)
        for (int i = 1; i < length - k + 1; i++) {
            second = second->next;
        }

        // Step 4: দুইটা node এর value swap করা
        int t = first->val;
        first->val = second->val;
        second->val = t;

        return head;
    }
};

int main() {
    // Example Linked List তৈরি: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    display(head);

    Solution s;
    int k = 2; // 2nd node from start এবং 2nd node from end swap হবে
    head = s.swapNodes(head, k);

    cout << "After swapping " << k << "th node from start and end: ";
    display(head);

    return 0;
}
