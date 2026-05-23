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
    int lengthOfCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        // Step 1: Cycle detect করা (Floyd’s Algorithm)
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Cycle length বের করা
                int length = 1;
                Node* temp = slow->next;
                while (temp != slow) {
                    length++;
                    temp = temp->next;
                }
                return length;
            }
        }

        return 0; // যদি cycle না থাকে
    }
};

int main() {
    // LeetCode 142 এর Example Linked List তৈরি
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);

    // Cycle তৈরি করা: -4 আবার 2 এর সাথে connect করছে
    head->next->next->next->next = head->next;

    Solution s;
    int cycleLength = s.lengthOfCycle(head);

    if (cycleLength > 0) {
        cout << "Cycle length = " << cycleLength << endl;
    } else {
        cout << "No cycle found" << endl;
    }

    return 0;
}

