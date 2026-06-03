#include <bits/stdc++.h>
using namespace std;
    void print(stack<int> st)
        {
            stack<int> temp; 
            //we will use extra stack
            while(st.size()>0)
                {
                    // cout<<st.top()<<" ";
                    temp.push(st.top());
                    st.pop();
                }
                // cout<<endl;
            //putting elements back from temp to st
            while(temp.size()>0)
                {
                    cout<<temp.top()<<" ";
                    st.push(temp.top());
                    temp.pop();
                } 
            cout<<endl;    
        }
    void pushatidx(stack<int>& st,int idx,int val)
        {
            stack<int> temp;
            while(st.size()>idx)
                {
                    // cout<<st.top()<<" ";
                    temp.push(st.top());
                    st.pop();
                }
            st.push(val);
            while(temp.size()>0)
                {
                    // cout<<st.top()<<" ";
                    st.push(temp.top());
                    temp.pop();
                }    
        }
    int main()
        {
            stack<int> st;
            st.push(10);
            st.push(20);
            st.push(30);
            st.push(40);
            st.push(50);

            print(st);  
            
            pushatidx(st,2,111);

            print(st);
        }