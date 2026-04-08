// Ques: Rotate the given array 'a' by k steps,where k is non-negative.
// Note: K can be greater than n as well where n is the size of array 'a'.

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
            v.push_back(2);
            v.push_back(3);
            v.push_back(4);
            v.push_back(5);
            v.push_back(6);
            v.push_back(7);
            v.push_back(8);
            v.push_back(9);

            display(v);
            int k;
            cout<<"Enter how many time you want to ratate the array: ";
            cin>>k;
            //rotate
            int n=v.size();
            if(k>n) k=k%n;
            reversepart(0,n-k-1,v);
            reversepart(n-k,n-1,v);
            reversepart(0,n-1,v);

            display(v);
        }