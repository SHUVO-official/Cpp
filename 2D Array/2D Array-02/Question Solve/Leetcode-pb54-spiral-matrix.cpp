//Ques: Given an m x n matrix, return all elements of the matrix in spiral  order.          INPUT:       1  2  3  4
                        //   5  6  7  8
                        //   9 10 11 12   --> 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
                        //  13 14 15 16  
                        

#include <iostream>
using namespace std;
    int main()
        {
            int r,c;
            cout<<"Enter row: ";
            cin>>r;
            cout<<"Enter column: ";
            cin>>c;
            int a[r][c];
            cout<<"Enter element: ";

            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            cin>>a[i][j];
                        }
                }
            cout<<endl;
            
            //spiral
            int minr=0,minc=0,maxr=r-1,maxc=c-1;
                while(minr<=maxr && minc<=maxc)
                    {
                        //right
                        if(minr>maxr ||minc>maxc) break;
                        for(int j=minc;j<=maxc;j++)
                            {
                                cout<<a[minr][j]<<" ";
                            }
                            minr++;
                         
                        //down
                        if(minr>maxr ||minc>maxc) break;
                        for(int i=minr;i<=maxr;i++)
                            {
                                cout<<a[i][maxc]<<" ";
                            } 
                            maxc--;
                        //left
                        if(minr>maxr ||minc>maxc) break;
                        for(int j=maxc;j>=minc;j--)
                            {
                                cout<<a[maxr][j]<<" ";
                            }
                            maxr--;
                        //up
                        if(minr>maxr ||minc>maxc) break;
                        for(int i=maxr;i>=minr;i--)
                            {
                                cout<<a[i][minc]<<" ";
                            }
                            minc++;           
                    }
        }