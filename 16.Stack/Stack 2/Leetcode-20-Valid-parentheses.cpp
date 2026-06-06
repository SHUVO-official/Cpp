#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool isBalanced(string& s) {
   
    stack<char> st; 
   
    for (int i=0;i<s.size();i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            
            // No opening bracket
            if (st.empty()) return false; 
            if ((s[i] == ')' && st.top() != '(') ||
                (s[i] == '}' && st.top() != '{') ||
                (s[i] == ']' && st.top() != '[')) {
                return false;
            }
            
            // Pop matching opening bracket
            st.pop(); 
        }
    }
    
    // Balanced if stack is empty
    return st.empty(); 
}

int main() {
    string s="[()()]{}";
    cout<<(isBalanced(s)?"true":"false");
    return 0;
}