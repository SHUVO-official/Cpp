/*পূর্ণসংখ্যার factorial নির্ণয়ের প্রোগ্রাম। */
#include <iostream>
using namespace std;
    int main()
    {
                        /*for loop*/

             int i=1,fact=1,n;
             cout<<"Enter a number: ";
             cin>>n;
               //factoria negative মান বের করতে পারেনা।
             if(n>0)
             {
                for( ;i<=n;i++)
                {
                    fact*=i;
                }
                cout<<fact;
             }   

            //note:এটা বড় মান বের করতে পারবে না এজন্য (unsigned long long) use krte hobe।


 }