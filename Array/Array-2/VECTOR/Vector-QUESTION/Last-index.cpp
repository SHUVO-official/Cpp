// Find the last occurence/index of x in array
//এই প্রশ্নটার মানে আমি x এর একটা মান দেব সেটা ভেক্টর এ খুজব শেষ এর দিকে কত নাম্বার index এ আছে।যদি প্রথমে কথাঅ থাকে তারপরেও সেশ index no দেবে বা -১ দেবে।


#include <iostream>
#include <vector>   
using namespace std;
    int main()
        {
            vector<int> v;
            v.push_back(9);
            v.push_back(10);
            v.push_back(6);
            v.push_back(12);
            v.push_back(11);
            v.push_back(6);
            v.push_back(0);   
            int x=6;
            int idx=-1;
            // for(int i=0;i<v.size();i++)
            //     {
            //         if(v[i]==x) idx=i;
            //     }
            for(int i=v.size()-1;i>=0;i--)
                {
                    if(v[i]==x) 
                        {
                            idx=i;
                            break;
                        }

                }
                cout<<idx;

        } 