//Ques: Find the doublet in the Array whose sum is equal to the given value x.
//এই প্রশ্নটার মানে আমার টার্গেট x এর যে ভালুএ টা দেব ওইটা array এর প্রতি ২ টারে যোগ করলে জেন পাই।

#include <iostream>
#include <vector>
using namespace std;
    int main()
        {
            int x;
            cout<<"Enter target: ";
            cin>>x;

            vector<int> v;

            int n;
            cout<<"Enter array size: ";
            cin>>n;

            cout<<"Enter array element: ";
            for(int i=0;i<n;i++)
                {
                    int a;
                    cin>>a;
                    v.push_back(a);
                }

            for(int i=0;i<v.size()-1;i++)
                {
                    for(int j=i+1;j<v.size();j++)
                        {
                            if(v[i]+v[j]==x)
                                {
                                    cout<<"("<<i<<","<<j<<")"<<endl;
                                }
                        }
                }

        }