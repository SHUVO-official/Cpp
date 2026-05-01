//Ques: Given an array of integers nums containing n+1 integers where each integer is in the range [1+n] inclusive in sorted order.
//There is only one reapeated number in nums,return this reapeated number.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={1,2,3,4,5,5,6,7,8};

            int lo=0,hi=v.size()-1;

            while(lo<=hi)
                {
                    int mid=(lo+hi)/2;
                    if(v[mid] == mid+1) lo=mid+1;
                    if(v[mid] == mid)
                        {
                            if(v[mid]==v[mid-1])
                                {
                                    cout<<v[mid];
                                    break;
                                }
                            else hi=mid-1;     
                        }
                }
        }