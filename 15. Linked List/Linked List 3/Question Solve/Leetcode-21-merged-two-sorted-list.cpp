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

Node* mergeTwoLists(Node* a, Node* b) {
    Node* dummy = new Node(-1); // dummy node
    Node* temp = dummy;

    while (a != NULL && b != NULL) {
        if (a->val <= b->val) {
            temp->next = a;
            a = a->next;
        } else {
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }

    // যদি কোনো লিস্ট শেষ হয়ে যায়, অন্যটা connect করে দাও
    if (a != NULL) temp->next = a;
    else temp->next = b;

    return dummy->next; // dummy বাদ দিয়ে আসল head return করো
}

int main() {
    // Example List1: 1 -> 2 -> 4
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(4);

    // Example List2: 1 -> 3 -> 4
    Node* list2 = new Node(1);
    list2->next = new Node(3);
    list2->next->next = new Node(4);

    cout << "List1: ";
    display(list1);
    cout << "List2: ";
    display(list2);

    Node* merged = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    display(merged);

    return 0;
}
