//Ques: Write a program to copy the content of one array into another in the reverse order.
//মানে আমার array টারে ঘুরিয়ে লেখার প্রোগ্রাম।

#include <iostream>
#include <vector>
using namespace std;
    void display(vector<int>& a)
            {
                for(int i=0;i<a.size();i++)
                    {
                        cout<<a[i]<<" ";
                    }
                    cout<<endl;
            }
    int main()
        {
            vector<int> v1;
            v1.push_back(1);
            v1.push_back(3);
            v1.push_back(2);
            v1.push_back(4);
            v1.push_back(3);
            v1.push_back(4);
            v1.push_back(1);
            v1.push_back(6);

            display(v1);

            vector<int> v2(v1.size());
            for(int i=0;i<v1.size();i++)
                {
                    //i+j<size-1    -->for reverse
                    int j=v1.size()-1-i;
                    v2[i]=v1[j];

                }
                display(v2);
        }