// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4   1 2 3 4 
// 1 2 3       1 2 3 
// 1 2           1 2 
// 1               1

#include <iostream>
using namespace std;
    int main()
        {
            int n,m;
            cin>>m;
            n=m-1;
            for(int i=1;i<=2*m-1;i++)
                cout<<i<<" ";
                cout<<endl;
            for(int i=1;i<=n;i++)
                {
                    for(int j=1;i+j<=n+1;j++)
                        cout<<j<<" ";

                    for(int k=1;k<=(2*i-1);k++)
                        cout<<"  "; 

                    for(int j=1;i+j<=n+1;j++)
                        cout<<j<<" ";
                        cout<<endl;    
                }        
        }

