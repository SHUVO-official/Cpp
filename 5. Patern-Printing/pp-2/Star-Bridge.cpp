// * * * * * * * * * * * * * 
// * * * * * *   * * * * * * 
// * * * * *       * * * * * 
// * * * *           * * * * 
// * * *               * * * 
// * *                   * * 
// *                       *

#include <iostream>
using namespace std;
    int main()
        {
            int n,m;
            cin>>m;
            //সবের উপরের লাইনের জন্য। 
            n=m-1;
            for(int i=1;i<=2*m-1;i++)
            cout<<"* ";
            cout<<endl;
            
            for(int i=1;i<=n;i++)
                {
                    //revers-triengel এর জন্য।
                    for(int j=1;(i+j<=n+1);j++)
                        cout<<"* ";
                    //space Odd triangel er jonno
                    for(int k=1;k<=(2*i-1);k++)
                        cout<<"  ";
                    // //revers-triengel এর জন্য।
                    for(int l=1;(i+l<=n+1);l++)
                        cout<<"* ";
                        cout<<endl;
                }
        }