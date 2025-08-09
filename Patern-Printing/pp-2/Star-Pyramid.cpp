//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * *

#include <iostream>
using namespace std;
    int main()
        {
            int n;
            cin>>n;
            for(int i=1;i<=n;i++)
                {   
                    //space
                    for(int j=1;i+j<=n;j++)
                        cout<<"  ";
                    
                    //বিজোড় star এর জন্য (2i-1)  
                    for(int k=1;k<=(2*i-1);k++)
                        cout<<"* ";
                    cout<<endl;        
                }
        }