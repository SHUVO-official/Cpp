/*Find the element x in the array.Take array and x as a input*/

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the size of array: ";
            cin>>n;
            int arr[n]; //0 to (n-1)
            cout<<"Enter the element of array index: ";
            //input
            for(int i=0;i<=n-1;i++)
                {
                    cin>>arr[i];
                }
            int x;
            cout<<"Enter the element you want to search: ";
            cin>>x;
            //search
            bool flag=false;    
                for(int i=0;i<=n-1;i++)
                    {
                        if(arr[i]==x) flag=true;
                    }
            if(flag==true) cout<<"Present.";
            else cout<<"404 not found.";
                }