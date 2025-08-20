//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1

#include <iostream>
using namespace std;
    int fact(int x)
        {
            int fact=1;
            for(int i=2;i<=x;i++)
            {
                fact*=i;
            }
                return fact;
        }
    int combination(int n,int r)
        {
            int nCr=1;
            nCr=fact(n)/(fact(r)*fact(n-r));
            return nCr;
        }
    int main()
        {
            int n;
            cin>>n;

            for(int i=0;i<=n;i++)
                {   
                    //for spaces
                    for(int k=1;i+k<=n;k++)
                        cout<<" ";

                    for(int j=0;j<=i;j++)
                    cout<<combination(i,j)<<" ";
                    cout<<endl;
                }
        }