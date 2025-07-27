//WAP=writte a programme 
// WAP to cheak if a number is composit or prime?
//composit=jake ja ja dara bhag kora jay jemon(12=1,2,3,4,6,12) prime=moulik sonkha
#include <iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter a number:";
        cin>>n;
        bool flag=true;//true means prime
        for(int i=2;i<=(n-1);i++)
        {
            if(n%i==0) // i is a factor of n
            {
                flag=false;//false mean composit
                
            } 
            
            if(n==1)
            { cout<<"1 is neither prime nor composit";
                break;
            }
            else if (flag==true) {cout<<n<<" is prime"; break;}
            else {cout<<n<<" is composit";break;}
        }
    }