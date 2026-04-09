//Ques: Sort the array 0's and 1's

#include <iostream>
#include <vector>
using namespace std;
    void display(vector<int>& v)
        {
            int n=v.size();
            for(int i=0;i<n;i++)
                {
                    cout<<v[i]<<" ";
                }
        }

    void sort01(vector<int>& v)
        {
            int noo=0,noz=0;        //noo=no of one : noz=no of zero
            for(int i=0;i<v.size();i++)
                {
                    if(v[i]==0) noz++;
                    else noo++;
                }

            //filling elements    
            for(int i=0;i<v.size();i++)
                {
                    if(i<noz) v[i]=0;
                    else v[i]=1;
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
            
            display(v);
            cout<<endl;

            sort01(v);

            display(v);

        }