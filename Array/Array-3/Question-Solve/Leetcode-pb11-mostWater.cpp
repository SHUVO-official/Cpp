// তোমাকে একটি পূর্ণসংখ্যার অ্যারে height দেওয়া হয়েছে, যেখানে প্রতিটি উপাদান একটি উল্লম্ব রেখার উচ্চতা নির্দেশ করে।
// এই রেখাগুলোকে x-অক্ষের উপর বসানো হয়েছে, এবং প্রতিটি রেখার প্রস্থ ১ ইউনিট ধরা হয়েছে।
// তোমাকে এমন দুটি রেখা বেছে নিতে হবে যেগুলো মিলে একটি কন্টেইনার তৈরি করবে এবং সেই কন্টেইনারে সর্বাধিক পরিমাণ পানি রাখা যাবে।

// আউটপুট: সর্বাধিক পানি ধারণক্ষমতা (maximum area) রিটার্ন করো।
        // Input: height = [1,8,6,2,5,4,8,3,7]
        // Output: 49

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();

    // Step-1: দুই পাশে pointer বসানো (শুরুতে বাম = 0, ডান = n-1)
    int i = 0, j = n - 1;

    // সর্বাধিক area সংরক্ষণ করার জন্য ভ্যারিয়েবল
    int maxarea = 0;

    // Step-2: যতক্ষণ না দুই pointer একে অপরকে cross করে
    while (i < j) {
        // দৈর্ঘ্য = দুই pointer এর দূরত্ব
        int length = j - i;

        // প্রস্থ = দুই পাশে ছোট height
        int width = min(height[i], height[j]);

        // area = দৈর্ঘ্য × প্রস্থ
        int area = length * width;

        // সর্বাধিক area update করা
        maxarea = max(maxarea, area);

        // Step-3: ছোট height এর pointer সরানো
        // কারণ বড় height রেখে দিলে ভবিষ্যতে বড় area পাওয়ার সম্ভাবনা থাকে
        if (height[i] <= height[j]) i++;
        else j--;
    }

    return maxarea;
}

int main() {
    // Input array = প্রতিটি সংখ্যা bar-এর height নির্দেশ করছে
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    // Function call করে সর্বাধিক area বের করা
    cout << "Maximum water area: " << maxArea(height) << endl;
}
