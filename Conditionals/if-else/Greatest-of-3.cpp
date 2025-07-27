/* This program finds the greatest of three numbers
*/
#include<iostream>
using namespace std;
    
int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin>>a >>b >>c;
    if(a>b && a>c)
    {
        cout<<"The greatest number is: " << a << endl;
    }
    else if(b>a && b>c)
    {
        cout<<"Thegretest number is:"<<b<<endl;
    }
    else{
        cout<<"The gretest number is:"<<c;
    }
}