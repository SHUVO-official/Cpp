/* This program checks whether a character is an alphabet or not */
#include <iostream>
using namespace std;
    int main()
    {
        char ch;
        cout<<"Enter the carecter:";
        cin>>ch;
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
        {
            cout<<"The carecter is an Alphabate.";

        }
        else cout<<"The carecter is number or special carester.";
    }