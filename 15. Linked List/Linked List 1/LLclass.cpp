#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val=val;
        this->next = NULL;
    }
};

class LinkedList { // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if(size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll; // object তৈরি
    ll.insertAtEnd(10); // {10->NULL}
    ll.display();
    ll.insertAtEnd(20); // {10->20->NULL}
    ll.display();
    ll.insertAtEnd(30); // {10->20->30->NULL}
    ll.display();       // Output: 10 20 30
}