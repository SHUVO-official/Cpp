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
    vector<int> nodesBetweenCriticalPoints(Node* head) {
        if (!head || !head->next || !head->next->next) return {-1, -1};

        int index = 1;
        int first = -1, last = -1;
        int minDist = INT_MAX;

        Node* prev = head;
        Node* curr = head->next;

        while (curr->next != NULL) {
            int valPrev = prev->val;
            int valCurr = curr->val;
            int valNext = curr->next->val;

            if ((valCurr > valPrev && valCurr > valNext) || 
                (valCurr < valPrev && valCurr < valNext)) {
                if (first == -1) first = index;
                else {
                    minDist = min(minDist, index - last);
                }
                last = index;
            }

            prev = curr;
            curr = curr->next;
            index++;
        }

        if (first == -1 || last == first) return {-1, -1};
        return {minDist, last - first};
    }
};

int main() {
    // Example Linked List: 1 -> 3 -> 2 -> 2 -> 3 -> 2 -> 2 -> 2 -> 7
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next->next = new Node(7);

    Solution s;
    vector<int> ans = s.nodesBetweenCriticalPoints(head);

    cout << "Minimum Distance: " << ans[0] << endl;
    cout << "Maximum Distance: " << ans[1] << endl;

    return 0;
}
