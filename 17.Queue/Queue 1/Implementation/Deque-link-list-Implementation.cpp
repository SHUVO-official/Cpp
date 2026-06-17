#include <bits/stdc++.h>
using namespace std;
    class Node
        {
            public:
            int val;
            Node* prev;
            Node* next;
            Node(int val)
                {
                    this->val=val;
                    this->next=NULL;
                    this->prev=NULL;
                }
        };
    class Queue
        {
            public:
            Node* head;
            Node* tail;
            int size;
            Queue()
                {
                    head=tail=NULL;
                    size=0;
                }    
            void pop_back()
                {
                    Node* temp=tail->prev;
                    temp->next=NULL;
                    size--;
                }    
            void pop_front()
                    {
                        head=head->next;
                        if(head != NULL) head->prev=NULL;
                        if(head == NULL) tail=NULL;
                        size--;
                    }
            void push_front(int val)
                {
                    Node* temp=new Node(val);
                    if(size == 0) head=tail=temp;
                    else
                        {
                            temp->next=head;
                            head->prev=temp;
                            head=temp;
                        }
                        size++;
                }    
            void push_back(int val)
                {
                    Node* temp=new Node(val);
                    if(size == 0) head=tail=temp;
                    else
                        {
                            tail->next=temp;
                            temp->prev=tail;
                            tail=temp;
                        }
                        size++;
                }
            int front()
                {
                    if(size == 0)
                        {
                            cout<<"Queue is empty.";
                            return -1;
                        }
                    return head->val;    
                } 
            int back()
                {
                    if(size == 0)
                        {
                            cout<<"Queue is empty.";
                            return -1;
                        }
                    return tail->val;    
                }
            int s()
                {
                    return size;
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
            Queue q;
            q.push_back(10);
            q.push_back(20);
            q.push_back(30);
            q.push_back(40);
            q.push_back(50);
            q.push_back(60);
            q.display();
            cout<<"Size: "<<q.s()<<" Front: "<<q.front()<<" Back: "<<q.back()<<endl;
            q.push_front(70);
            q.push_front(80);
            q.display();
            cout<<"Size: "<<q.s()<<" Front: "<<q.front()<<" Back: "<<q.back()<<endl;
            q.pop_back();
            q.pop_back();
            q.pop_front();
            q.display();
            cout<<"Size: "<<q.s()<<" Front: "<<q.front()<<" Back: "<<q.back()<<endl;
        }