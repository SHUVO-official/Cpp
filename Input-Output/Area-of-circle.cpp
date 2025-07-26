/* This code calculates the area of a circle. */
#include<iostream>
using namespace std;
    int main()
    {
        float r,pi=3.1415,area;
        cout<<"Enter the radius:";
        cin>>r;
        area=pi*(r*r);
        cout<<"The area of the circle is:"<<area;
    }
