#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    int main()
        {
            //<string_name>.size() ||  <string_name>.length()
           
                // string s="Maruf Hasan Shuvo at pw";
                // cout<<s.size()<<" ";
                // cout<<s.length();

            //push_back() && pop_back
                // string s="abcd";
                // cout<<s<<endl;
                // // s.push_back('e');
                // // s.push_back('f');
                // // s.push_back('g');
                // // s.push_back('h');
                // // s.push_back('h');
                //     s.pop_back();
                //     s.pop_back();
                // cout<<s<<endl;

            // '+' operator    
                // string a="Maruf";
                // cout<<a<<endl;
                // string b="Hasan";
                // // a=a+b;
                //     // a=b+a;
                //         // a="xyz"+a;
                // cout<<a;

            //reverse()
                string s="abcdefg";
                cout<<s<<endl;
                // reverse(s.begin(),s.end()); 
                // cout<<s<<endl;   
                // reverse(s.begin()+2,s.end()-2);
                reverse(s.begin()+2,s.begin()+5);
                cout<<s<<endl;
                


        }