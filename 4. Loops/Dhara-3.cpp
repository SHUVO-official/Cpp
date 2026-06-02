/*WAP to print sum= 1.5+2.5+3.5+4.5+ ... ... +n */
#include <iostream>
using namespace std;
    int main ()
    {
        double i=1.5,n,sum;
        cout<<"Enter the number: ";
        cin>>n;
                                        /*[For loops]*/

            // for(;i<=n;i++) sum+=i;
            // cout<<sum;  
            
                                        /*[While loop]*/

                while(i<=n)
        
                    {
                        sum+=i;
                        i++;
                    }
                    cout<<sum;
    }