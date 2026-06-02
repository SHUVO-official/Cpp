//Ques: Given two string s & t,return true if t is an anagram of s,and false otherwise
// //      input s=SHUVO HASAN MARUF
//               t=MARUF HASAN SHUVO
//         output=yes      

// Ques: দুটি স্ট্রিং s এবং t দেওয়া আছে। যদি t স্ট্রিংটি s-এর anagram হয় তবে true রিটার্ন করবে,
// অন্যথায় false রিটার্ন করবে।
// Ans: anagram মানে হলো দুটি স্ট্রিংয়ের ক্যারেক্টারগুলো একই থাকবে, শুধু ক্রম (order) আলাদা হতে পারে।
// উদাহরণ: s = "SHUVO HASAN MARUF"
//          t = "MARUF HASAN SHUVO"
// এখানে দুই স্ট্রিংয়ের ক্যারেক্টার একই, শুধু ক্রম আলাদা → তাই উত্তর হবে true (yes).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ইনপুট স্ট্রিং s এবং t
    string s = "SHUVO HASAN MARUF";
    string t = "MARUF HASAN SHUVO";

    // sort করে দুই স্ট্রিংয়ের ক্যারেক্টারগুলোকে একই ক্রমে সাজানো হচ্ছে
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << s << endl;
    cout << t << endl;

    // যদি সাজানো দুই স্ট্রিং এক হয় → anagram
    if (s == t) cout << true;   // true মানে yes
    else cout << false;         // false মানে no
}
