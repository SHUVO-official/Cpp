// আমাদের একটি ৪-সংখ্যার ডিজিট দেওয়া আছে। কাজ হলো সেই ডিজিটগুলোকে দুইটি নতুন সংখ্যা বানানো যাতে তাদের যোগফল সর্বনিম্ন হয়।

// মূল ধারণা:
// সংখ্যাটির সব ডিজিট আলাদা করে বের করব।
// তারপর ডিজিটগুলোকে ascending order (ছোট থেকে বড়) সাজাব।
// সবচেয়ে ছোট দুইটি ডিজিট দিয়ে দুইটি সংখ্যা বানাবো, এবং বাকি দুইটি ডিজিট দিয়ে অন্য সংখ্যা বানাবো।
// এভাবে তৈরি করা সংখ্যাগুলোর যোগফলই হবে সর্বনিম্ন।

// Dry Run উদাহরণ
// ধরা যাক num = 2932
// Digit গুলো: [2, 9, 3, 2]
// Sort করলে: [2, 2, 3, 9]
// নতুন সংখ্যা বানানো:
// প্রথম সংখ্যা: 2 এবং 3 → 23
// দ্বিতীয় সংখ্যা: 2 এবং 9 → 29
// যোগফল = 23 + 29 = 52

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num; // ইনপুট নাও

    // Step 1: num থেকে digit গুলো বের করা
    vector<int> digits;
    while(num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }

    // Step 2: digit গুলো ascending order এ সাজানো
    sort(digits.begin(), digits.end());

    // Step 3: দুইটি সংখ্যা বানানো
    int new1 = digits[0] * 10 + digits[2]; // প্রথম সংখ্যা
    int new2 = digits[1] * 10 + digits[3]; // দ্বিতীয় সংখ্যা

    // Step 4: যোগফল আউটপুট করা
    cout << (new1 + new2) << endl;

    return 0;
}
