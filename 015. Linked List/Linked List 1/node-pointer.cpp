#include<iostream>
using namespace std;

// Linked List Node class
class Node {
public:
    int val;       // নোডে রাখা ডাটা (value)
    Node* next;    // পরের নোডের ঠিকানা রাখবে pointer

    // Constructor: নতুন নোড বানানোর সময় value সেট করবে
    Node(int val){
        this->val = val;
        this->next = NULL; // শুরুতে কোনো নোডের সাথে লিঙ্ক থাকবে না
    }
};
void display(Node* a)
    {
        while(a!=NULL)
            {
                cout<<a->val<<" ";
                a=a->next;
            }
    }
int size(Node* a)
    {
        int n=0;
        while(a!=NULL)
            {
                n++;
                a=a->next;
            }
            return n;
    }
void displayrec(Node* a)
    {
        if(a==NULL) return;
        cout<<a->val<<" ";
        displayrec(a->next);
    }    
void displayrecrevers(Node* a)
    {
        if(a==NULL) return;
        displayrecrevers(a->next);
        cout<<a->val<<" ";
    }    

int main(){
    // চারটা নোড তৈরি করা হলো
    Node* a = new Node(10); // প্রথম নোডে value = 10
    Node* b = new Node(20); // দ্বিতীয় নোডে value = 20
    Node* c = new Node(30); // তৃতীয় নোডে value = 30
    Node* d = new Node(40); // চতুর্থ নোডে value = 40

    // লিঙ্ক করা হচ্ছে: a -> b -> c -> d
    a->next = b;
    b->next = c;
    c->next = d;
    
    //d value print
    cout<<a->next->next->next->val<<endl;
    
    // display(a);
    // cout << endl;
    // cout<<size(a);

    //recursively display
    displayrec(a);
    cout<<endl;
    //recursively reverse display
    displayrecrevers(a);

    
}