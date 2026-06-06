// একটা string দেওয়া আছে যেখানে শুধু ( আর ) আছে। বলো string টা balanced কিনা।
// 📌 ব্যাখ্যা
// Balanced মানে হলো:
// প্রতিটি opening bracket ( এর সাথে একটা closing bracket ) থাকতে হবে।
// Order ঠিক থাকতে হবে, মানে আগে খোলা bracket পরে বন্ধ হতে হবে।
// শেষে stack empty থাকলে balanced, না হলে unbalanced।

// 🔄 Example
// Input: (()) → Balanced
// Input: (() → Not Balanced
// Input: ())( → Not Balanced

#include <bits/stdc++.h>
using namespace std;
    bool isbalenced(string s)
        {
            stack<char> st;
            for(int i=0;i<s.size();i++)
                {   
                    if(s[i] == '(') st.push(s[i]);
                    else if(s[i] == ')')
                        {
                            if(st.empty()) return false;
                            else st.pop();
                        }
                }
            return st.empty();    
        }
    int main()
        {
            string s;
            cout<<"Enter the Bracket Strign: ";
            cin>>s;

            if(isbalenced(s)) cout<<"Yes !!!";
            else cout<<"Not";
        }