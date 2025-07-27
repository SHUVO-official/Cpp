/*WAP to sum this=5+10+15+20+... ...+n */
#include <iostream>
using namespace std;
    int  main()
    {
                        /*[for loop]*/

            // int n,sum=0;
            // cout<<"Enter the number: ";
            // cin>>n;
            // for(int i=5;i<=n;i+=5)   sum+=i;
            // cout<<sum;      
            
            
                        /*[While loop]*/

              int i=5,n,sum=0;
            cout<<"Enter the number: ";
            cin>>n;
            while(i<=n)
            {
                sum+=i;
                i+=5;
                
            }
            cout<<sum;

    }