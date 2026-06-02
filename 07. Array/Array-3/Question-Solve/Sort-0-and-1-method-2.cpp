//Ques: Sort the array 0's and 1's

#include <iostream>
#include <vector>
using namespace std;
    void display(vector<int>& v)
        {
            
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
        }
    // void swap(int i,int j,vector<int>& v)
    //     {
    //         int temp=v[i];
    //         v[i]=v[j];
    //         v[j]=temp;

    //     }    

    void sort01(vector<int>& v)
        {
            // for(int i=0,j=v.size()-1;i<j;i++,j--)
            //     {
                    // if(v[i]==0) i++;
                    // else if(v[j]==1) j--;
                    // else if(v[i]==1 && v[j]==0) 
                    //     {
                    //         swap(i,j,v);
                    //         // v[i]=0;
                    //         // v[j]=1;
                    //     }
                    
            //     }   

            int i=0,j=v.size()-1;
            while(i<j)
                {
                    if(v[i]==0) i++;
                    if(v[j]==1) j--;
                    // if(i>j) break;
                     else if(v[i]==1 && v[j]==0) 
                        {
                            // swap(i,j,v);
                            v[i]=0;
                            v[j]=1;
                            i++;
                            j--;
                        }
                }
        }    
    int main()
        {
            vector<int> v;
            v.push_back(1);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(0);
            v.push_back(0);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(1);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(0);
            v.push_back(0);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
           
            
            display(v);

            sort01(v);

            display(v);

        }