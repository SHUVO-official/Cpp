#include <iostream>
using namespace std;
    int main()  
    {   
                    //Syntex-1
        // int arr[7];      //0 1 2 3 4 5 6=(n-1)তম
        // arr[0]=11;
        // arr[1]=32;
        // arr[2]=23;
        // arr[3]=56;
        // arr[4]=43;
        // arr[5]=34;
        // arr[6]=76;
        // cout<<arr[4];


                    //Syntex-2
        //    int arr[7]={12,34,53,52,23,86,34};   //0 1 2 3 4 5 6=(n-1)তম
        //         cout<<arr[4];//4 মানে ৫তম পদ


                    /*Input-Output declaration in array*/

                  int arr[7]={12,34,53,52,23,86,34};  
                  //input
                  for(int i=0;i<=6;i++)
                    {
                        cin>>arr[i];
                    }
                  //output
                  for(int i=0;i<=6;i++)
                    {
                        cout<<arr[i]<<"  ";
                    }  
    }