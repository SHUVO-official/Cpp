//Ques: input a string of size n and update all the even positions in the string to charectar 'a'.considar 0-based indexing.
#include <iostream>
#include <string>
using namespace std;
    int main()
        {
            string s="SHUVOgotoHOME";
            cout<<s<<endl;
            for(int i=0;s[i]!='\0';i++)
                {
                    if(i%2==0) s[i]='A';
                }
            cout<<s;
            
        }