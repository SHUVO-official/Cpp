/*১ থেকে n পর্যন্ত সকল নাম্বারের যোগফল নির্ণয়ের প্রোগ্রাম।*/
#include <iostream>
using namespace std;
    int main()
    {
                        /*For loop*/

        int n,i=1,sum=0;
        cout<<"Enter a number: ";
        cin>>n;
        // for(;i<=n;i++)
        // {
        //     sum=sum+i;
        // }  
        // cout<<sum;        
        
                        /*While loop*/

           while(i<=n)
           {
            sum=sum+i;
            i++;

           }
           cout<<sum;
    }