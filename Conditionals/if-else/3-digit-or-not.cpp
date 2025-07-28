#include <iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter a number:";
        cin>>n;
        if(n>=100 && n<=999) cout<<"It's a three digit number";
        else cout<<"This is not";
    }