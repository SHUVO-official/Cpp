//Ques: Input a string of even length and reverse the first half of the string.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    int main()
        {
            string s;
            getline(cin,s);
            //reverse 1st half
            int n=s.length();//or size
            reverse(s.begin(),s.begin()+n/2);
            cout<<s;
        }