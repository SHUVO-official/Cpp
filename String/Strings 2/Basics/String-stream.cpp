#include <bits/stdc++.h>   
#include <sstream>         // stringstream ব্যবহার করার জন্য আলাদা হেডার ফাইল
using namespace std;       

int main()
{
    string str="Shuvo is    a   tuition teacher.";  

    stringstream ss(str);  
            // এখানে ss নামে একটি stringstream অবজেক্ট তৈরি করা হয়েছে
            // str ভ্যারিয়েবলের ভ্যালু ("Shuvo is    a   tuition teacher.") 
            // সরাসরি এই অবজেক্টে পাঠানো হয়েছে
            // এখন ss অবজেক্টটা cin এর মতো কাজ করবে, তবে ইনপুট আসছে স্ট্রিং থেকে
            // পরে যখন ss >> temp ব্যবহার করা হবে, তখন ss ওই স্ট্রিং থেকে একে একে শব্দ বের করবে
            // অতিরিক্ত স্পেসগুলো স্বয়ংক্রিয়ভাবে বাদ যাবে

    string temp;  
    // প্রতিবার লুপে একেকটা শব্দ রাখার জন্য temp নামের ভ্যারিয়েবল

    while(ss >> temp)      
    {
        cout << temp << endl;  
    }
}