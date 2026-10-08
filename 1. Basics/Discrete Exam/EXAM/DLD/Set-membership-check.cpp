#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input3.txt");
            int n,check;
            vector<int> v;

            fin>>n;
            for(int i=1;i<=n;i++)
                {
                    int x;
                    fin>>x;
                    v.push_back(x);
                }

            fin>>check;
            
            set<int> s;
            s.insert(v.begin(),v.end());

            if(s.count(check)) cout<<check<<" is the member of those set.";
            else cout<<check<<" is not the member.";    
        }