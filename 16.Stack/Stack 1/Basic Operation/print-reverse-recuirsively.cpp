#include <iostream>
#include <stack>
using namespace std;
void displayrec(stack<int>& st)
    {
        if(st.size() == 0) return;
        int x=st.top();
        st.pop();
        cout<<x<<" ";
        displayrec(st);
        st.push(x);
    }
int main(){
    stack<int> st;

    // Inserting element top of the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayrec(st);
}