#include <bits/stdc++.h>
using namespace std;

// 👉 Node class
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// 👉 Solution class (Middle of Linked List logic)
class Solution {
public:
    Node* middleNode(Node* head) {
        Node* slow = head;
        Node* fast = head;

        // fast দুই ধাপ করে এগোবে, slow এক ধাপ করে
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow যখন শেষ হবে তখন সেটা middle node হবে
        return slow;
    }
};

int main() {
    // Linked List বানাচ্ছি: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original List: ";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    // 👉 Middle node বের করবো
    Solution sol;
    Node* mid = sol.middleNode(head);

    cout << "Middle Node Value: " << mid->val << endl;

    return 0;
}
