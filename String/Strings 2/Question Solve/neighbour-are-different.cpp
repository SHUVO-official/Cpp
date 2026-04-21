//Ques: Input a string and return the number of times the neibouting charecter are different from each other.
// Ques: একটি স্ট্রিং ইনপুট নাও এবং গণনা করো কতবার পাশের (neighbouring) ক্যারেক্টার ভিন্ন হয়েছে।
// Ans: পাশের ক্যারেক্টার ভিন্ন হলে count বাড়বে।
// উদাহরণ: "aba" → এখানে 'a' ও 'b' ভিন্ন, 'b' ও 'a' ভিন্ন → মোট count = 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);   // ইনপুট স্ট্রিং নেওয়া হচ্ছে
    int count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (n == 1)   // যদি স্ট্রিংয়ের দৈর্ঘ্য 1 হয়, পাশের ক্যারেক্টার নেই → count = 0
        {
            count = 0;
            break;
        }
        if (n == 2 && s[0] != s[i])   // যদি দৈর্ঘ্য 2 হয় এবং দুই ক্যারেক্টার ভিন্ন হয় → count = 1
        {
            count = 1;
            break;
        }
        if (i == 0)   // প্রথম ক্যারেক্টার শুধু পরেরটার সাথে মিলানো হবে
        {
            if (s[i] != s[i + 1]) count++;
        }
        else if (i == n - 1)   // শেষ ক্যারেক্টার শুধু আগেরটার সাথে মিলানো হবে
        {
            if (s[i] != s[i - 1]) count++;
        }
        else if (s[i] != s[i + 1] && s[i] != s[i - 1])   // মাঝের ক্যারেক্টার দুই পাশের সাথে ভিন্ন হলে count++
        {
            count++;
        }
    }

    cout << count;   // চূড়ান্ত ফলাফল প্রিন্ট করা হচ্ছে
}
