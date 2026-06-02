#include <iostream>
using namespace std;
    int main()
    {
        int n,l=0,r=0;          //l=last digit,r=revers number;
        cout<<"Enter a number: ";
        cin>>n;
        while(n>0)
            {
                r*=10;
                l=n%10;
                r+=l;
                n/=10;

            }
            cout<<r;

    }