/*Find the maximum value out of all the elements in the array*/
#include <iostream>
#include <climits>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the size of array: ";
            cin>>n;
            int x[n];
            cout<<"Enter the element of array: ";
            for(int i=0;i<=(n-1);i++) //input
                {
                    cin>>x[i];
                }
            int max=INT_MIN;
            for(int i=0;i<=n-1;i++)
                {
                    if(max<x[i]) max=x[i];
                }
            cout<<max;    
        }