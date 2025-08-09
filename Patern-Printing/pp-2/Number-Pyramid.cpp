//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
                {
                    //space এর জন্য।
                    for(int j=1;i+j<=n;j++)
                        cout<<"  ";

                    //Revers Num Triangel এর জন্য।
                    for(int k=1;k<=i;k++)
                        cout<<k<<" "; 
                   
                    //num-tri-revers এর জন্য।
                    for(int j=i-1;j>=1;j--)
                        cout<<j<<" ";
                        cout<<endl;    
                }
        }