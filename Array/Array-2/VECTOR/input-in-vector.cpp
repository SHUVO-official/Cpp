#include <iostream>
#include <vector> 
using namespace std;
    int main()
        {

            //যদি size থাকে
            // vector<int> v(5); 
            // for(int i=0;i<5;i++)
            //     {
            //         cin>>v[i];
            //     }

            // for(int i=0;i<5;i++)
            //     {
            //         cout<<v[i];
            //     }    

                        //যদি size না থাকে

                        vector<int> v(5); 
            
                    for(int i=0;i<5;i++)
                        {
                            int x;
                            cin>>x;
                            v.push_back(x);
                        }

                    for(int i=0;i<5;i++)
                        {
                            cout<<v[i];
                        }


        }