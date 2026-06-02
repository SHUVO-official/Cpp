//Ques: Given an array of a strings arr[] with all strings in lowercase.Sort given strings using Bubble sort and Display all sorted array.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            vector<string> v={"shuvo","maruf","kuhu","rohan","mili","pinky","tania","lamia","urmila"};

            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<endl;
                }
                cout<<endl;

            for(int i=0;i<v.size()-1;i++)
                {
                    bool flag=true;
                    for(int j=0;j<v.size()-1-i;j++)
                            {
                                if(v[j]>v[j+1]) {
                                    swap(v[j],v[j+1]);
                                    flag = false;
                                }
                            }
                                    if(flag==true)
                                    {
                                        break;
                                    }
                } 
             
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<endl;
                }
                cout<<endl;    

        }