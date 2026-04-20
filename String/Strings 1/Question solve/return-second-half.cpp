// Ques: Input a string of even length and return the second half of that string using substr function

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    int main()
        {
            string s;
            cout<<"Enter the string: ";
            getline(cin,s);
            int n=s.length();
            cout<<s.substr(n/2);
        }