#include <iostream>
using namespace std;
    int main()
    {
        int n,sum=0,l=0;   //l=last  digit
        cout<<"Enter aa number: ";
        cin>>n;
        while(n>0)
                {
                    l=n%10;
                    sum=sum+l;
                    n/=10;
                }
                cout<<sum;


    }