// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4   6 7 8 9 
// 1 2 3       7 8 9 
// 1 2           8 9 
// 1               9

#include <iostream>
using namespace std;
    int main()
        {
            int n,m;
            cin>>m;
            //উপরের ১ লাইনের জন্য।
            n=m-1;
            for(int i=1;i<=(2*m-1);i++)
                cout<<i<<" ";
                cout<<endl;
            //নিচের লাইনগুলোর জন্য।    
            for(int i=1;i<=n;i++)
                {
                    int a=1;
                    for(int j=1;i+j<=n+1;j++)
                    {
                        cout<<a<<" ";
                        a++;
                    }    

                    for(int k=1;k<=(2*i-1);k++)
                      {  
                        cout<<"  ";
                        a++;
                      }  
                    for(int j=1;i+j<=n+1;j++)
                      {
                        cout<<a<<" ";
                        a++;
                      }  
                        cout<<endl;   
                }
        }