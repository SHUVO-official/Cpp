#include <bits/stdc++.h>
using namespace std;

// Node ক্লাস: Linked List এর প্রতিটি element কে represent করে
class Node
{
    public:
    int val;        // ডাটা রাখবে
    Node* next;     // পরের Node এর ঠিকানা রাখবে
    Node(int val)   // Constructor: নতুন Node তৈরি হলে value সেট করবে
    {
        this->val=val;
        this->next=NULL; // শুরুতে next NULL থাকবে
    }
};

// Linked List ক্লাস: পুরো লিস্ট ম্যানেজ করবে
class LinkList
{
    public:
    Node* head;   // লিস্টের প্রথম Node
    Node* tail;   // লিস্টের শেষ Node
    int size;     // লিস্টে কয়টা Node আছে

    LinkList()    // Constructor: শুরুতে লিস্ট খালি থাকবে
    {
        head=tail=NULL;
        size=0;
    }

    // Tail এ নতুন Node যোগ করা
    void insertAtTail(int val)
    {
        Node* temp=new Node(val); // নতুন Node তৈরি
        if(size==0) head=tail=temp; // যদি লিস্ট খালি হয়, head ও tail একই হবে
        else
        {
            tail->next=temp; // পুরনো tail এর সাথে নতুন Node লিঙ্ক করো
            tail=temp;       // tail আপডেট করো
        }
        size++; // লিস্টের সাইজ বাড়াও
    }

    // Head এ নতুন Node যোগ করা
    void insertAtHead(int val)
    {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp; // খালি হলে head ও tail একই হবে
        else
        {
            temp->next=head; // নতুন Node এর next হবে পুরনো head
            head=temp;       // head আপডেট হবে নতুন Node
        }
        size++;
    }

    // নির্দিষ্ট index এ Node যোগ করা
    void insertAtidx(int idx,int val)
    {
        if(idx<0 || idx>size) cout<<"invalid index"<<endl; // ভুল index হলে error
        else if(idx==0) insertAtHead(val);   // যদি 0 হয়, head এ insert করো
        else if(idx==size) insertAtTail(val); // যদি size হয়, tail এ insert করো
        else
        {
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++) // index এর আগের Node পর্যন্ত যাও
            {
                temp=temp->next;
            }
            t->next=temp->next; // নতুন Node এর next হবে temp এর পরের Node
            temp->next=t;       // temp এর next হবে নতুন Node
            size++;
        }
    }

    // নির্দিষ্ট index এর value বের করা
    int getAtidx(int idx)
    {
        if(idx<0 || idx>=size) // ভুল index হলে error
        {
            cout<<"Invalid!!!"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;       // প্রথম Node এর মান
        else if(idx==size-1) return tail->val;  // শেষ Node এর মান
        else
        {
            Node* temp=head;
            for(int i=1;i<=idx;i++) // index পর্যন্ত যাও
            {
                temp=temp->next;
            }
            return temp->val;
        }
    }

    // Head থেকে Node ডিলিট করা
    void deleteAtHead()
    {
        if(size==0)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        head=head->next; // head কে পরের Node এ শিফট করো
        size--;
    }

    // Tail থেকে Node ডিলিট করা
    void deleteAtTail()
    {
        if(size==0)
        {
            cout<<"List is empty!!!"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next != tail) // tail এর আগের Node পর্যন্ত যাও
        {
            temp=temp->next;
        }
        temp->next=NULL; // নতুন tail এর next NULL হবে
        tail=temp;       // tail আপডেট করো
        size--;
    }

    // নির্দিষ্ট index থেকে Node ডিলিট করা
    void deleteAtidx(int idx)
    {
        if(size==0)
        {
            cout<<"Invalid Index";
            return;
        }
        else if(idx<0 || idx>=size)
        {
            cout<<"Invalid!!!";
            return;
        }
        else if(idx==0) return deleteAtHead();     // head ডিলিট
        else if(idx==size-1) return deleteAtTail(); // tail ডিলিট
        else
        {
            Node* temp=head;
            for(int i=1;i<=idx-1;i++) // index এর আগের Node পর্যন্ত যাও
            {
                temp=temp->next;
            }
            temp->next=temp->next->next; // index এর Node বাদ দিয়ে লিঙ্ক করো
            size--;
        }
    }

    // পুরো লিস্ট প্রিন্ট করা
    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" "; // প্রতিটি Node এর মান প্রিন্ট করো
            temp=temp->next;
        }
        cout<<endl;
    }
};

// Main function: Linked List এর সব অপারেশন টেস্ট করা
int main()
{
    LinkList ll;
    ll.insertAtTail(10);   // Tail এ 10 যোগ
    ll.display();

    ll.insertAtTail(56);   // Tail এ 56 যোগ
    ll.display();

    ll.insertAtTail(450);  // Tail এ 450 যোগ
    ll.display();

    ll.insertAtHead(5000); // Head এ 5000 যোগ
    ll.display();

    ll.insertAtHead(2300); // Head এ 2300 যোগ
    ll.display();

    ll.insertAtidx(3,67);  // index 3 এ 67 যোগ
    ll.display();

    // cout<<ll.getAtidx(3); // index 3 এর মান বের করা (কমেন্ট করা আছে)

    ll.deleteAtHead();     // Head ডিলিট
    ll.display();

    ll.deleteAtTail();     // Tail ডিলিট
    ll.display();

    ll.deleteAtidx(2);     // index 2 এর Node ডিলিট
    ll.display();
}
