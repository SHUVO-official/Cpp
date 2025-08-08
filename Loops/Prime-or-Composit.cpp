//WAP=writte a programme 
// WAP to cheak if a number is composit or prime?
//composit=jake ja ja dara bhag kora jay jemon(12=1,2,3,4,6,12) prime=moulik sonkha

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cin>>n;
            if(n==1) cout<<"The number is nor prime or composit";
            else 
                    {
                        for(int i=2;i<=n-1;i++)
                            {
                                if(n%i==0) cout<<"Composit";
                                return 0;   //return 0 মানে প্রোগ্রাম এখানেই শেষ।
                            }
                            cout<<"Prime";
                            return 0;
                    }
        }