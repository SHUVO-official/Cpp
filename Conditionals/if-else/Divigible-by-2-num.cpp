/* This program checks if a number is divisible by either 5 or 3 */
#include<iostream>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%5==0 || n%3==0)
    {
        cout<<"The number is divisible by 5 or 3."<<endl;
    }
    else{
        cout<<"The number is not divisible by either 5 or 3.";
    }
}