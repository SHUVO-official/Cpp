//Ques: Binary search in decreaasing order

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={10,7,6,4,2,1};
            int target=2;

            int lo=0,hi=v.size()-1;
            bool flag=false;
            while(lo<=hi)
                {
                    int mid=(lo+hi)/2;
                    if(v[mid]==target) 
                        {
                            flag=true;
                            cout<<mid;
                            break;
                        }
                    else if(v[mid]>target) lo=mid+1;
                    else hi=mid-1;    
                }
            if(flag==false) cout<<"Not found";  
        }