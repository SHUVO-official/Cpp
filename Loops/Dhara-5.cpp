/*WAP to print sum=1^2+2^2+3^2+... ...+n^2  */
#include <iostream>
using namespace std;
    int main()
    {
                                /*[For loop]*/
                             
            // int n,sum=0;
            // cout<<"Enter the number: ";
            // cin>>n;
            // for (int i=1;i<=n;i++) sum+=(i*i);
            // cout<<sum;      
            
                                /*[While loop]*/


            int i=1,n,sum=0;
            cout<<"Enter the number: ";
            cin>>n;
            while(n>=i)
                {
                    sum+=(i*i);
                    i++;
                }
                cout<<sum;
    }