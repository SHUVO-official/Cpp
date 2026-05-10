//Ques: Input a string of size n and update all the odd positions in the string to charecter '#'.Consider 0-based indexing.

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
           int n;
           cin>>n;
           string s;
           cin>>s;

           for(int i=1;i<n;i+=2)
                s[i]='#';
             cout<<"The new string is: "<<s;   
        }