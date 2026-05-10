//Ques : Write a program to find the largest element in a given 2d array of integers.

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

            //max
            int max=INT_MIN;    
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            if(max<v[i][j]) max=v[i][j];
                        }
                }
            cout<<"The maximum element is: "<<max;
            

        }