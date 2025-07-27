/*১ থেকে ১০০ পর্যন্ত সকল নাম্বারের যোগফল নির্ণয়ের প্রোগ্রাম।*/
#include <iostream>
using namespace std;
    int main()
    {
                            /*For loop*/

        // int i,sum=0;
        // for(i=1;i<=100;i++)
        // {
        //     sum=sum+i;
        // }
        // cout<<sum;

                            /*While loop*/

            int i=1,sum=0;
            while(i<=100)
                {
                   
                    sum=sum+i;
                    i++;
                }  
                cout<<sum;              
    }