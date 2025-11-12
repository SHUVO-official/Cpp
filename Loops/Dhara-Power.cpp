/*WAP to print sum=1^5+2^5+3^5+... ...+n^5  */
#include <iostream>
#include <cmath>
using namespace std;
    int main()
    {

                                /*[For loop]*/
                             
            // int n,sum=0;
            // cout<<"Enter the number: ";
            // cin>>n;
            // for (int i=1;i<=n;i++) sum+=pow(i,5);
            // cout<<sum;    
            
                                /*[While loop]*/


            int i=1,n,sum=0;
            cout<<"Enter the number: ";
            cin>>n;
            while(n>=i)
                {
                    sum+=pow(i,5);
                    i++;
                }
                cout<<sum;
                
    }