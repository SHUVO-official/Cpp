#include <iostream>
using namespace std;
        /*swap without using swap() function*/

    // int main()
    //     {
    //         int a,b;
    //         cin >> a >> b;
    //         int temp=a;
    //         a=b;
    //         b=temp;
    //         cout<<a<<" "<<b;

    //     }
    
        /*swap using swap() function*/
        int main()
            {
                int a,b;
                cin >> a >> b;

                swap(a,b);
                cout<<a<<" "<<b;
            }
