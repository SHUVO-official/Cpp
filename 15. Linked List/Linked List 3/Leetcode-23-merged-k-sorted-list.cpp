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

void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Merge two sorted lists (helper function)
Node* mergeTwoLists(Node* a, Node* b) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while (a != NULL && b != NULL) {
        if (a->val <= b->val) {
            temp->next = a;
            a = a->next;
        } else {
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }

    if (a != NULL) temp->next = a;
    else temp->next = b;

    return dummy->next;
}

// Merge k sorted lists
Node* mergeKLists(vector<Node*>& lists) {
    if (lists.empty()) return NULL;

    Node* ans = lists[0];
    for (int i = 1; i < lists.size(); i++) {
        ans = mergeTwoLists(ans, lists[i]);
    }
    return ans;
}

int main() {
    // Example: তিনটা sorted list
    Node* list1 = new Node(1);
    list1->next = new Node(4);
    list1->next->next = new Node(5);

    Node* list2 = new Node(1);
    list2->next = new Node(3);
    list2->next->next = new Node(4);

    Node* list3 = new Node(2);
    list3->next = new Node(6);

    vector<Node*> lists;
    lists.push_back(list1);
    lists.push_back(list2);
    lists.push_back(list3);

    Node* merged = mergeKLists(lists);

    cout << "Merged List: ";
    display(merged);

    return 0;
}
