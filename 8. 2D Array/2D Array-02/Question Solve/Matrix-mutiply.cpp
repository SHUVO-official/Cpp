#include <iostream>
#include <vector>
using namespace std;
    int main()
        {
            int r1,c1,r2,c2;
            cout<<"Enter 1st matrix row: ";
            cin>>r1;
            cout<<"Enter 1st column row: ";
            cin>>c1;
            cout<<"Enter 2nd matrix row: ";
            cin>>r2;
            cout<<"Enter 2nd matrix column: ";
            cin>>c2;

            if(c1==r2) 
                {
                    int a[r1][c1];
                    cout<<"Enter the 1st matrix: ";
                    for(int i=0;i<r1;i++)
                        {
                            for(int j=0;j<c1;j++)
                                {
                                    cin>>a[i][j];
                                }
                        }
                    int b[r2][c2];
                    cout<<"Enter the 2nd matrix: ";
                    for(int i=0;i<r2;i++)
                        {
                            for(int j=0;j<c2;j++)
                                {
                                    cin>>b[i][j];
                                }
                        }
                        cout<<endl;

                    //resultant matrix
                    int res[r1][c2];
                    for(int i=0;i<r1;i++)
                        {
                            for(int j=0;j<c2;j++)
                                {
                                    //multiply
                                    res[i][j]=0;
                                    for(int k=0;k<r2;k++)
                                        {
                                            res[i][j]+=a[i][k]*b[k][j];
                                        }
                                }
                        }
                        //print
                        for(int i=0;i<r1;i++)
                        {
                            for(int j=0;j<c2;j++)
                                {
                                    cout<<res[i][j]<<" ";
                                }
                                cout<<endl;
                        }    
                }
                else    
                    {
                        //n!=p
                        cout<<"The matrix cannot be multiplicated: ";
                    }
            

        }