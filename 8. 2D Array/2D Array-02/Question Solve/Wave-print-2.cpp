// Write a program to print the matrix in wave form
        // input=  1 2 3       
        //         4 5 6  --> output:1 4 7 8 5 2 3 6 9
        //         7 8 9

#include <iostream>
using namespace std;
    int main()
        {
            int r,c;
            cout<<"Enter row number: ";
            cin>>r;
            cout<<"Enter column number: ";
            cin>>c;
            int a[r][c];
            for(int i=0;i<r;i++)
                {
                        {
                            for(int j=0;j<c;j++)
                                {
                                    cin>>a[i][j];
                                }
                        }
                }
                cout<<endl;
            for(int i=0;i<c;i++)
                {
                    if(i%2==0) 
                        {
                            for(int j=0;j<r;j++)
                                {
                                    cout<<a[j][i]<<" ";
                                }
                        }
                    else    
                        {
                            for(int j=c-1;j>=0;j--)
                                {
                                    cout<<a[j][i]<<" ";
                                }
                        }    
                }

        }