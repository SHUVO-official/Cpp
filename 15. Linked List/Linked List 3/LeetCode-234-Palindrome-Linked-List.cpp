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

// Helper function: লিস্ট reverse করা
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* NEXT;
    while (curr != NULL) {
        NEXT = curr->next;
        curr->next = prev;
        prev = curr;
        curr = NEXT;
    }
    return prev;
}

// Palindrome check function
bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) return true;

    // Step 1: slow-fast pointer দিয়ে middle বের করো
    Node* slow = head;
    Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: second half reverse করো
    slow->next = reverseList(slow->next);

    // Step 3: দুই half compare করো
    Node* p1 = head;
    Node* p2 = slow->next;
    while (p2 != NULL) {
        if (p1->val != p2->val) return false;
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

int main() {
    // Example Linked List: 1 -> 2 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    cout << "Original List: ";
    display(head);

    if (isPalindrome(head)) {
        cout << "Palindrome Linked List" << endl;
    } else {
        cout << "Not Palindrome Linked List" << endl;
    }

    return 0;
}
