/*WAP to print sum of all the even digits of a given number*/
/*এমন একটি প্রোগ্রাম রচনা কর যেখানে ধারাবাহিক একটা নাম্বার দেয়া থাকবে সেখান থেকে শুধু জোড় সংখ্যা গুলোর যোগফল আসবে।*/

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,l;                //l=last number
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
        {
            l=n%10;
            if(n%2==0)
                {
                    sum+=l;
                }
                n/=10;
        }
        cout<<sum;
}