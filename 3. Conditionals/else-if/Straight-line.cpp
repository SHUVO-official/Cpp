#include <iostream>
using namespace std;
    int main()
    {
        float x1,y1,x2,y2,x3,y3,m1,m2;
        cout<<"Enter three points:";
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        m1=(y2-y1)/(x2-x1);
        cout<<"The M1="<<m1<<endl;
        m2=(y3-y2)/(x3-x2);
        cout<<"The M2="<<m2<<endl;
        if(m1==m2) cout<<"The three point is a straight line.";
        else cout<<"The three point is not a straight line.";
        
    }