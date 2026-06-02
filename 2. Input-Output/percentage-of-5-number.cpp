/* This code calculates the percentage of five subjects. */
#include <iostream>
using namespace std;
    int main()
    {
        float x1,x2,x3,x4,x5,percentage;
        cout<<"Enter the five numbers:";
        cin>>x1>>x2>>x3>>x4>>x5;
        percentage=(x1+x2+x3+x4+x5)/5;
        cout<<"The percentage is:"<<percentage <<"%";
    }