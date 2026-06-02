/* This code extracts the fractional part of a floating-point number. */
#include<iostream>
using namespace std;
    
int main() {
    float x;
    cin>>x;//9.1
    int y=(int)x;//y=9
    x=x-y;
    cout<<x;
}