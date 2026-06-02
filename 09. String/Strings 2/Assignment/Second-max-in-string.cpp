#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            string s;
            cin>>s;

            char max='!' ,smax='!';
            for(int i=0;i<s.size();i++)
                {
                    if(max<s[i]) max=s[i];
                }
            for(int i=0;i<s.size();i++)
                {
                    if(smax<s[i] && max!=s[i]) smax=s[i];
                }
                    
            if(smax=='!') cout<<"There is no smax";    
            cout<<s<<endl<<smax;    
        }