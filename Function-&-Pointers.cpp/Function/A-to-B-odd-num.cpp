/*Given two numbers a and b,write a function to print all odd numbers between them*/
#include <iostream>
using namespace std;
    void odd(int a,int b)
        {
            if(b>a) swap(a,b);
            for(int i=b;i<=a;i++)
                {
                    if(i%2!=0) cout<<i<<" ";
                }
        }
    int main()
        {
            int a,b;
            cout<<"Write 2 num a & b : ";
            cin>>a>>b;
            odd(a,b);
        }