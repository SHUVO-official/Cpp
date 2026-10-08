#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input4.txt");
            int n,m,k;
            vector<int> domain;
            vector<char> codomain,mapping;

            fin>>n;
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    domain.push_back(x);
                }
            fin>>m;
            for(int i=0;i<m;i++)
                {
                    char x;
                    fin>>x;
                    codomain.push_back(x);
                }    
            fin>>k;
            for(int i=0;i<k;i++)
                {
                    char x;
                    fin>>x;
                    mapping.push_back(x);
                }    

            set<char> s;
            s.insert(mapping.begin(),mapping.end());
            
            bool onto=true;
            for(char i:codomain)
                {
                    if(s.count(i)==0)
                        {
                            onto=false;
                        }
                }

            if(onto) cout<<"yes";
            else cout<<"No";    
        }