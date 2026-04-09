// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

            // Example 1:
            // Input: nums = [2,0,2,1,1,0]
            // Output: [0,0,1,1,2,2]

            // Example 2:
            // Input: nums = [2,0,1]
            // Output: [0,1,2]

#include <iostream>
#include <vector>
using namespace std;
    void display(vector<int>& v)
        {
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
        }
    void sort01(vector<int>& v)
        {
            //count
            int noz=0,noo=0,notw=0;
            for(int i=0;i<v.size();i++)
                {
                    if(v[i]==0) noz++;
                    if(v[i]==1) noo++;
                    if(v[i]==2) notw++;
                }

            //filling element
            for(int i=0;i<v.size();i++)
                {
                    if(i<noz) v[i]=0;
                    else if(i<(noz+noo)) v[i]=1;
                    else v[i]=2;
                }
        }    
    int main()
        {
            vector<int> v;
            v.push_back(2);
            v.push_back(1);
            v.push_back(0);
            v.push_back(2);
            v.push_back(0);
            v.push_back(1);
            v.push_back(2);
            v.push_back(1);
            v.push_back(1);

            display(v);
            sort01(v);
            display(v);


        }            