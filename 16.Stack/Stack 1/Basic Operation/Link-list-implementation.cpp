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

class Stack {
public:
    Node* head;
    int size;
    Stack() {
        head = NULL;
        size = 0;
    }

    // নতুন element যোগ করা (Push)
    void push(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    // উপরের element সরানো (Pop)
    void pop() {
        if (head == NULL) {
            cout << "Stack is empty!!!" << endl;
            return;
        }
        head = head->next;
        size--;
    }

    // উপরের element দেখা (Top)
    int top() {
        if (head == NULL) {
            cout << "Stack is empty!!!" << endl;
            return -1;
        }
        return head->val;
    }

    // Top → Bottom display (default stack order)
    void displayTopToBottom() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Helper recursion function
    void displayReverseHelper(Node* temp) {
        if (temp == NULL) return;
        displayReverseHelper(temp->next);
        cout << temp->val << " ";
    }

    // Bottom → Top display (insertion order)
    void displayBottomToTop() {
        displayReverseHelper(head);
        cout << endl;
    }
};

int main() {
    Stack st;
    cout << st.top() << endl; // Stack empty → -1

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Top -> Bottom: ";
    st.displayTopToBottom();   // Output: 50 40 30 20 10

    cout << "Bottom -> Top: ";
    st.displayBottomToTop();   // Output: 10 20 30 40 50
}

