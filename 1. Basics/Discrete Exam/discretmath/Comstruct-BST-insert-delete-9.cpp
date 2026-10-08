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
    else if(x > root->data)
        root->right = insert(root->right, x);

    return root;
}

bool search(Node *root, int x)
{
    if(root == NULL)
        return false;

    if(root->data == x)
        return true;

    if(x < root->data)
        return search(root->left, x);
    else
        return search(root->right, x);
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

    int item;
    fin >> item;

    if(search(root, item))
    {
        cout << "Item " << item << " is already present in the BST.\n";
    }
    else
    {
        root = insert(root, item);

        cout << "Item " << item << " was not present.\n";
        cout << "Item " << item << " has been inserted into the BST.\n";
    }

    cout << "Inorder Traversal: ";
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
//     else if(x > root->data)
//         root->right = insert(root->right, x);

//     return root;
// }

// int search(struct Node *root, int x)
// {
//     if(root == NULL)
//         return 0;

//     if(root->data == x)
//         return 1;

//     if(x < root->data)
//         return search(root->left, x);
//     else
//         return search(root->right, x);
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

//     int item;
//     fscanf(fin, "%d", &item);

//     if(search(root, item))
//     {
//         printf("Item %d is already present in the BST.\n", item);
//     }
//     else
//     {
//         root = insert(root, item);

//         printf("Item %d was not present.\n", item);
//         printf("Item %d has been inserted into the BST.\n", item);
//     }

//     printf("Inorder Traversal: ");

//     inorder(root);

//     fclose(fin);

//     return 0;
// }




























// #include <stdio.h>
// // printf(), fscanf(), fopen(), fclose() ইত্যাদি function ব্যবহার করার জন্য
// // stdio.h header file include করা হয়েছে।

// #include <stdlib.h>
// // malloc() function ব্যবহার করার জন্য stdlib.h include করা হয়েছে.
// // malloc() নতুন Node-এর জন্য memory allocate করতে সাহায্য করে.



// // Binary Search Tree-এর Node তৈরি করার জন্য structure
// struct Node
// {
//     int data;
//     // Node-এর মধ্যে যে value থাকবে সেটি data-তে রাখা হবে।

//     struct Node *left;
//     // Node-এর left child-এর address রাখবে।

//     struct Node *right;
//     // Node-এর right child-এর address রাখবে।
// };



// // নতুন একটি Node তৈরি করার function
// struct Node* createNode(int x)
// {
//     struct Node *newNode;
//     // নতুন Node-এর address রাখার জন্য pointer তৈরি করা হয়েছে।

//     newNode = (struct Node*)malloc(sizeof(struct Node));
//     // নতুন Node-এর জন্য memory allocate করা হচ্ছে।
//     // sizeof(struct Node) Node-এর প্রয়োজনীয় memory size বের করে।

//     newNode->data = x;
//     // নতুন Node-এর data-এর মধ্যে x value রাখা হচ্ছে।

//     newNode->left = NULL;
//     // নতুন Node-এর কোনো left child নেই।
//     // তাই left = NULL।

//     newNode->right = NULL;
//     // নতুন Node-এর কোনো right child নেই।
//     // তাই right = NULL।

//     return newNode;
//     // তৈরি করা Node-এর address return করা হচ্ছে।
// }



// // BST-এর মধ্যে নতুন value insert করার function
// struct Node* insert(struct Node *root, int x)
// {
//     if(root == NULL)
//         return createNode(x);
//     // যদি root NULL হয়, তাহলে সেখানে কোনো Node নেই।
//     // তাই নতুন Node তৈরি করে return করা হবে।


//     if(x < root->data)
//         root->left = insert(root->left, x);
//     // যদি x, current root-এর data-এর চেয়ে ছোট হয়,
//     // তাহলে x left side-এ যাবে।
//     //
//     // insert() function আবার call হবে।
//     // এভাবে recursiveভাবে সঠিক জায়গা খুঁজে বের করা হবে।


//     else if(x > root->data)
//         root->right = insert(root->right, x);
//     // যদি x, current root-এর data-এর চেয়ে বড় হয়,
//     // তাহলে x right side-এ যাবে।
//     //
//     // এখানে x == root->data হলে কিছু করা হবে না।
//     // অর্থাৎ duplicate value insert হবে না।


//     return root;
//     // Current root-এর address return করা হচ্ছে।
// }



// // BST-এর মধ্যে কোনো নির্দিষ্ট item আছে কি না
// // তা search করার function
// int search(struct Node *root, int x)
// {
//     if(root == NULL)
//         return 0;
//     // যদি root NULL হয়, তাহলে item পাওয়া যায়নি।
//     // তাই 0 return করা হচ্ছে।
//     //
//     // এখানে 0 = Not Found


//     if(root->data == x)
//         return 1;
//     // যদি current Node-এর data এবং x একই হয়,
//     // তাহলে item পাওয়া গেছে।
//     //
//     // তাই 1 return করা হচ্ছে।
//     //
//     // এখানে 1 = Found


//     if(x < root->data)
//         return search(root->left, x);
//     // যদি x, current root-এর চেয়ে ছোট হয়,
//     // তাহলে x অবশ্যই left side-এ থাকার সম্ভাবনা।
//     // তাই left subtree-তে search করা হচ্ছে।


//     else
//         return search(root->right, x);
//     // যদি x, current root-এর চেয়ে বড় হয়,
//     // তাহলে right subtree-তে search করা হচ্ছে।
// }



// // BST-এর elements inorder traversal করার function
// void inorder(struct Node *root)
// {
//     if(root == NULL)
//         return;
//     // যদি কোনো Node না থাকে,
//     // তাহলে function এখানেই শেষ হবে।


//     inorder(root->left);
//     // প্রথমে left subtree-এর elements print হবে।


//     printf("%d ", root->data);
//     // এরপর current Node-এর data print হবে।


//     inorder(root->right);
//     // সবশেষে right subtree-এর elements print হবে।
// }



// // Main function
// int main()
// {
//     FILE *fin = fopen("input.txt", "r");
//     // input.txt file-টি read mode-এ open করা হচ্ছে।
//     // "r" = read mode।
//     // fin হলো file pointer।


//     int n;
//     // প্রথমে মোট কতগুলো BST element আছে
//     // সেটি রাখার জন্য n variable।


//     fscanf(fin, "%d", &n);
//     // input.txt থেকে প্রথম number নিয়ে n-এর মধ্যে রাখা হচ্ছে।
//     // আমাদের input-এ n = 6।


//     struct Node *root = NULL;
//     // শুরুতে BST empty।
//     // তাই root = NULL রাখা হয়েছে।


//     for(int i=0; i<n; i++)
//     {
//         // BST-এর initial elements input নেওয়ার জন্য loop।
//         // n = 6 হলে loop 6 বার চলবে।

//         int x;
//         // প্রতিবার একটি value রাখার জন্য x variable।


//         fscanf(fin, "%d", &x);
//         // input.txt থেকে একটি value নিয়ে x-এর মধ্যে রাখা হচ্ছে।


//         root = insert(root, x);
//         // x value-টি BST-এর মধ্যে insert করা হচ্ছে।
//         //
//         // যেমন:
//         // 5 → root
//         // 3 → 5-এর left
//         // 1 → 3-এর left
//         // 9 → 5-এর right
//         // 6 → 9-এর left
//         // 4 → 3-এর right
//     }



//     int item;
//     // যে item-টি search করতে হবে
//     // সেটি রাখার জন্য item variable।


//     fscanf(fin, "%d", &item);
//     // input.txt থেকে search করার item নেওয়া হচ্ছে।
//     // আমাদের example-এ item = 9।



//     if(search(root, item))
//     {
//         // search() function যদি 1 return করে,
//         // তাহলে item BST-এর মধ্যে পাওয়া গেছে।

//         printf("Item %d is already present in the BST.\n", item);
//         // Item আগে থেকেই BST-তে আছে—এই message print হবে।
//     }


//     else
//     {
//         // search() যদি 0 return করে,
//         // তাহলে item BST-এর মধ্যে নেই।

//         root = insert(root, item);
//         // Item BST-এর মধ্যে insert করা হচ্ছে।


//         printf("Item %d was not present.\n", item);
//         // Item আগে ছিল না—এই message print করা হচ্ছে।


//         printf("Item %d has been inserted into the BST.\n", item);
//         // Item সফলভাবে BST-তে insert হয়েছে—এই message print করা হচ্ছে।
//     }



//     printf("Inorder Traversal: ");
//     // Inorder traversal-এর আগে heading print করা হচ্ছে।


//     inorder(root);
//     // BST-এর inorder traversal করা হচ্ছে।
//     //
//     // Inorder-এর নিয়ম:
//     // Left → Root → Right



//     fclose(fin);
//     // input.txt file বন্ধ করা হচ্ছে।


//     return 0;
//     // Program successfully শেষ হয়েছে।
// }