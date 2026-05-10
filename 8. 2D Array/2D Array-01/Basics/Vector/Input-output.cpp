  #include <iostream>
  using namespace std;
    int main()
        {
            int a[3][4]={2,3,5,7,5,1,9,2,3,6,8,9};

            //output
            for(int i=0;i<3;i++)
                {
                    for(int j=0;j<4;j++)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                }


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
                            cin>>a[i][j];
                        }
                }

            //output
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                }    

 
        }