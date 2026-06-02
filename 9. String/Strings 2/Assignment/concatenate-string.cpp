//Ques : Input a string and concatenate woth its reverse string and print it.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            string s="SHUVO";
            string temp=s;
            reverse(temp.begin(),temp.end());
            s+=temp;
            cout<<s;
        }