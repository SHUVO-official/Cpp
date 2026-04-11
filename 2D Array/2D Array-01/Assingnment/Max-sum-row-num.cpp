//Ques: Write a program to print the row number having the maximum sum in a given matrix
            // Ex: 1 2 3    -->sum=6   
            //     4 5 6    -->sum=15   
            //     7 8 9    -->sum=24  its max so Print row no 3.
            
#include <iostream>
#include <climits>
using namespace std;
    int main()
        {
            int r,c;
            cout<<"Enter row: ";
            cin>>r;
            cout<<"Enter column: ";
            cin>>c;
            
            int arr[r][c];
            //input
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            cin>>arr[i][j];
                        }
                } 
            cout<<endl;
            //Output
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            cout<<arr[i][j]<<" ";
                        }
                        cout<<endl;
                }

            //finding lergest row
            int max=INT_MIN;
            int idx=-1;  
            for(int i=0;i<r;i++)
                {
                    int sum=0;
                    for(int j=0;j<c;j++)
                        {
                            sum+=arr[i][j];
                            
                        }
                            if(max<sum) 
                                {
                                    max=sum;
                                    idx=i;
                                }    
                }
            cout<<"The row with maximum sum is: "<<idx+1;    
        }
