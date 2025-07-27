/* This code checks if a number is even or odd. */
#include<iostream>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0)// Check if n is even
        {
        cout<<"Even number"<<endl;

        }
    if(n%2!=0)
        {
        cout<<"Odd number"<<endl;
        }   
    

}