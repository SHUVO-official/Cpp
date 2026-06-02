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

// Linked List print করার জন্য function
void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

class Solution {
public:
    Node* getIntersectionNode(Node* headA, Node* headB) {
        Node* tempA = headA;
        Node* tempB = headB;

        // Step 1: লিস্ট A এর length বের করা
        int lenA = 0;
        while (tempA != NULL) {
            lenA++;              // প্রতিবার node count বাড়ানো
            tempA = tempA->next; // পরের node এ যাওয়া
        }

        // Step 2: লিস্ট B এর length বের করা
        int lenB = 0;
        while (tempB != NULL) {
            lenB++;
            tempB = tempB->next;
        }

        // Step 3: আবার শুরু থেকে pointer সেট করা
        tempA = headA;
        tempB = headB;

        // Step 4: বড় লিস্টের head কে difference অনুযায়ী এগিয়ে দেওয়া
        if (lenA > lenB) {
            int dif = lenA - lenB;       // A বড় হলে কতটা বেশি node আছে
            for (int i = 1; i <= dif; i++) {
                tempA = tempA->next;     // A কে এগিয়ে দেওয়া
            }
        } else {
            int dif = lenB - lenA;       // B বড় হলে কতটা বেশি node আছে
            for (int i = 1; i <= dif; i++) {
                tempB = tempB->next;     // B কে এগিয়ে দেওয়া
            }
        }

        // Step 5: এখন দুইটা pointer একসাথে move করবে
        // যদি intersection থাকে, তারা একই node এ মিলবে
        while (tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        // Step 6: intersection node return করা হবে
        // যদি না থাকে, তাহলে NULL return হবে
        return tempA;
    }
};

int main() {
    // Example Linked List তৈরি করা
    // Common অংশ: 30 -> 40 -> 50
    Node* common = new Node(30);
    common->next = new Node(40);
    common->next->next = new Node(50);

    // List A: 10 -> 20 -> (common অংশ)
    Node* headA = new Node(10);
    headA->next = new Node(20);
    headA->next->next = common;

    // List B: 15 -> (common অংশ)
    Node* headB = new Node(15);
    headB->next = common;

    cout << "List A: ";
    display(headA);
    cout << "List B: ";
    display(headB);

    Solution s;
    Node* intersection = s.getIntersectionNode(headA, headB);

    if (intersection != NULL) {
        cout << "Intersection Node Value: " << intersection->val << endl;
    } else {
        cout << "No Intersection Found" << endl;
    }

    return 0;
}
