/*Ques: Print the given pattern:
                                ****
                                ***
                                **
                                *
                        
                            
*/

#include <iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the rows: ";
        cin>>n;
        //revers এর জন্য no of stars=n+1-i;
        for(int i=1;i<=n;i++)
            {   
                //এখানে rule of six মানে i+j<=n+1  ==> j<=n+1-i এটা শুধু উল্টো ত্রিভুজের জন্য।
                for(int j=1;i+j<=n+1;j++)
                cout<<"*";
                cout<<endl;
            }
            
    }