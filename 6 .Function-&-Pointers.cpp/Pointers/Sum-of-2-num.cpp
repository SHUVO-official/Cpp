#include <iostream>
using namespace std;
    int main()
        {
            int x,y;
            int *p1=&x;
            cin>>*p1;
            int *p2=&y;
            cin>>*p2;
            int sum=*p1+*p2;
            cout<<sum;
        }