//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cin>>n;
            //উপরের অংশ ও মাঝের লাইনের জন্য
            for(int i=1;i<=n;i++)
                {
                    //space
                    for(int j=1;i+j<=n;j++)
                        cout<<" ";
                    //stars
                    for(int k=1;k<=(2*i-1);k++)
                        cout<<"*"; 
                        cout<<endl;   
                }
            //মাজ হতে নিছ পর্যন্ত।    
            for(int i=n-1;i>=1;i--)
                {   
                    //space
                    for(int j=1;i+j<=n;j++)
                        cout<<" ";
                    //stars
                    for(int k=1;k<=(2*i-1);k++)
                        cout<<"*";
                        cout<<endl;
                }
        }