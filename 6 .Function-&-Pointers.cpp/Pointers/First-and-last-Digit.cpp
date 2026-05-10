#include <iostream>
using namespace std;
    void fun(int n,int* p1,int* p2)
        {
            *p2=n%10;
            while(n>9)
                {
                    n/=10;
                }
            *p1=n;
            return;    
        }
    int main()
        {
            int n;
            cout<<"Enter number: ";
            cin>>n;
            int firstdigit,lastdigit;
            int* p1=&firstdigit;
            int* p2=&lastdigit;
            fun(n,p1,p2);
            cout<<"First digit= "<<firstdigit<<endl<<"Last Digit= "<<lastdigit;
        }