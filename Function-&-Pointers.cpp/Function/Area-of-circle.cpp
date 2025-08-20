#include <iostream>
using namespace std;
    float area(int r)
        {
            float area=3.1416*(r*r);

            return area;
        }
    int main()
        {
            int r;
            cout<<"Enter the Radius: ";
            cin>>r;

            cout<<"The area of the circle is: "<<area(r);
        }