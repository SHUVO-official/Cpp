#include <iostream>
using namespace std;
    int main ()
    {
        float area,circumference,r,pi=3.14159;
        cout<<"Enter the radius of the circle:";
        cin>>r;
        area=pi*(r*r);
        cout<<"Area="<<area<<endl;
        circumference=2*pi*r;
        cout<<"circumference="<<circumference<<endl;
        if(area>circumference) cout<<"The area is greater than circumference.";
        else cout<<"The area is not greater than circumference.";
    }