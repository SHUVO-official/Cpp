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

class Solution {
public:
    Node* mergeInBetween(Node* list1, int a, int b, Node* list2) {
        Node* prevA = list1;   // a এর আগের node খুঁজবো
        Node* afterB = list1;  // b এর পরের node খুঁজবো

        // Step 1: prevA কে a-1 position এ নিয়ে যাওয়া
        for (int i = 0; i < a - 1; i++) {
            prevA = prevA->next;
        }

        // Step 2: afterB কে b position এ নিয়ে যাওয়া
        for (int i = 0; i < b; i++) {
            afterB = afterB->next;
        }

        // Step 3: prevA এর next কে list2 এর head এ connect করা
        prevA->next = list2;

        // Step 4: list2 এর শেষ node খুঁজে বের করা
        Node* tail2 = list2;
        while (tail2->next != NULL) {
            tail2 = tail2->next;
        }

        // Step 5: list2 এর শেষ node কে afterB->next এ connect করা
        tail2->next = afterB->next;

        return list1;
    }
};

int main() {
    // List1 তৈরি: 0 -> 1 -> 2 -> 3 -> 4 -> 5
    Node* list1 = new Node(0);
    list1->next = new Node(1);
    list1->next->next = new Node(2);
    list1->next->next->next = new Node(3);
    list1->next->next->next->next = new Node(4);
    list1->next->next->next->next->next = new Node(5);

    // List2 তৈরি: 100 -> 101 -> 102
    Node* list2 = new Node(100);
    list2->next = new Node(101);
    list2->next->next = new Node(102);

    cout << "List1: ";
    display(list1);
    cout << "List2: ";
    display(list2);

    Solution s;
    // a=2, b=4 → List1 এর 2 থেকে 4 পর্যন্ত বাদ যাবে
    Node* merged = s.mergeInBetween(list1, 2, 4, list2);

    cout << "Merged List: ";
    display(merged);

}
