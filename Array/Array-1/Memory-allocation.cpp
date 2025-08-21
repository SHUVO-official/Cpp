#include <iostream>
using namespace std;
    int main()
        {
            int x[5]={23,43,56,23,76};
            cout<<&x<<endl;//এটা main array এর address
            cout<<&x[0]<<endl;//এটা ১ম index
            cout<<&x[1]<<endl;
            cout<<&x[2]<<endl;
            cout<<&x[3]<<endl;
            cout<<&x[4]<<endl;


            // 0x61fefc=same(main array)
            // 0x61fefc=same(0 তম index)
            
            // 0x61ff00
            // 0x61ff04
            // 0x61ff08
            // 0x61ff0c


        }