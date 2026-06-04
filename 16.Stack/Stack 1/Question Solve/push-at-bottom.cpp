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
    void pushatbottom(stack<int>& st,int val)
        {
            stack<int> temp;
            while(st.size()>0)
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
    void pushatbottomrec(stack<int>& st,int val)
        {
            if(st.size() == 0) 
                {
                    st.push(val);
                    return;
                }
            int x=st.top();
            st.pop();
            pushatbottomrec(st,val);
            st.push(x);
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

            //Itteritively
            // pushatbottom(st,111);
            //Recursively
            pushatbottomrec(st,111);

            print(st);
        }