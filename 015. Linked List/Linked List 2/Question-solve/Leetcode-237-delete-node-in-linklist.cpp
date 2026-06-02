#include <bits/stdc++.h>
using namespace std;
    class Node
        {
            public:
            int val;
            Node* next;
            Node(int val)   
                {
                    this->val=val;
                    this->next=NULL;
                }
        };
    class solution
        {
            public:
            void delnode(Node* target)
                {
                    target->val=target->next->val;
                    target->next=target->next->next;
                }
        }; 
    void display(Node* head)
        {
            while(head != NULL)
                {
                    cout<<head->val<<" ";
                    head=head->next;
                }
                cout<<endl;
        }       
    int main()
        {
            Node* head=new Node(10);
            head->next=new Node(20);
            head->next->next=new Node(30);
            head->next->next->next=new Node(40);
            head->next->next->next->next=new Node(50);

            display(head);

            solution s;
            s.delnode(head->next->next);
            display(head);

        }