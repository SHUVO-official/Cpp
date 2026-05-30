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
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* NEXT = NULL;
        while (curr != NULL) {
            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }
        return prev;
    }

    int pairSum(Node* head) {
        // Step 1: slow-fast দিয়ে middle বের করো
        Node* slow = head;
        Node* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: second half reverse করো
        Node* second = reverseList(slow->next);

        // Step 3: দুই half compare করে max twin sum বের করো
        int maxSum = 0;
        Node* first = head;
        while (second != NULL) {
            maxSum = max(maxSum, first->val + second->val);
            first = first->next;
            second = second->next;
        }

        return maxSum;
    }
};

int main() {
    // Example Linked List: 5 -> 4 -> 2 -> 1
    Node* head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    cout << "Original List: ";
    display(head);

    Solution s;
    int ans = s.pairSum(head);

    cout << "Maximum Twin Sum: " << ans << endl;

    return 0;
}
