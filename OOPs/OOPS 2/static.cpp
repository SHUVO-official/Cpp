#include <bits/stdc++.h>  
using namespace std; 

// Cricketer নামে একটা class বানানো হলো
class Cricketer
{
    public:                // public মানে বাইরে থেকে access করা যাবে
    string name;           // খেলোয়াড়ের নাম রাখার জন্য ভ্যারিয়েবল
    int age, matches;      // বয়স আর কতগুলো ম্যাচ খেলেছে সেটা রাখার জন্য ভ্যারিয়েবল
    float avgruns;         // গড় রান রাখার জন্য ভ্যারিয়েবল

    // ইনপুট নেওয়ার ফাংশন
    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter number of test matches:  ";
        cin>>matches;
        cout<<"Enter average runs: ";
        cin>>avgruns;
    }

    // আউটপুট দেখানোর ফাংশন
    void output()
    {
        cout<<"Name: "<<name
            <<" ,Age: "<<age
            <<" ,Matches: "<<matches
            <<" ,Avg Runs: "<<avgruns<<endl;
    }   
};

int main()
{
    Cricketer players[20];   // static array → 20 জন cricketer এর জায়গা তৈরি হলো

    cout<<"Enter records of 2 crickters: "<<endl;

    // ইনপুট নেওয়ার লুপ (2 জনের জন্য)
    for(int i=0;i<2;i++)
    {
        cout<<"Crickter "<<i+1<<endl;
        players[i].input();   // প্রতিটি object এর input() কল হচ্ছে
    }

    cout<<"--- Cricketer Records ---"<<endl;

    // আউটপুট দেখানোর লুপ (2 জনের জন্য)
    for(int i=0;i<2;i++)
    {
        players[i].output();  // প্রতিটি object এর output() কল হচ্ছে
    }    

}

