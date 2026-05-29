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

// Reverse Linked List function
Node* reverseList(Node* head) {
    Node* prev = NULL;   // আগের node ধরে রাখবে (শুরুতে NULL)
    Node* curr = head;   // বর্তমান node (শুরুতে head)
    Node* NEXT;          // পরের node ধরে রাখার জন্য

    // যতক্ষণ না curr NULL হয়, লুপ চলবে
    while (curr != NULL) {
        NEXT = curr->next;     // পরের node ধরে রাখো (না হলে হারিয়ে যাবে)
        curr->next = prev;     // লিঙ্ক উল্টে দাও → বর্তমান node কে আগের দিকে point করাও
        prev = curr;           // prev কে সামনে আনো → এখনকার node prev হয়ে গেলো
        curr = NEXT;           // curr কে সামনে আনো → পরের node এ move করো
    }

    // শেষে prev নতুন head হয়ে যাবে
    return prev;
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

    head = reverseList(head); // লিস্ট উল্টে দাও

    cout << "Reversed List: ";
    display(head);

    return 0;
}
