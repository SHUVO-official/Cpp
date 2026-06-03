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
    vector<Node*> splitListToParts(Node* head, int k) {
        // Step 1: লিস্টের দৈর্ঘ্য বের করো
        int n = 0;
        Node* curr = head;
        while (curr != NULL) {
            n++;
            curr = curr->next;
        }

        // Step 2: base size এবং extra বের করো
        int partSize = n / k;
        int extra = n % k;

        vector<Node*> result;
        curr = head;

        // Step 3: লিস্ট ভাগ করা
        for (int i = 0; i < k; i++) {
            int currentPartSize = partSize + (i < extra ? 1 : 0);
            if (currentPartSize == 0) {
                result.push_back(NULL);
                continue;
            }

            Node* partHead = curr;
            for (int j = 1; j < currentPartSize; j++) {
                curr = curr->next;
            }

            Node* nextPart = curr->next;
            curr->next = NULL;
            curr = nextPart;

            result.push_back(partHead);
        }

        return result;
    }
};

int main() {
    // Example Linked List: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
    Node* head = new Node(1);
    Node* curr = head;
    for (int i = 2; i <= 10; i++) {
        curr->next = new Node(i);
        curr = curr->next;
    }

    Solution s;
    int k = 3;
    vector<Node*> parts = s.splitListToParts(head, k);

    cout << "Split Parts:" << endl;
    for (int i = 0; i < k; i++) {
        cout << "Part " << i+1 << ": ";
        display(parts[i]);
    }

    return 0;
}
