/* This code checks if a number is divisible by 5. */
#include<iostream>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0)// Check if n is divisible by 5
        {
        cout<<"divisible by 5"<<endl;

        }
    else
        {
        cout<<"Not divisible by 5"<<endl;
        }


}