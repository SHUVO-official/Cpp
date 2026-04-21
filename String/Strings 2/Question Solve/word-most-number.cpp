//Ques: Given a sentence 'str', return the word that is occuring most number of times in that sentence.

#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
    // বাক্য ইনপুট হিসেবে দেওয়া হয়েছে
    string a="Shuvo is a maths teacher.He is a mentor as well.";

    // stringstream দিয়ে শব্দ আলাদা করা হবে
    stringstream b(a);
    string temp;
    vector<string> v;

    // প্রতিটি শব্দকে vector এ রাখা হচ্ছে
    while(b>>temp)
    {
        v.push_back(temp);
    }

    // শব্দগুলোকে sort করা হচ্ছে যাতে একই শব্দ একসাথে আসে
    sort(v.begin(),v.end());

    int maxc=0;   
    int count=0;  

    // প্রথম লুপে সর্বোচ্চ frequency বের করা হচ্ছে
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;   // আগের শব্দের সাথে মিললে count বাড়বে
        else count=1;               // নতুন শব্দ হলে count আবার 1 হবে
        maxc=max(maxc,count);       
    }

    // দ্বিতীয় লুপে সেই শব্দগুলো প্রিন্ট করা হচ্ছে যেগুলো maxc বার এসেছে
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxc)
        {
            cout<<v[i]<<"--> "<<maxc<<endl; 
        }
    }
}
