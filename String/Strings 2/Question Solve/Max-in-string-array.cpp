//Ques: Given n string & vector consisting of digits from 0 ot 9.Return the index of string which has maximum value.
        //Input = 0123,0023,456,00182,940,2901   output = 5

#include <bits/stdc++.h>           
using namespace std;       
    int main()
        {
            vector<string> v={"0123","0023","456","00182","940","002901"};
            int max=stoi(v[0]);
            string maxs=v[0];
            for(int i=0;i<v.size();i++)
                {
                    int x=stoi(v[i]);
                    if(x>max) 
                        {
                            max=x;
                            maxs=v[i];
                        }
                }
                cout<<max<<endl<<maxs;

        }
