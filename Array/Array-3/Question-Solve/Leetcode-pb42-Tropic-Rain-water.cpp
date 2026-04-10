// তোমাকে একটি array height দেওয়া আছে, যেখানে প্রতিটি সংখ্যা একটি bar-এর উচ্চতা নির্দেশ করে।
// এই bar গুলো পাশাপাশি দাঁড়িয়ে আছে এবং প্রতিটি bar-এর প্রস্থ 1।

// এখন প্রশ্ন হলো: বৃষ্টির পানি পড়লে এই bar গুলোর মাঝে কতটুকু পানি জমতে পারে সেটা বের করতে হবে।

// ✨ উদাহরণ
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]  
// Output: 6  
// ব্যাখ্যা: এখানে মোট 6 ইউনিট পানি জমতে পারে।

// Input: height = [4,2,0,3,2,5]  
// Output: 9
                    // <Answer :code:>

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();

    // Step-1: প্রতিটি index-এর আগে সবচেয়ে বড় bar-এর height বের করা
    // prev[i] = i-এর আগে পর্যন্ত সর্বোচ্চ height
    vector<int> prev(n);
    prev[0] = -1; // প্রথম index-এর আগে কোনো bar নেই
    int maxVal = height[0];
    for (int i = 1; i < n; i++) {
        prev[i] = maxVal; // আগের সর্বোচ্চ height বসানো হচ্ছে
        if (maxVal < height[i]) maxVal = height[i]; // নতুন max update
    }

    // Step-2: প্রতিটি index-এর পরে সবচেয়ে বড় bar-এর height বের করা
    // next[i] = i-এর পরে পর্যন্ত সর্বোচ্চ height
    vector<int> next(n);
    next[n - 1] = -1; // শেষ index-এর পরে কোনো bar নেই
    maxVal = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        next[i] = maxVal; // পরের সর্বোচ্চ height বসানো হচ্ছে
        if (maxVal < height[i]) maxVal = height[i]; // নতুন max update
    }

    // Step-3: প্রতিটি index-এর জন্য min(prev[i], next[i]) বের করা
    // কারণ পানি জমতে হলে দুই পাশে ছোট height এর উপর নির্ভর করে
    vector<int> mini(n);
    for (int i = 0; i < n; i++) {
        mini[i] = min(prev[i], next[i]);
    }

    // Step-4: পানি হিসাব করা
    // height[i] যদি mini[i]-এর চেয়ে ছোট হয়, তাহলে পানি জমবে
    int water = 0;
    for (int i = 1; i < n; i++) {
        if (height[i] < mini[i]) {
            water += (mini[i] - height[i]); // জমা পানি যোগ করা হচ্ছে
        }
    }

    return water;
}

int main() {
    // Input array → প্রতিটি সংখ্যা bar-এর height নির্দেশ করছে
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    // Function কল করে trapped water বের করা
    cout << "Total trapped water: " << trap(height) << endl;

    return 0;
}
