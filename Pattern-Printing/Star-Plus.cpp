/*Ques:Print the given pattern:
                            # # * # #
                            # # * # #
                            * * * * *       //এখানে # দ্বারা space বুঝিয়েছি।
                            # # * # #
                            # # * # #

*/

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the number: ";
            cin>>n;
            int mid;
            mid=(n/2)+1;//আমরা যে n নেবো সেটার middle number row r column এর সমান হলেই * print hobe
            for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                        {
                            if(i==mid || j==mid) cout<<" "<<"*"<<" ";
                            else cout<<" "<<"#"<<" ";
                        }
                        cout<<endl;
                }

        }