#include <iostream>
#include <algorithm>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the size of array: ";
            cin>>n;

            int a[n][n];
            cout<<"Enter the element of array: ";
            //input
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cin>>a[i][j];
                        }
                }
                 cout<<endl;
            //output
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                }
                
            //Transpose
            for(int i=0;i<n;i++)
                {
                    for(int j=i+1;j<n;j++)
                        {
                          swap(a[i][j],a[j][i]);  
                        }
                }
                 cout<<endl;
            //output
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                }
            //rotate 90 anti-clockwise
            for(int j=0;j<n;j++)
                {
                    for(int i=0;i<n/2;i++)
                        {
                            swap(a[i][j],a[n-i-1][j]);
                        }
                } 
                 cout<<endl;
            //output
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                }       
        }