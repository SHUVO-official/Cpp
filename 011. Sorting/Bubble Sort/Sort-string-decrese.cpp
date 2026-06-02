//Ques: Sort a string in decreasing order of values associated after removal of values smaller than x.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            string s="AZYZXBYDXJK";
            string str="";
            for(int i=0;i<s.size();i++)
                {
                    if(s[i]>='X') 
                        {
                            str.push_back(s[i]);
                        }
                }
                
                cout<<str<<endl;  
                sort(str.begin(),str.end());
                cout<<str;
        }