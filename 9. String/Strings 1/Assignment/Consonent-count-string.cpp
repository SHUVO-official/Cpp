//input a string of length n and count all the consonant in the given string

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
           
           string s="physiiidcs";
           int count=0;
           for(int i=0;i<s[i]!='\0';i++)
            {
                if(s[i] !='a' && s[i] &&'e' && s[i] !='i' && s[i] !='o' && s[i]    !='u'&&s[i] !='A'&& s[i] !='E' &&s[i] !='I' && s[i] !='O' && s[i]  !='U') count++ ;
            }
            cout<<count;
        }