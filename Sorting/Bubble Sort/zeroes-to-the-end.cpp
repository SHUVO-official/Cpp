//Ques: Push zeroes to end while maintaining the relatiove order of the elements.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={5,0,1,2,0,0,4,0,3};



            for(int i=0;i<v.size()-1;i++)//    (n-1)=passes
                //traverse
                {
                    for(int j=0;j<v.size()-1-i;j++)
                        {
                            if(v[j]==0) swap(v[j],v[j+1]);
                        }
                }
                
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }    
        }