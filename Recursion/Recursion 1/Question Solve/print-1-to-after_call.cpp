#include <bits/stdc++.h>
using namespace std;       
void print(int i,int n)
{
    if(i>n) return;        // base case: যখন i > n হবে তখন recursion থেমে যাবে

    print(i+1,n);          // recursive call: প্রথমে i+1 থেকে n পর্যন্ত প্রিন্ট করবে

    cout<<i<<endl;         // তারপর বর্তমান i প্রিন্ট করবে (এভাবে উল্টো ক্রমে প্রিন্ট হবে)
}

int main()
{
    int n,i=1;             
    cin>>n;                
    print(i,n);
}
