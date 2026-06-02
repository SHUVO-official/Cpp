//Ques: Given a sorted integer array arr={1,2,4,5,9,15,18,21,24} and an integer of target 'x'=20 .Find the upper bound of x.
//mane 20 er theke strictly boro konta mane 21 upper bound r 18 lower bound.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Sorted vector (ascending order)
    vector<int> v={1,2,4,5,9,15,18,21,24};

    int target=20, idx=-1;   // আমরা 20 খুঁজছি
    int lo=0, hi=v.size()-1; // binary search এর জন্য low এবং high index
    bool flag=false;         // target পাওয়া গেছে কিনা তা track করার জন্য

    while(lo<=hi)            // যতক্ষণ পর্যন্ত search range valid থাকে
    {
        int mid=lo+(hi-lo)/2;   // middle index বের করা

        if(v[mid]==target)      // যদি target পাওয়া যায়
        {
            flag=true;
            cout<<v[mid+1];     // target এর পরের element print করবে
            break;
        }
        else if(v[mid]>target)  // যদি mid element target এর চেয়ে বড় হয়
            hi=mid-1;           // search বাম দিকে যাবে
        else if(v[mid]<target)  // যদি mid element target এর চেয়ে ছোট হয়
            lo=mid+1;           // search ডান দিকে যাবে
    }

    // যদি target পাওয়া না যায়
    if(flag==false) cout<<v[lo]; // তখন lo index এর element print করবে
}
