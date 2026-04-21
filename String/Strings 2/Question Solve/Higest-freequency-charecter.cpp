//Ques: Given a string consisting of lowercase English alphabates.Print the charecter that is occurring most number of times.

#include <bits/stdc++.h>
using namespace std;

int main() {
    // একটি string নেওয়া হয়েছে
    string s = "raghav";

    // ২৬ অক্ষরের জন্য একটি array বানানো হয়েছে (প্রতিটি অক্ষরের frequency রাখবে)
    vector<int> arr(26,0);

    // প্রতিটি character এর frequency গণনা করা হচ্ছে
    for(int i=0; i<s.length(); i++){
        char ch = s[i];          // string থেকে character বের করা
        int ascii = (int)ch;     // character এর ASCII মান বের করা
        arr[ascii-97]++;         // 'a' এর ASCII = 97, তাই index = ascii-97
    }

    // সর্বোচ্চ frequency বের করার জন্য একটি ভ্যারিয়েবল
    int mx = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>mx) mx = arr[i];   // যদি frequency বেশি হয় তবে mx আপডেট হবে
    }

    // যেসব character এর frequency সর্বোচ্চ, সেগুলো print করা হবে
    for(int i=0; i<26; i++){
        if(arr[i]==mx){
            int ascii = i + 97;      // index থেকে আবার ASCII মানে রূপান্তর
            char ch = (char)ascii;   // ASCII থেকে character বানানো
            cout<<ch<<" "<<mx<<endl; // character এবং তার frequency দেখানো
        }
    }
} 