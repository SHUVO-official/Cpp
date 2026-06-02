#include <bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n==0) return;        // base case: যখন n শূন্য হবে তখন ফাংশন থেমে যাবে

    cout<<"MARUF HASAN SHUVO!!!"<<endl;

    // recursive step: প্রতিবার n কমিয়ে আবার ফাংশনকে ডাকছে
    // Execution flow:
    // fun(5) → মেসেজ প্রিন্ট করে তারপর fun(4)
    // fun(4) → মেসেজ প্রিন্ট করে তারপর fun(3)
    // fun(3) → মেসেজ প্রিন্ট করে তারপর fun(2)
    // fun(2) → মেসেজ প্রিন্ট করে তারপর fun(1)
    // fun(1) → মেসেজ প্রিন্ট করে তারপর fun(0)
    // fun(0) → base case → থেমে যাবে
    // মোট ৫ বার মেসেজ প্রিন্ট হবে
    fun(n-1);
}

int main()
{
    fun(5);
}
