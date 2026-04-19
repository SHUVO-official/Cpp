//Ques: Return the total number of digits ina number without using any loop
        //Hint : Try using inbuilt to_string() function

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
    int main()
        {
            int x=367343;
            string s=to_string(x);
            cout<<s.length();       
        }