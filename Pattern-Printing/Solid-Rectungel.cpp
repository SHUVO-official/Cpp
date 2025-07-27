/*Ques: Print the given pattern
                                *****
                                *****
                                *****

*/

#include <iostream>
using namespace std;
    int main()
    {
        int n,m;
        cout<<"Enter the row: ";
        cin>>n;
        cout<<"Enter the column:  ";
        cin>>m;
        for(int i=1;i<=n;i++)
            {
                for( int i=1;i<=m;i++)
                cout<<"*";
                cout<<endl;
            }
            
    }