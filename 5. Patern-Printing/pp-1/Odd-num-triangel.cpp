/*Ques: Print the given pattern: 
                            1
                            1 3 
                            1 3 5 
                            1 3 5 7 
                            1 3 5 7 9
*/

#include <iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the rows: ";
        cin>>n;
        for(int i=1;i<=n;i++)
            {   
                int a=1;
                for(int j=1;j<=i;j++)
                {
                cout<<a;
                a+=2;
                }
            }
            cout<<endl;
    } 