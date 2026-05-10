#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cin>>n;
            if(n==1)
                {
                     cout<<"The number is nor prime or composit";
                     return 0;
                }     
        
                    
                       for(int i=2;i<=n-1;i++)
                            {
                                if(n%i==0) cout<<"Composit";
                                return 0;   //return 0 মানে প্রোগ্রাম এখানেই শেষ।
                            }
                            cout<<"Prime";
                            return 0;
                    
        }