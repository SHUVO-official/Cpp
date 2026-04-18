// তোমাকে একটি পূর্ণসংখ্যার অ্যারে nums দেওয়া হয়েছে।
// তোমার কাজ হলো:
// সবগুলো 0 কে অ্যারের শেষে পাঠানো।
// একইসাথে non-zero সংখ্যাগুলোর relative order (যে ক্রমে ছিল) সেটা বজায় রাখতে হবে।
            // Input: nums = [0,1,0,3,12]
            // Output: [1,3,12,0,0]


#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr)
{
    int n = arr.size();

    // Step-1: non-zero element রাখার জন্য নতুন vector বানানো
    vector<int> v;
    int noz = 0; // কতগুলো zero আছে সেটা গোনার জন্য

    // Step-2: পুরো অ্যারে ঘুরে দেখা
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0) 
            v.push_back(arr[i]); // non-zero হলে নতুন vector এ যোগ করো
        else 
            noz++; // zero হলে count বাড়াও
    }

    // Step-3: শেষে যতগুলো zero আছে, সেগুলো যোগ করো
    for(int i = 0; i < noz; i++)
    {
        v.push_back(0);
    }

    // Step-4: নতুন vector থেকে আবার মূল arr এ কপি করো
    for(int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }
}

int main() {
    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums); // function call

    cout << "Result: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
}
