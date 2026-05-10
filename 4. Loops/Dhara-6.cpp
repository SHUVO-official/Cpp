#include <iostream>
#include <cmath>
using namespace std;
    int main()
    {
                                /*[For loop]*/
                             
            double n,sum=1;
            cout<<"Enter the number: ";
            cin>>n;
            for (int i=1;i<=n;i++) sum*=i*(i+1);
            cout<<sum;  
    }