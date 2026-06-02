/* This program checks if a number is divisible by both 5 and 3 */
#include<iostream>
using namespace std;
    
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5==0 && n%3==0)
    {
        cout<<"The number is divisible by both 5& 3."<<endl;
    
    }
    else{
        cout<<"The number is not divisible by both number 3 & 5.";
    }
}
   