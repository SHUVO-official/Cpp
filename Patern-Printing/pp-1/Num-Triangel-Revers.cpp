/*Ques: Print the given pattern:
                                1 2 3 4
                                1 2 3
                                1 2
                                1
                        
                            
*/

#include <iostream>
using namespace std;
    int main()
            {
                int n;
                cout<<"Enter the number: ";
                cin>>n;
                for(int i=1;i<=n;i++)
                    {   
                        //এখানে rule of six apply kore pai  =>i+j=n+1
                        for(int j=1;(i+j)<=(n+1);j++)
                        cout<<j<<" ";
                        cout<<endl;
                    }
            }