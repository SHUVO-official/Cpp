#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input1.txt");
            int n,m;
            vector<int> v1,v2;

            fin>>n;
            for(int i=1;i<=n;i++)
                {
                    int x;
                    fin>>x;
                    v1.push_back(x);
                }
            fin>>m;
            for(int i=1;i<=m;i++)
                {
                    int x;
                    fin>>x;
                    v2.push_back(x);
                }
                
            set<int> s1,s2;
            s1.insert(v1.begin(),v1.end());
            s2.insert(v2.begin(),v2.end());
            
            vector<int> res;
            for(int i:s1)
                {
                    if(s2.count(i))
                        {
                            res.push_back(i);
                        }
                }

            cout<<"Intersection: ";    
            for(int i:res)
                {
                    cout<<i<<" ";
                }    
        }