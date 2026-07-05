#include <bits/stdc++.h>
using namespace std;
    class Node
        {
            public:
            int val;
            Node* left;
            Node* right;
            Node(int val)
                {
                    this->val=val;
                    this->left=NULL;
                    this->right=NULL;
                }
        };
    void display(Node* root)
        {
            if(root == NULL) return;
            cout<<root->val<<" ";
            display(root->left);
            display(root->right);
        }    
    int sumof(Node* root)
        {
            if(root == NULL) return 0;
            return root->val+sumof(root->left)+sumof(root->right);
        } 
    int size(Node* root) 
        {
            if(root == NULL) return 0;
            return 1+size(root->left)+size(root->right);
        } 
    int levels(Node* root)
        {
            if(root == NULL) return 0;
            return 1+max(levels(root->left),levels(root->right));
        }
    int maximum(Node* root)
        {
            if(root == NULL) return INT_MIN;
            return max(root->val,max(maximum(root->left),maximum(root->right)));
        }  
    int minimum(Node* root)
        {
            if(root == NULL) return INT_MAX;
            return min(root->val,min(minimum(root->left),minimum(root->right)));
        }               
    int main()
        {
            Node* a=new Node(1);   //root
            Node* b=new Node(-92);
            Node* c=new Node(3);
            Node* d=new Node(989);
            Node* e=new Node(5);
            Node* f=new Node(6);
            Node* g=new Node(7);

            a->left=b;
            a->right=c;
            b->left=d;
            b->right=e; 
            c->left=f;
            c->right=g;

            display(a);
            cout<<endl;
            cout<<"Sum of all Node: "<<sumof(a)<<endl;
            cout<<"The size: "<<size(a)<<endl;
            cout<<"The level is: "<<levels(a)<<endl;
            cout<<"The maximum is: "<<maximum(a)<<endl;
            cout<<"The minimum is: "<<minimum(a);

        }