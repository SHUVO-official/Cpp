/*Ques: Print the given pattern:
                                # # # *
                                # # * *         // # দ্বারা space বুঝিয়েছি।
                                # * * *
                                * * * *
*/

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter the number: ";
            cin>>n;
            for (int i=1;i<=n;i++)
                    {
                        for(int j=1;(i+j)<=n;j++)
                        cout<<"#";
                        
                        /*এই অব্দি # এর কাজ শেষ মানে এই পর্যন্ত
                                                               ###
                                                               ##
                                                               #
                          এখন থেকে * এর কাজ শুরু করব মানে  
                                                                *
                                                                **
                                                                *** এইটা।                                    
                        */
                       for (int k=1;k<=i;k++)
                       cout<<"*";
                       cout<<endl;

                    }
        }