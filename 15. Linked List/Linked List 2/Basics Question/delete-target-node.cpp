#include <bits/stdc++.h>
using namespace std;

// Node ক্লাস: লিঙ্কড লিস্টের প্রতিটি নোডে data (val) আর next pointer থাকে
class Node
{
    public:
    int val;       // নোডের মান
    Node* next;    // পরবর্তী নোডের ঠিকানা

    Node(int val)  // Constructor দিয়ে নতুন নোড বানানো
    {
        this->val = val;
        this->next = NULL;
    }
};

// লিস্ট প্রিন্ট করার ফাংশন
void display(Node* head)
{
    while(head != NULL)   // যতক্ষণ না NULL পাওয়া যায়
    {
        cout << head->val << " ";  // নোডের মান প্রিন্ট করো
        head = head->next;         // পরবর্তী নোডে যাও
    }
    cout << endl;
}

// নির্দিষ্ট target নোড ডিলিট করার ফাংশন
Node* deltarNode(Node* head, Node* target)
{
    // যদি head-ই target হয় → সরাসরি head বাদ দিয়ে পরের নোডকে নতুন head বানাও
    if(head == target)
    {
        head = head->next;
        return head;
    }

    // অন্যথায় target-এর আগের নোড খুঁজে বের করো
    Node* temp = head;
    while(temp->next != target)   // যতক্ষণ না target পাওয়া যায়
    {
        temp = temp->next;
    }

    // target বাদ দিয়ে লিস্টকে জোড়া লাগানো
    temp->next = temp->next->next;

    return head;  // নতুন head রিটার্ন করো
}

int main()
{
    // ৫টা নোড বানানো হলো
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // লিঙ্কড লিস্ট তৈরি: 10 → 20 → 30 → 40 → 50
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* head = a;   // head হলো প্রথম নোড

    display(a);       // প্রথমে পুরো লিস্ট দেখাও

    head = deltarNode(a, d);   // target = d (মানে 40) ডিলিট করো

    display(head);    // নতুন লিস্ট দেখাও
}
