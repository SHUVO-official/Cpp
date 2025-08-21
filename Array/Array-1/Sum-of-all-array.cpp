/*Calculate the sum of all the elements in the given array*/

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the size of array: ";
            cin>>n;
            int x[n];  //0 to (n-1)
            //input
            for(int i=0;i<=n-1;i++)
                {
                    cin>>x[i];
                }
            int sum=0;
            //output
            for(int i=0;i<=n-1;i++)
                {
                    sum+=x[i];
                } 
             cout<<"The sum of all array: "<<sum;      
        }