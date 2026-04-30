//Ques: Given a sorted array of {1,2,2,3,3,3,3,3,4,4,5,8,9} and a target   x='3' .Find the first occurrence of x inthe array.If x does not exist return -1.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={1,2,2,3,3,3,3,3,4,4,5,8,9};
            int target=4,idx=-1;
            int lo=0,hi=v.size()-1;
            bool flag=false;
            while(lo<=hi)
                {
                    int mid=lo+(hi-lo)/2;
                    if(v[mid]==target)  
                        {
                          if(v[mid-1]!=target)
                            {
                                flag=true;
                                cout<<mid;
                                break;
                            }
                           else if(v[mid-1]==target)
                            {
                                hi=mid-1;
                            }   
                            
                        }
                    else if(v[mid]>target) hi=mid-1;
                    else if(v[mid]<target) lo=mid+1;    
                }
            if(flag==false) cout<<-1;
              
        }