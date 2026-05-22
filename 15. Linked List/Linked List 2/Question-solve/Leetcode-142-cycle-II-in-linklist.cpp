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

class Solution {
public:
    Node* detectCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        bool flag = false; // শুরুতে ধরে নিচ্ছি কোনো cycle নেই

        // Step 1: Floyd’s Tortoise and Hare algorithm দিয়ে cycle খুঁজবো
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;           // slow এক ধাপ এগোবে
            fast = fast->next->next;     // fast দুই ধাপ এগোবে

            if (slow == fast) {          // যদি slow আর fast মিলে যায় → cycle আছে
                flag = true;
                break;
            }
        }

        // Step 2: যদি cycle না থাকে → NULL return করবো
        if (flag == false) return NULL;

        // Step 3: যদি cycle থাকে → cycle এর শুরু node বের করবো
        Node* temp = head;
        while (temp != slow) {
            temp = temp->next;   // head থেকে এক ধাপ করে এগোবে
            slow = slow->next;   // meeting point থেকে এক ধাপ করে এগোবে
        }

        // Step 4: তারা যখন একই node এ মিলবে → সেটাই cycle এর শুরু
        return slow;
    }
};

int main() {
    // Example Linked List তৈরি করা
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);

    // Cycle তৈরি করা: শেষ node (-4) আবার 2 এর সাথে connect করা
    head->next->next->next->next = head->next;

    Solution s;
    Node* cycleStart = s.detectCycle(head);

    if (cycleStart != NULL) {
        cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle found in Linked List" << endl;
    }

    return 0;
}
