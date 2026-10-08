#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input.txt");
            int n,m;
            vector<int> v1,v2;

            fin>>n;
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    v1.push_back(x);
                }

            fin>>m;
            for(int i=0;i<m;i++)
                {
                    int x;
                    fin>>x;
                    v2.push_back(x);
                }
                
            set<int> s;
            s.insert(v1.begin(),v1.end());
            s.insert(v2.begin(),v2.end());
            
            for(auto i:s)
                {
                    cout<<i<<" ";
                }

        }