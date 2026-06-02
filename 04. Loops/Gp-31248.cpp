#include <iostream>
using namespace std;
    int main()
    {
        //3 12 48 ... ...n
        //a ar ar^2 ar^3...n
        //(a*=r) mane protibar barbe r tarpor r^2 tarpo R^3
        int n;
        cout<<"Enter the number:";
        cin>>n;
        int a=3,r=4;
        for (int i=1 ; i<=n ;i++)
        {
            cout<<a<<endl;
            a*=r;
            
        }
        
        
        
    }