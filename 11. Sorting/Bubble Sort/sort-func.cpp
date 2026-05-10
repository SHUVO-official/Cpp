#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={5,3,7,2,1};
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
                sort(v.end(),v.begin());
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                } 
                reverse(v.end(),v.begin()); 
                for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }  
        }