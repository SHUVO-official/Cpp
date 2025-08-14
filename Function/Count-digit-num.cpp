/*Write a function to count number of digits in a number and then print the squre of this number*/

#include <iostream>
using namespace std;
    int countdigitnumbersqure(int n)
        {
            int count=0;
            while(n>0)
                {
                    count++;
                    n/=10;
                }
                return count*count;
        }
    int main()
        {
            int n;
            cin>>n;
            cout<<countdigitnumbersqure(n);
        }