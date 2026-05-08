#include <bits/stdc++.h>
using namespace std;
    int powr(int a,int b)
        {
            if(a==0) return 0;
            if(b==0) return 1;
            if(b%2==0) return powr(a,b/2)*powr(a,b/2);
            else return powr(a,b/2)*powr(a,b/2)*a;
                
        }
    int main()
        {
            cout<<powr(5,2);
        }