// Ques: Write a program to print the elements of both the diagonals in a square matrix

// Input:  1 2 3           output: 1   3
//         4 5 6                     5  
//         7 8 9                   7   9

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cin>>n;
            int a[n][n];
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cin>>a[i][j];
                        }
                }
                cout<<endl;
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            if((i==j) || (i+j==(n-1))) cout<<a[i][j]<<" ";
                            else cout<<"  ";
                        }
                        cout<<endl;
                }
        }