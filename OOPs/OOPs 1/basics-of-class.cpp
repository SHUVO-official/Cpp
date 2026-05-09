#include <bits/stdc++.h>
using namespace std;
// player নামে একটা class বানানো হয়েছে
class player
{
    public:                // public মানে বাইরে থেকে access করা যাবে
    int score;             // খেলোয়াড়ের স্কোর রাখার জন্য ভ্যারিয়েবল
    int health;            // খেলোয়াড়ের হেলথ রাখার জন্য ভ্যারিয়েবল

    // খেলোয়াড়ের health দেখানোর জন্য ফাংশন
    void showhealth()
    {
        cout<<"Health is: "<<health<<endl;
    }

    // খেলোয়াড়ের score দেখানোর জন্য ফাংশন
    void showscore()
    {
        cout<<"Score is: "<<score<<endl;
    }
};

int main()
{
    player amit;

    amit.score=90;         // amit এর score সেট করা হলো 90
    amit.health=86;        // amit এর health সেট করা হলো 86

    amit.showhealth();     // amit এর health প্রিন্ট করবে → "Health is: 86"
    amit.showscore();      // amit এর score প্রিন্ট করবে → "Score is: 90"
}
