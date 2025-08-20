#include <iostream>
using namespace std;
    int main()
        {
            int x=5;
            int* p=&x;
            int** q=&p;
            int*** r=&q; 


            cout<<x<<endl;      //same
            cout<<*p<<endl;     //same
            cout<<**q<<endl;    //same
            cout<<***r<<endl;   //same
        }