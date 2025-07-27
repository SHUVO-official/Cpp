#include <iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the marks:";
        cin>>n;

        if(n>=90) cout<<"Golden A+"<<n;
        else if(n>=80) cout<<"A+"<<n;
        else if(n>=70) cout<<"A"<<n;
        else if(n>=65) cout<<"A-"<<n;
        else if(n>=60) cout<<"B"<<n;
        else if(n>=50) cout<<"c"<<n;
        else if(n>=33) cout<<"D"<<n;
        else cout<<"Fail"<<n;
        

    }