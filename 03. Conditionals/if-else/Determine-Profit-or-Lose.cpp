/* This program determines whether there is a profit or loss */
#include <iostream>
using namespace std;
    int main()
    {
        float sp,cp;
        cout<<"Enter the selling price & costing price:";
        cin>>sp>>cp;
        if(sp>cp)
        {
            cout<<"Profit."<<endl;
            cout<<"The profit is:"<<sp-cp<<endl;
        }
        else if(sp<cp)
        {
            cout<<"Lose."<<endl;
            cout<<"The Lose is:"<<cp-sp<<endl;

        }
        else cout<<"No lose no love";
    }