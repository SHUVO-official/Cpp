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

// Reverse Linked List II function
Node* reverseBetween(Node* head, int m, int n) {
    if (head == NULL) return NULL;

    Node* dummy = new Node(0);   // dummy node বানানো হলো
    dummy->next = head;
    Node* prev = dummy;

    // Step 1: prev কে m-1 position এ নিয়ে যাও
    for (int i = 1; i < m; i++) {
        prev = prev->next;
    }

    // Step 2: reverse করার জন্য pointer set করো
    Node* curr = prev->next;     // m position এ থাকা node
    Node* NEXT;

    // Step 3: m থেকে n পর্যন্ত reverse করো
    for (int i = 0; i < n - m; i++) {
        NEXT = curr->next;           // পরের node ধরে রাখো
        curr->next = NEXT->next;     // curr কে NEXT skip করাও
        NEXT->next = prev->next;     // NEXT কে সামনে আনো
        prev->next = NEXT;           // prev এর পরে NEXT বসাও
    }

    return dummy->next; // নতুন head return করো
}

int main() {
    // Example Linked List: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    display(head);

    int m = 2, n = 4;
    head = reverseBetween(head, m, n);

    cout << "Reversed List (m=2, n=4): ";
    display(head);

    return 0;
}
