//Ques: Given a sorted integer array arr={1,2,4,5,9,15,18,21,24} and an integer of target 'x'=20 .Find the lower bound of x.
//mane 20 er theke strictly soto konta mane 18 lower bound r 21 upper bound.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={1,2,4,5,9,15,18,21,24};
            int target=20,idx=-1;
            int lo=0,hi=v.size()-1;
            bool flag=false;
            while(lo<=hi)
                {
                    int mid=lo+(hi-lo)/2;
                    if(v[mid]==target)  
                        {
                            flag=true;
                            cout<<v[mid-1];
                            break;
                        }
                    else if(v[mid]>target) hi=mid-1;
                    else if(v[mid]<target) lo=mid+1;    
                }
            if(flag==false) cout<<v[hi];
              
        }