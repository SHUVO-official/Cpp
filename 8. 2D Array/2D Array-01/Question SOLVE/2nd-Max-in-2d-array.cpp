#include <iostream>
#include <climits>
using namespace std;
    int main()
        {
            int r;
            cout<<"Enter array row: ";
            cin>>r;

            int c;
            cout<<"Enter array column: ";
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

            //For max
            int max=INT_MIN;
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            if(max<arr[i][j]) max=arr[i][j];
                        }
                }
            //For second max
            int smax=INT_MIN;
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            if(max!=arr[i][j] && smax<arr[i][j]) smax=arr[i][j];
                        }
                } 
            
            cout<<"The maximum value is: "<<max<<endl;
            cout<<"The second lergest value is: "<<smax;    


        }