#include <bits/stdc++.h>
using namespace std; 
void print(int i,int n)
    {
        if(i>n) return;
        cout<<i<<endl;
        print(i+1,n);
        
    }

int main()
    {
        int n,i=1;
        cin>>n;
        print(i,n);
    }