#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            int arr[]={4,-2,-30,9,6,344};
            int n=6;
            for(int ele:arr)
                {
                    cout<<ele<<" ";
                }
                cout<<endl;
            
            //insertion sort
            for(int i=0;i<n-1;i++)
                {
                    for(int j=i;j>=1 && arr[j]<arr[j-1];j--)
                        {
                            swap(arr[j],arr[j-1]);
                        }
                }
             for(int ele:arr)
                {
                    cout<<ele<<" ";
                }
        }