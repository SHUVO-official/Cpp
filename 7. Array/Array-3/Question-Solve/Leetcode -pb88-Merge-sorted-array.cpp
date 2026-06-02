//Ques: Ei question ta eirokkom je v1 & v2 name 2 ta vetor ase ascending oreder e amar kaj onno ekta vector e ei 2 ta vector ke 1st e merge kore then ascending order e sort kora.

#include <iostream>
#include <vector>
using namespace std;
    vector<int> merge(vector<int>& v1,vector<int>& v2)
        {
            int n=v1.size();
            int m=v2.size();

            vector<int> a(m+n);
            int i=0,j=0,k=0;

            while(i<n && j<m)
                {
                    if(v1[i]<v2[j])
                        {
                          a[k]=v1[i];
                          i++;
                          k++;
                        }
                    else     
                        {
                            a[k]=v2[j];
                            j++;
                            k++;
                        }
                }
            //for remining values মানে যেকোনো একটা ভেক্টর er index sesh hoye gele bakitar man auto puron hobe v3 te
            if(i==n)
                {
                    while(j<m)
                        {
                            a[k]=v2[j];
                            k++;
                            j++;
                        }
                }
            if(j==m)
                {
                    while(i<n)
                        {
                            a[k]=v1[i];
                            k++;
                            i++;
                        }
                }
                return a;        

        }
    int main()
        {
            vector<int> v1;
            v1.push_back(1);
            v1.push_back(4);
            v1.push_back(5);
            v1.push_back(8);
            for(int i=0;i<v1.size();i++)
                {
                    cout<<v1[i]<<" ";
                }
                cout<<endl;

            vector<int> v2;
            v2.push_back(2);
            v2.push_back(3);
            v2.push_back(6);
            v2.push_back(7);
            v2.push_back(10);
            v2.push_back(12);
            for(int i=0;i<v2.size();i++)
                {
                    cout<<v2[i]<<" ";
                }
                cout<<endl;

            vector<int> v=merge(v1,v2);

            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
        }