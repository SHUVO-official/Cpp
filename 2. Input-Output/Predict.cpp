/* This code demonstrates the use of arithmetic operators in C++. */
#include<iostream>
using namespace std;
    
int main() {
    int num1;
    int p=5,q=10;
    p+=q-=p;//(right to left) q-=p => q=10-5=5, p+=q => p=5+5=10
    cout<<p<<" "<<q<<endl; // p=5+10-5=10, q=10-5=5
}