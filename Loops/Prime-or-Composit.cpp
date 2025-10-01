//WAP=writte a programme 
// WAP to cheak if a number is composit or prime?
//composit=jake ja ja dara bhag kora jay jemon(12=1,2,3,4,6,12) prime=moulik sonkha

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the number: ";
            cin>>n;
            if(n==1)
                {
                    cout<<"The number is nor Composit or Prime";
                    return 0;
                }
            for(int i=2;i<=n-1;i++)
                    {
                        if(n%i==0) 
                            {
                                cout<<"Composit.";
                                return 0;
                            }
                    }    
                cout<<"Prime.";
                return 0; 
        }