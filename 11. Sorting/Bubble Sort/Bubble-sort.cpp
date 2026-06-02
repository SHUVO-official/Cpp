#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<int> v={5,1,2,3,4};



            // for(int i=0;i<v.size()-1;i++)//    (n-1)=passes
            //     //traverse
            //     {
            //         for(int j=0;j<v.size()-1;j++)
            //             {
            //                 if(v[j]>v[j+1]) swap(v[j],v[j+1]);
            //             }
            //     }

            //bubble sort optimised
            for(int i=0;i<v.size()-1;i++)//    (n-1)=passes
                //traverse
                {
                    bool flag=true;
                    for(int j=0;j<v.size()-1-i;j++)
                        {
                            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
                            flag=false;
                        }
                        if(flag==true)
                            {
                                break;
                            }
                }




            
                
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }    
        }