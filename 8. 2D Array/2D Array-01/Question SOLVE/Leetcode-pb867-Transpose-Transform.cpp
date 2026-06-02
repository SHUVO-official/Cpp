// Ques: you are given a matrix/2d array of size (n*n) .change this matrix into its transpose.
 // সমস্যা: একটি 2D পূর্ণসংখ্যার অ্যারে (matrix) দেওয়া আছে।
// আমাদের কাজ হলো সেই matrix-এর transpose বের করা।
// Transpose মানে হলো matrix-কে তার মূল diagonal বরাবর উল্টে দেওয়া,
// অর্থাৎ row এবং column index গুলোকে অদলবদল করা।

 #include <iostream>
  using namespace std;
    int main()
        {
            
            int r;
            cout<<"Enter row/column number for array: ";  //karon squre matrix
            cin>>r;
            

            int v[r][r];
            //input
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<r;j++)
                        {
                            cin>>v[i][j];
                        }
                }
                cout<<endl;


            //output
            for(int i=0;i<r;i++)
                {
                    for(int j=0;j<r;j++)
                        {
                            cout<<v[i][j]<<" ";
                        }
                        cout<<endl;
                }  
                cout<<endl;
            
          
                    // আমরা main diagonal-এর উপরের অংশকে নিচের অংশের সাথে swap করব
                    for (int i = 0; i < r; i++) {
                    // j শুরু হচ্ছে i+1 থেকে, কারণ diagonal-এর নিচের অংশ swap করতে হবে
                    for (int j = i + 1; j < r; j++)     
                        {

                    int temp = v[i][j];
                    v[i][j] = v[j][i];
                    v[j][i] = temp;
                                }
            }


               for(int i=0;i<r;i++)
                {
                    for(int j=0;j<r;j++)
                        {
                            cout<<v[i][j]<<" ";
                        }
                        cout<<endl;
                }  
                cout<<endl; 
                
                

 
        }