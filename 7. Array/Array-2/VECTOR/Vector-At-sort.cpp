#include <iostream>
#include <algorithm>
#include <vector>   
using namespace std;
    int main()
        {
            // //At এর ব্যবহার
            // vector<int> v;
            // v.push_back(6);
            // v.push_back(1);
            // v.push_back(9);
            // v.push_back(10);
            // // cout<<v[2]<<endl;
            // // cout<<v.at(2)<<endl;
            // // v.at(2)=4545;
            // // cout<<v.at(2)<<endl;
            // // cout<<v[2]<<endl;
            // for(int i=0;i<v.size();i++)
            //     {
            //         cout<<v.at(i)<<" ";
            //     }

            // sort এর ব্যবহার
            vector<int> v;
            v.push_back(6);
            v.push_back(1);
            v.push_back(9);
            v.push_back(10);
            for(int i=0;i<v.size();i++)
                {
                    cout<<v.at(i)<<" ";
                }
            cout<<endl;
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
                {
                    cout<<v.at(i)<<" ";
                }




            

        }