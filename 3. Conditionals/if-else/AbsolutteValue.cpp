//এই প্রোগ্রামটি দিয়ে চেক করা হবে যে নিছে প্রদত্ত সঙ্খাতি পসিতিভ,নেগাতিভ নাকি শূনো
#include <iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the number:";
        cin>>n;
        if(n>0) cout<<"The number is positive";
        else if(n<0) cout<<"The number is negative";
        else cout<<"The number is zero.";
    }