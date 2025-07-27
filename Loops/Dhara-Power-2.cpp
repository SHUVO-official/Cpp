//WAP to print sum=1^2* 2^2 * 3^2 * ... ...* n^2.
#include <iostream>
#include <cmath>
using namespace std;
    int main()
    {
                                /*[For loop]*/
                             
            // double n,sum=1;
            // cout<<"Enter the number: ";
            // cin>>n;
            // for (int i=1;i<=n;i++) sum*=pow(i,2);
            // cout<<sum;  
            
                                /*[While loop]*/


            double i=1,n,sum=1;
            cout<<"Enter the number: ";
            cin>>n;
            while(n>=i)
                {
                    sum*=pow(i,2);
                    i++;
                }
                cout<<sum;
    } 