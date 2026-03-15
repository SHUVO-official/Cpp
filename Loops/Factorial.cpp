/*পূর্ণসংখ্যার factorial নির্ণয়ের প্রোগ্রাম। */
#include <iostream>
using namespace std;
  int main()
    {
      int n;
      cout<<"Enter a positive integer: ";
      cin>>n;
      unsigned long long fact=1;
      if(n>=0)
          {
            if(n==0 || n==1) cout<<"Factorial: 1";
            else 
              {
                for(int i=2;i<=n;i++)
                  {
                    fact*=i;
                  }
                  cout<<"Factorial: "<<fact;
              }
          }
        else 
          cout<<"There are no Factorial for negative integer.";  

    }