//Ques : Write a program to store roll number and marks obtained by 4 students side by side in a matrix.

  #include <iostream>
  using namespace std;
    int main()
        {

            int v[2][4];      //1st row for 4 stu=roll & 2nd for mmarks
            //input
            for(int i=0;i<2;i++)
                {
                    for(int j=0;j<4;j++)
                        {
                            cin>>v[i][j];
                        }
                }

            //output
            for(int i=0;i<2;i++)
                {
                    for(int j=0;j<4;j++)
                        {
                            cout<<v[i][j]<<" ";
                        }
                        cout<<endl;
                }    

 
        }