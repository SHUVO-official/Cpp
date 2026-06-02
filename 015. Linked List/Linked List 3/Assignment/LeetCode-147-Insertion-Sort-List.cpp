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
    Node* insertionSortList(Node* head) {
        if (!head || !head->next) return head;

        Node* dummy = new Node(0); // dummy node
        dummy->next = head;
        Node* curr = head->next;   // যেটাকে insert করতে হবে
        head->next = NULL;         // প্রথম node কে আলাদা করে রাখো

        while (curr != NULL) {
            Node* nextNode = curr->next; // পরের node ধরে রাখো
            Node* prev = dummy;
            Node* temp = dummy->next;

            // সঠিক জায়গা খুঁজে বের করো
            while (temp != NULL && temp->val < curr->val) {
                prev = temp;
                temp = temp->next;
            }

            // curr কে prev আর temp এর মাঝে বসাও
            curr->next = temp;
            prev->next = curr;

            // পরের node এ move করো
            curr = nextNode;
        }

        return dummy->next;
    }
};

int main() {
    // Example Linked List: 4 -> 2 -> 1 -> 3
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    cout << "Original List: ";
    display(head);

    Solution s;
    head = s.insertionSortList(head);

    cout << "Sorted List: ";
    display(head);

    return 0;
}
