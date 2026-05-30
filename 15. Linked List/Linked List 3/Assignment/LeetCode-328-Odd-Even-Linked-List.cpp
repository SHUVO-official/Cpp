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
    Node* oddEvenList(Node* head) {
        if (!head || !head->next) return head;

        Node* odd = head;           // odd list শুরু হবে head থেকে
        Node* even = head->next;    // even list শুরু হবে head->next থেকে
        Node* evenHead = even;      // পরে connect করার জন্য even এর head ধরে রাখো

        while (even != NULL && even->next != NULL) {
            odd->next = even->next;     // odd এর পরেরটা even->next
            odd = odd->next;            // odd কে সামনে নিয়ে যাও
            even->next = odd->next;     // even এর পরেরটা odd->next
            even = even->next;          // even কে সামনে নিয়ে যাও
        }

        odd->next = evenHead; // শেষে odd list এর সাথে even list connect করো
        return head;
    }
};

int main() {
    // Example Linked List: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    display(head);

    Solution s;
    head = s.oddEvenList(head);

    cout << "Odd-Even List: ";
    display(head);

    return 0;
}
