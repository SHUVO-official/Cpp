/*WAP to find the value of one number raised to the power of another
    বা পাওয়ার ফাঙ্কশন দিয়ে একটা প্রোগ্রাম বানাও*/ 
#include <iostream>
#include <cmath>
using namespace std;
    int main()
    {
        double x,y,result;
        cout<<"Enter base: ";
        cin>>x;
        cout<<"Enter power: ";
        cin>>y;
        result=pow(x,y);
        cout<<"Enter the result: "<<result;
    }