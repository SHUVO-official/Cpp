/*Print the nth fibonaccial number*/
            //Fibonacci num=1 1 2 3 5 8 13 21 34 55 89 ... ...
            //"n"th     num=1 2 3 4 5 6 7  8  9  10 11 ... ...
#include <iostream>
using namespace std;
    int main()
    {
        int n,a=1,b=1,sum=0;
        cout<<"Enter a number: ";
        cin>>n;
        for(int i=1;i<=n-2;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        cout<<b;

    }
