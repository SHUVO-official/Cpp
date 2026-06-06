#include <bits/stdc++.h>
using namespace std;

string removeduplicates(string s)   // return type string করতে হবে
{
    stack<char> st;
    st.push(s[0]);

    for(int i=1; i<s.size(); i++)
    {
        if(s[i] != st.top()) st.push(s[i]);
    }

    string ans = "";
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s = "aaabbcddaabfg";
    cout << "Original: " << s << endl;
    s = removeduplicates(s);
    cout << "After removing duplicates: " << s << endl;
}
