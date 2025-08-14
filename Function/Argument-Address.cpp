#include <iostream>
using namespace std;
    void fun(int x,int y)
        {
            cout<<"Address Function X: "<<&x<<endl;
            cout<<"Address Function Y: "<<&y<<endl; 

        }
    int main()
        {
            int x=2,y=5;
            cout<<"Address Main X: "<<&x<<endl;
            cout<<"Address Main Y: "<<&y<<endl;
            fun(x,y);
        }