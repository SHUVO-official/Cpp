//Ques: Make a function which calculates 'a' reised to the power 'b' using recursion

#include <bits/stdc++.h>
using namespace std;
    int pow(int a,int b)
        {
            if(b==0) return 1;
            else if(a==0) return 0;
            else if(a==0 && b==0)
                    {
                        cout<<"Math Error: ";
                        return 000;
                    }
            return a*pow(a,b-1);        
        }

    int main()
        {
            int a;
            cout<<"Enter Base: ";
            cin>>a;
            int b;
            cout<<"Enter Exponent: ";
            cin>>b;
            cout<<a<<" raised to the power "<<b<<" is : "<<pow(a,b);
        }