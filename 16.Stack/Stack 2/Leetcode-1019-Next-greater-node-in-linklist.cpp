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

void display(vector<int>& result) {
    for (int x : result) cout << x << " ";
    cout << endl;
}

vector<int> nextGreaterNodes(Node* head) {
    // Step 1: Linked list কে array তে convert করা
    vector<int> v;
    Node* temp = head;
    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }

    vector<int> res(v.size(), 0);
    stack<int> stk; // index রাখার জন্য

    // Step 2: Stack দিয়ে Next Greater Node বের করা
    int n=v.size();
    for (int i = n - 1; i >= 0; i--) {

        // Pop elements from the stack that are less
        // than or equal to the current element
        while (!stk.empty() && stk.top() <= v[i]) {
            stk.pop();
        }

        // If the stack is not empty, the top element
        // is the next greater element
        if (!stk.empty()) {
            res[i] = stk.top();
        }

        // Push the current element onto the stack
        stk.push(v[i]);
    }

    return res;
}

int main() {
    // Linked List বানানো: 2 -> 1 -> 5
    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(5);

    vector<int> ans = nextGreaterNodes(head);

    cout << "Next Greater Nodes: ";
    display(ans);

    return 0;
}
