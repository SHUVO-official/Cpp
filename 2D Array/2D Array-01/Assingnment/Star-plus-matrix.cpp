//Ques: Write a program to display the elements of middle row and the elements of middle column of a 2D matrix.
//[Assuming the 2D array to be a squre matrix with odd dimension i.e. 3*3,5*5]
                //এইটা পুরো star-plus pattern er moto


#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter row/column for squre array: ";
            cin>>n; //only odd numbers
            int arr[n][n];
            //input
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cin>>arr[i][j];
                        }
                }
             cout<<endl;
             
             //output
             for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            cout<<arr[i][j]<<" "<<endl;
                        }
                }
                cout<<endl;

            //star-plus print= star=(element of mid)
            int mid=n/2;
            for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            if(i==mid || j==mid) cout<<arr[i][j]<<" ";
                            else cout<<"  ";
                        }
                        cout<<endl;
                }

             

        }