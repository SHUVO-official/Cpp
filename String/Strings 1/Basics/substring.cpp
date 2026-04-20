#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    int main()
        {
            string s="abcdef";
            //s.substr(idx) = etar kaj hobe oi idx theke shesher gulo obdi nebe
            //s.substr(idx,size) = idx er por theke je porjonto size debo oi obdi
            cout<<s.substr(2)<<endl;     
            cout<<s.substr(2,3)<<endl;       
        }