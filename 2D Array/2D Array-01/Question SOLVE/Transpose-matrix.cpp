 #include <iostream>
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
                cout<<endl;


            //output
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            cout<<v[i][j]<<" ";
                        }
                        cout<<endl;
                }  
                cout<<endl;
                
            //transpose= mane column wise printing
            for(int i=0;i<c;i++)
                {
                    for(int j=0;j<r;j++)
                        {
                             cout<<v[j][i]<<" ";
                        }
                        cout<<endl;
                }    

 
        }