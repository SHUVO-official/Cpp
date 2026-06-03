#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        // Step 1: প্রতিটি node এর সাথে copy node insert করো
        Node* curr = head;
        while (curr != NULL) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Step 2: random pointer ঠিক করো
        curr = head;
        while (curr != NULL) {
            if (curr->random != NULL) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Step 3: লিস্ট আলাদা করো
        curr = head;
        Node* newHead = head->next;
        Node* copyCurr = newHead;
        while (curr != NULL) {
            curr->next = copyCurr->next;
            curr = curr->next;
            if (curr != NULL) {
                copyCurr->next = curr->next;
                copyCurr = copyCurr->next;
            }
        }

        return newHead;
    }
};

int main() {
    // Example Linked List: 7 -> 13 -> 11 -> 10 -> 1
    Node* head = new Node(7);
    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    // Random pointers (example setup)
    head->random = NULL;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head;

    Solution s;
    Node* copied = s.copyRandomList(head);

    // Display copied list values
    Node* temp = copied;
    cout << "Copied List Values: ";
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
