#include <bits/stdc++.h>
using namespace std;

class Node { // Linked List Node ক্লাস
public:
    int val;        // প্রতিটি নোডে একটি integer value থাকবে
    Node* next;     // পরের নোডের pointer (next node এর ঠিকানা রাখবে)

    Node(int val){  // Constructor: নতুন নোড বানানোর সময় value সেট করবে
        this->val = val;      // বর্তমান নোডের value সেট করা
        this->next = NULL;    // শুরুতে next কে NULL করা (মানে কোনো লিঙ্ক নেই)
    }
};

int main(){
    Node a(10);   // প্রথম নোড বানানো, value = 10
    Node b(20);   // দ্বিতীয় নোড, value = 20
    Node c(30);   // তৃতীয় নোড, value = 30
    Node d(40);   // চতুর্থ নোড, value = 40

    // এখন লিঙ্ক করে দিচ্ছি
    a.next = &b;  // a এর পরের নোড হবে b
    b.next = &c;  // b এর পরের নোড হবে c
    c.next = &d;  // c এর পরের নোড হবে d

    // এখন আমরা d এর value প্রিন্ট করতে চাই
    cout << (((a.next)->next)->next)->val << endl;  

}