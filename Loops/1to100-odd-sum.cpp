/*১+৩+৫+৭ ... ... +n ধারাটির যোগফল নির্ণয়ের প্রোগ্রাম।*/
#include <iostream>
using namespace std;
    int main()
    {
                        /*For loop*/

        //    int n,i=1,sum=0;
        //    cout<<"Enter a number: ";
        //    cin>>n;
        //    for( ;i<=n;i+=2) 
        //    {
        //     sum+=i;
        //    }       
        //    cout<<sum;  
           

                        /*While loop*/


                int i=1,n,sum=0;
                cout<<"Enter a number: ";
                cin>>n;
                while(i<=n)
                        {
                            sum+=i;
                            i+=2;
                        }
                        cout<<sum;
    }