#include <iostream>
#include <string>
using namespace std;
    int main()
        {
           //output
            string s="Maruf Hasan Shuvo";
            cout<<s<<endl;
            string a="Maruf Has\0an Shuvo";
            cout<<a<<endl;

            //input
            string b;
            // cin>>b;   //only if the given has no space
            getline(cin,b);
            cout<<b<<endl; 
        }