/*Count the number of elements in the given array greater than a given number a*/

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter size of array: ";
            cin>>n;

            int x[n];  //0 to (n-1)

            cout<<"Enter element: ";
            //intput
            for(int i=0;i<=(n-1);i++) //input
                {
                    cin>>x[i];
                }

            int a;
            cout<<"Enter the element you want to search: " ;
            cin>>a;
            //search
             int count=0;
             for(int i=0;i<=n-1;i++)
                {
                    if(x[i]>a) count++;
                }
              cout<<count;  
            }