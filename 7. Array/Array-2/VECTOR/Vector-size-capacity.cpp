#include <iostream>
#include <vector>   
using namespace std;
    int main()
        {
            vector<int> v;

                //vector size

            // v.push_back(6);
            // cout<<v.size()<<endl;
            // v.push_back(1);
            // cout<<v.size()<<endl;
            // v.push_back(9);
            // cout<<v.size()<<endl;
            // v.push_back(10);
            // cout<<v.size()<<endl;

            //vector capacity
            v.push_back(6);
            cout<<v.capacity()<<endl;
            v.push_back(1);
            cout<<v.capacity()<<endl;
            v.push_back(9);
            cout<<v.capacity()<<endl;
            v.push_back(10);
            cout<<v.capacity()<<endl;
            
            


        }