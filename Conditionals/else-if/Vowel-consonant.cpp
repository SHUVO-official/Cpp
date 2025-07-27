#include <iostream>
using namespace std;
    int main()
    {
        char ch;
        cout<<"Enter the charecter:";
        cin>>ch;
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout <<"vowel.";
            else cout<<"consonent.";
        }
        else cout<<"The charecter is not a alphabate.";
    }