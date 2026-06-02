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

Node* partition(Node* head, int x) {
    // দুইটা dummy list বানানো হলো
    Node* lo = new Node(-1);   // ছোট মানের জন্য
    Node* hi = new Node(-1);   // বড় মানের জন্য

    Node* templo = lo;
    Node* temphi = hi;
    Node* temp = head;

    // লিস্ট traverse করা
    while (temp != NULL) {
        if (temp->val < x) {
            templo->next = temp;   // ছোট মান lo লিস্টে যাবে
            templo = templo->next;
        } else {
            temphi->next = temp;   // বড় মান hi লিস্টে যাবে
            temphi = temphi->next;
        }
        temp = temp->next;
    }

    // দুই লিস্ট connect করা
    templo->next = hi->next;
    temphi->next = NULL; // শেষ node এর পরে NULL দিতে হবে

    return lo->next; // lo->next হলো নতুন head
}

int main() {
    // Example Linked List: 1 -> 4 -> 3 -> 2 -> 5 -> 2
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(2);

    cout << "Original List: ";
    display(head);

    int x = 3;
    head = partition(head, x);

    cout << "Partitioned List (x = " << x << "): ";
    display(head);

    return 0;
}
