#include <bits/stdc++.h>
using namespace std;
    class Node
        {
            public:
            int val;
            Node* next;
            Node* prev;
            Node(int val)
                {
                    this->val=val;
                    this->next=NULL;
                    this->prev=NULL;
                }
        };
    class Dlinklist
        {
           public: 
           Node* head;
           Node* tail;
           int size;
           Dlinklist()
                {
                    head=tail=NULL;
                    size=0;
                }
            void delatidx(int idx)
                {
                    if(idx==0) delathead();
                    else if(idx==size-1) delatTail();
                    else
                        {
                            Node* temp=head;
                            for(int i=1;i<=idx-1;i++)
                                {
                                    temp=temp->next;
                                }
                               temp->next=temp->next->next; 
                               temp->next->prev=temp;
                               size--;
                        }

                }    
            void insertatidx(int val,int idx)
                {
                    if(idx==0) insertatHead(val);
                    else if(idx==size) insertatTail(val);
                    else
                        {
                            Node* n=new Node(val);
                            Node* temp=head;
                            for(int i=1;i<=idx-1;i++)
                                {
                                    temp=temp->next;
                                }
                                n->next=temp->next;
                                temp->next=n;
                                n->prev=temp;
                                n->next->prev=n;
                                size++;
                        }
                }    
            int getatidx(int idx)
                {
                    if(idx==0) return head->val;
                    else if(idx==size) return tail->val;
                    else    
                        {
                            Node* temp=head;
                            for(int i=1;i<=idx;i++)
                                {
                                    temp=temp->next;
                                }
                            return temp->val;    
                        }
                }    
            void delatTail()
                {
                    if(size==0) 
                        {
                            cout<<"List is empty.";
                            return;
                        }
                    else if(size == 1)
                        {
                            delathead();
                            return;
                        }    
                    Node* temp=tail->prev;
                    temp->next=NULL;
                    tail=temp;
                    size--;    
                }    
            void delathead()
                {
                    head=head->next;
                    if(head!=NULL) head->prev=NULL;
                    if(head==NULL) tail=NULL;
                    size--;
                }    
            void insertatTail(int val)
                {
                    Node* temp=new Node(val);
                    if(size==0) head=tail=temp;
                    else
                        {
                            tail->next=temp;
                            temp->prev=tail;
                            tail=temp;
                        }
                        size++;
                }
            void insertatHead(int val)
                    {
                         Node* temp=new Node(val);
                         if(size==0) head=tail=temp;
                         else
                            {
                                temp->next=head;
                                head->prev=temp;
                                head=temp;
                            }
                            size++;
                    }
            void display()
                {
                    Node* temp=head;
                    while(temp!=NULL)
                        {
                            cout<<temp->val<<" ";
                            temp=temp->next;
                        }
                        cout<<endl;
                }      
        };    
    int main()
        {
            Dlinklist ll;  
            ll.insertatTail(10);
            ll.insertatTail(20);
            ll.insertatTail(30);
            ll.insertatTail(40);
            ll.insertatTail(50);
            
            ll.display();

            // ll.insertatHead(111);
            // ll.display();

            // ll.delathead();
            // ll.display();
            // ll.delatTail();
            // ll.insertatidx(100,3);
            ll.display();
            ll.delatidx(2);
            ll.display();
            cout<<ll.getatidx(1);
        }