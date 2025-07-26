/* This code calculates the volume of a cylinder. */
#include<iostream>
using namespace std;
    int main()
    {
        float r,h,pi=3.1415,volume;
        cout<<"Enter the radius & height:";
        cin>>r>>h;
        volume=pi*(r*r)*h;
        cout<<"the volume of the cylinder is:"<<volume;
    }
    