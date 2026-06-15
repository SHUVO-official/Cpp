#include <bits/stdc++.h>
using namespace std;
    void display(queue<int>& q)
        {
            for(int i=1;i<=q.size();i++)
                {
                    int x=q.front();
                    cout<<x<<" ";
                    q.pop();
                    q.push(x);
                }
                cout<<endl;
        }
    void reverse(queue<int>& q)
        {
            stack<int> st;
            //All element send Queue to Stack
            while(!q.empty())
                {
                    int x=q.front();
                    q.pop();
                    st.push(x);
                }
            //Then send Stack to Queue    
            while(!st.empty())
                {
                    int x=st.top();
                    st.pop();
                    q.push(x);
                }

        }    
    int main()
        {
            queue<int> q;
            q.push(10);
            q.push(20);
            q.push(30);
            q.push(40);
            q.push(50);

            display(q);
            reverse(q);
            display(q);
        }