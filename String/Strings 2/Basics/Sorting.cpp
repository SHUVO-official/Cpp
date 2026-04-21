#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            string s;
            getline(cin,s);

            sort(s.begin(),s.end());  //ekhane sort muloto lexographicaly chole mane Ascii anushare jay not alphabatically
            cout<<s;
        }