#include <iostream>
#include <climits>
  using namespace std;
    int main()
        {
            int r;
            cout<<"Enter row number for array: ";
            cin>>r;
            
            int c;
            cout<<"Enter column for array: ";
            cin>>c;

            int v[r][c];
            //input
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            cin>>v[i][j];
                        }
                }

            //sum
            int sum=0;    
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            sum+=v[i][j];
                        }
                }
            cout<<"The sum of all element is: "<<sum;
            

        }