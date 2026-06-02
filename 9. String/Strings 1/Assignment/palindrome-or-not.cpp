//Ques: Cheak weather the given string is palindrome or not

// #include <bits/stdc++.h>
// using namespace std;
//     bool ispalindrome(string s)
//         {
//             int n=s.size();
//             for(int i=0;i<n/2;i++)
//                 {
//                     if(s[i]!=s[n-i-1]) return false;
//                 }
//                 return true;
//             }

//             int main()
//                 {
//                 string s;
//                 getline(cin,s);


//                 ispalindrome(s) ? cout<<"Yes,a palindrome" : cout<<"No";
//             }

    //method -- 2

#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            string s;
            getline(cin,s);
            string t=s;
            reverse(s.begin(),s.end());
            if(s==t) cout<<"Yes";
            else cout<<"not";
        }    