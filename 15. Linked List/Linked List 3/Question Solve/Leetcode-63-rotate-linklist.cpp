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
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* rotateRight(Node* head, int k) {
    if(head == NULL || head->next == NULL) return head;

    Node* temp = head;
    Node* tail = NULL;

    // Step 1: লিস্টের length বের করা
    int n = 0;
    while(temp != NULL) {
        if(temp->next == NULL) tail = temp; // শেষ node কে tail বানাও
        temp = temp->next;
        n++;
    }

    // Step 2: effective rotation বের করা
    k = k % n;
    if(k == 0) return head;

    // Step 3: নতুন head বের করার জন্য (n-k)th node এ যাওয়া
    temp = head;
    for(int i = 1; i < n - k; i++) {
        temp = temp->next;
    }

    // Step 4: rotate করা
    tail->next = head;     // tail কে head এর সাথে connect করো
    head = temp->next;     // নতুন head হবে temp->next
    temp->next = NULL;     // cycle ভেঙে দাও

    return head;
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

    int k = 2; // Rotate by 2
    head = rotateRight(head, k);

    cout << "After rotating by " << k << ": ";
    display(head);

    return 0;
}

