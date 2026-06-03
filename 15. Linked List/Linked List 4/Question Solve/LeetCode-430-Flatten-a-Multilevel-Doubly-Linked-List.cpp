#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
        this->child = NULL;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;

        Node* curr = head;
        while (curr != NULL) {
            if (curr->child != NULL) {
                Node* child = curr->child;
                Node* nextNode = curr->next;

                Node* childTail = flatten(child);

                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                if (childTail != NULL) {
                    childTail->next = nextNode;
                    if (nextNode != NULL) nextNode->prev = childTail;
                }
            }
            curr = curr->next;
        }
        return head;
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

int main() {
    // Example: 1 -> 2 -> 3, and 3 has child 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    Node* childHead = new Node(4);
    childHead->next = new Node(5);
    childHead->next->prev = childHead;

    head->next->next->child = childHead;

    Solution s;
    Node* flat = s.flatten(head);

    cout << "Flattened List: ";
    display(flat);

    return 0;
}
