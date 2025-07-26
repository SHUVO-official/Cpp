#include <iostream>
using namespace std;
    int main()
    {
        float l,d,area,perimeter;
        cout<<"Enter length & depth:";
        cin>>l>>d;
        area=l*d;
        cout<<"the area is:"<<area<<endl;
        perimeter=2*(l+d);
        cout<<"The perimeter is:"<<perimeter<<endl;
        if(area>perimeter) cout<<"Yes";
        else cout<<"No"; 



    }