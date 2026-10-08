#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input.txt");
            int n;
            vector<int> domain,range;

            fin>>n;
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    domain.push_back(x);
                }
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    range.push_back(x);
                }    
            
            set<int> s;
            s.insert(range.begin(),range.end());
            
            bool onetoone=true;
            if(s.size()!=n)
                {
                    onetoone=false;
                }
            for(int i=0;i<n;i++)
                {
                    for(int j=i+1;j<n;j++)
                        {
                            if((domain[i]==domain[j])&&(range[i]!=range[j]))
                                {
                                    onetoone=false;
                                }
                        }
                }    
            if(onetoone) cout<<"Yes";
            else cout<<"No";    
        }