/*Find the second leargest element in the given array*/

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
            for(int i=0;i<=n-1;i++)
                {
                    cin>>x[i];
                }
            int max=INT_MIN;
            for(int i=0;i<=n-1;i++)
                {
                    if(max<x[i]) max=x[i];
                }
            cout<<"Largest: "<<max<<endl;
            int smax=INT_MIN;
            for(int i=0;i<=n-1;i++)
                {
                    if(max!=x[i] && smax<x[i]) smax=x[i];
                }
            cout<<"Second largest: "<<smax;      

        }