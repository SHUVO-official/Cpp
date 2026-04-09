//Count the number of triplets whose sum is equal to the given value x.

#include <iostream>
#include <vector>
using namespace std;
    int main()
        {
            int x;
            cout<<"Enter your target Number: ";
            cin>>x;

            vector<int> v;
            int n;
            cout<<"Enter the size of your array: ";
            cin>>n;

            cout<<"Enter your array element: ";
            for(int i=0;i<n;i++)
                {
                    int a;
                    cin>>a;
                    v.push_back(a);
                }
            int count=0;
            for(int i=0;i<v.size();i++)
                {
                    for(int j=i+1;j<v.size();j++)
                        {
                            for(int k=j+1;k<v.size();k++)
                                {
                                    if(v[i]+v[j]+v[k]==x) 
                                        {
                                            count++;
                                            cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                                        }    
                                }
                        }
                } 
                cout<<"The count is: "<<count;   
                

        }