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
    Node* rotateRight(Node* head, int k) {
        if (head == NULL || head->next == NULL) return head;

        // Step 1: লিস্টের length বের করা
        int n = 1;
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
            n++;
        }

        // Step 2: Tail কে head এর সাথে connect করে cycle বানানো
        temp->next = head;

        // Step 3: Effective rotation বের করা
        k = k % n;
        int stepsToNewHead = n - k;

        // Step 4: নতুন head বের করা
        Node* newTail = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            newTail = newTail->next;
        }

        Node* newHead = newTail->next;
        newTail->next = NULL; // cycle ভেঙে দেওয়া

        return newHead;
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
    int k = 2; // Rotate by 2
    head = s.rotateRight(head, k);

    cout << "After rotating by " << k << ": ";
    display(head);

    return 0;
}
