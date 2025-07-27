#include <iostream>
using namespace std;
    int main()
    {
        int x;
        cout<<"Enter your marks:";
        cin>>x;
        //Rules:  (condition) ?  cout<<"True" : cout<<"False";
        (x>=33) ? cout<<"Passed"  : cout<<"Failed";
    }