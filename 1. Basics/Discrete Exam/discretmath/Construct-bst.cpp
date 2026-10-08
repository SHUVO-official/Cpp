#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int x)
{
    Node *newNode = new Node();

    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* insert(Node *root, int x)
{
    if(root == NULL)
        return createNode(x);

    if(x < root->data)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    return root;
}

void inorder(Node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

int main()
{
    ifstream fin("input.txt");

    int n;
    fin >> n;

    Node *root = NULL;

    for(int i=0; i<n; i++)
    {
        int x;
        fin >> x;

        root = insert(root, x);
    }

    cout << "Binary Search Tree Inorder: ";

    inorder(root);

    fin.close();

    return 0;
}




































// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node* createNode(int x)
// {
//     struct Node *newNode;

//     newNode = (struct Node*)malloc(sizeof(struct Node));

//     newNode->data = x;
//     newNode->left = NULL;
//     newNode->right = NULL;

//     return newNode;
// }

// struct Node* insert(struct Node *root, int x)
// {
//     if(root == NULL)
//         return createNode(x);

//     if(x < root->data)
//         root->left = insert(root->left, x);
//     else
//         root->right = insert(root->right, x);

//     return root;
// }

// void inorder(struct Node *root)
// {
//     if(root == NULL)
//         return;

//     inorder(root->left);

//     printf("%d ", root->data);

//     inorder(root->right);
// }

// int main()
// {
//     FILE *fin = fopen("input.txt", "r");

//     int n;
//     fscanf(fin, "%d", &n);

//     struct Node *root = NULL;

//     for(int i=0; i<n; i++)
//     {
//         int x;

//         fscanf(fin, "%d", &x);

//         root = insert(root, x);
//     }

//     printf("Binary Search Tree Inorder: ");

//     inorder(root);

//     fclose(fin);

//     return 0;
// }


















// #include <stdio.h>
// // printf(), fscanf(), fclose(), fopen() ইত্যাদি function ব্যবহার করার জন্য
// // stdio.h header file include করা হয়েছে।

// #include <stdlib.h>
// // malloc() এবং memory allocation-এর জন্য stdlib.h ব্যবহার করা হয়েছে।


// // Binary Search Tree-এর একটি node তৈরি করার জন্য structure
// struct Node
// {
//     int data;
//     // Node-এর মধ্যে যে value থাকবে তা রাখার জন্য data variable।

//     struct Node *left;
//     // বাম পাশের child node-এর address রাখবে।

//     struct Node *right;
//     // ডান পাশের child node-এর address রাখবে।
// };


// // নতুন একটি node তৈরি করার function
// struct Node* createNode(int x)
// {
//     struct Node *newNode;
//     // নতুন node-এর address রাখার জন্য একটি pointer তৈরি করা হলো।

//     newNode = (struct Node*)malloc(sizeof(struct Node));
//     // নতুন একটি Node-এর জন্য memory allocate করা হচ্ছে।
//     // malloc() memory থেকে প্রয়োজনীয় জায়গা তৈরি করে।
//     // sizeof(struct Node) দিয়ে Node-এর প্রয়োজনীয় size নেওয়া হচ্ছে।

//     newNode->data = x;
//     // নতুন node-এর data-এর মধ্যে x value রাখা হচ্ছে।

//     newNode->left = NULL;
//     // নতুন node-এর কোনো left child এখনো নেই।
//     // তাই left = NULL করা হয়েছে।

//     newNode->right = NULL;
//     // নতুন node-এর কোনো right child এখনো নেই।
//     // তাই right = NULL করা হয়েছে।

//     return newNode;
//     // তৈরি করা node-এর address return করা হচ্ছে।
// }


// // BST-এর মধ্যে নতুন value insert করার function
// struct Node* insert(struct Node *root, int x)
// {
//     if(root == NULL)
//         return createNode(x);
//     // যদি tree ফাঁকা থাকে, তাহলে নতুন node তৈরি করে
//     // সেটিকে root হিসেবে return করা হবে।


//     if(x < root->data)
//         root->left = insert(root->left, x);
//     // যদি নতুন value x, current root-এর data-এর চেয়ে ছোট হয়,
//     // তাহলে value-টি left side-এ যাবে।
//     //
//     // insert() function আবার call করা হচ্ছে।
//     // এভাবে যতক্ষণ পর্যন্ত empty জায়গা পাওয়া না যায়,
//     // ততক্ষণ left side-এ যাওয়া হবে।


//     else
//         root->right = insert(root->right, x);
//     // যদি x, root-এর data-এর চেয়ে বড় বা সমান হয়,
//     // তাহলে value-টি right side-এ যাবে।
//     //
//     // একইভাবে right side-এ recursive call হবে।


//     return root;
//     // শেষ পর্যন্ত current root-এর address return করা হচ্ছে।
// }


// // BST-এর elements inorder traversal করার function
// void inorder(struct Node *root)
// {
//     if(root == NULL)
//         return;
//     // যদি কোনো node না থাকে, তাহলে function এখানেই শেষ হবে।


//     inorder(root->left);
//     // প্রথমে বাম পাশের সব node visit করা হবে।


//     printf("%d ", root->data);
//     // এরপর current node-এর data print করা হবে।


//     inorder(root->right);
//     // সবশেষে ডান পাশের node-গুলো visit করা হবে।
// }


// // Main function
// int main()
// {
//     FILE *fin = fopen("input.txt", "r");
//     // input.txt file-টি read mode-এ open করা হচ্ছে।
//     // "r" মানে read mode।
//     // fin হলো file pointer।


//     int n;
//     // মোট কতগুলো number input নেওয়া হবে তা রাখার জন্য n variable।


//     fscanf(fin, "%d", &n);
//     // input.txt থেকে প্রথম number নিয়ে n-এর মধ্যে রাখা হচ্ছে।
//     // যেমন input-এ প্রথমে 6 থাকলে n = 6 হবে।


//     struct Node *root = NULL;
//     // শুরুতে Binary Search Tree empty।
//     // তাই root = NULL রাখা হয়েছে।


//     for(int i=0; i<n; i++)
//     {
//         // n সংখ্যক value input নেওয়ার জন্য loop।
//         // এখানে n = 6 হলে loop মোট 6 বার চলবে।

//         int x;
//         // প্রতিবার একটি value রাখার জন্য x variable তৈরি করা হলো।


//         fscanf(fin, "%d", &x);
//         // input.txt থেকে একটি value নিয়ে x-এর মধ্যে রাখা হচ্ছে।


//         root = insert(root, x);
//         // x value-টি Binary Search Tree-এর মধ্যে insert করা হচ্ছে।
//         // প্রথমবার root তৈরি হবে।
//         // পরের value-গুলো BST-এর নিয়ম অনুযায়ী
//         // left অথবা right side-এ যাবে।
//     }


//     printf("Binary Search Tree Inorder: ");
//     // Output-এর শুরুতে এই text print করা হচ্ছে।


//     inorder(root);
//     // তৈরি করা Binary Search Tree-এর inorder traversal করা হচ্ছে।
//     // Inorder-এর নিয়ম:
//     // Left -> Root -> Right


//     fclose(fin);
//     // input.txt file বন্ধ করা হচ্ছে।


//     return 0;
//     // Program successfully শেষ হয়েছে বোঝাতে 0 return করা হচ্ছে।
// }