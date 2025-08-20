#include <iostream>
using namespace std;
    void triangel(int x)
        {
            for(int i=1;i<=x;i++)
                {
                    for(int j=1;j<=i;j++)
                    cout<<"*"<<" ";
                    cout<<endl;
                }
        }
    int main()
        {
            triangel(3);
            triangel(4);
            triangel(5);
        }