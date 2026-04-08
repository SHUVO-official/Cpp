//এটা reverse array এর মত।শুধু এখানে কোন কোন নির্দিষ্ট index revese করব সেটা। 

#include <iostream>
#include <vector>
using namespace std;
    void display(vector<int>& a)
        {
            for(int i=0;i<a.size();i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
        }
    void reversepart(int i,int j,vector<int>& v)
        {
            // while(i<=j)
            //     {
            //         //swap
            //         int temp=v[i];
            //         v[i]=v[j];
            //         v[j]=temp;
            //         i++;
            //         j--;
            //     }
            for( ;i<=j;i++,j--)
                {
                    int temp=v[i];
                    v[i]=v[j];
                    v[j]=temp;
                }
                return;
                    }    
    int main()
        {
            vector<int> v;
            v.push_back(3);
            v.push_back(4);
            v.push_back(5);
            v.push_back(6);
            v.push_back(7);
            v.push_back(8);

            display(v);

            // for(int i=1,j=v.size()-2;i<=j;i++,j--)
            //     {
            //         //swap v[i]=v[i]
            //         int temp=v[i];
            //         v[i]=v[j];
            //         v[j]=temp;
            //     }

            reversepart(1,4,v);
            display(v);
        }