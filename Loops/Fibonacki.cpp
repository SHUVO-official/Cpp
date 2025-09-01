/*Print the nth fibonaccial number*/
            //Fibonacci num=1 1 2 3 5 8 13 21 34 55 89 ... ...
            //"n"th     num=0 1 2 3 4 5 6  7  8  9  10  
#include <iostream>
using namespace std;
    int main()
    {
        int n,first=0,second=1,next=0;
        cout<<"Enter a number: ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        cout<<second;

    }
