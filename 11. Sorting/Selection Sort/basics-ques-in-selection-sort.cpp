#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            int arr[]={4,-2,9,-30};
            int n=4;
            for(int ele:arr)
                {
                    cout<<ele<<" ";
                }
                cout<<endl;
            
            //selection sort
            for(int i=0;i<n-1;i++)
                {
                    int mindx=i;
                    for(int j=i+1;j<n;j++)
                        {
                            if(arr[j]<arr[mindx]) mindx=j;
                        }
                        swap(arr[i],arr[mindx]);
                }
             for(int ele:arr)
                {
                    cout<<ele<<" ";
                }
        }