//একটি string-এর array দেওয়া আছে। তোমাকে সেই array থেকে Longest Common Prefix (সবচেয়ে বড় সাধারণ উপসর্গ) বের করতে হবে।
// যদি কোনো common prefix না থাকে, তাহলে খালি string ("") return করতে হবে।
// Prefix মানে হলো string-এর শুরু থেকে মিল থাকা অংশ।
// উদাহরণ:  
// Input: ["flower","flow","flight"]  
// Output: "fl"

// Input: ["dog","racecar","car"]  
// Output: ""

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort এর জন্য দরকার
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if (n == 1) return strs[0]; // যদি শুধু একটা string থাকে, সেটাই prefix
    
    sort(strs.begin(), strs.end()); // প্রথম ও শেষ string compare করলেই যথেষ্ট
    
    string first = strs[0];
    string last = strs[n - 1];
    string prefix = "";
    
    for (int i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] == last[i]) {
            prefix += first[i];
        } else {
            break; // mismatch হলে loop থামবে
        }
    }
    return prefix;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    
    vector<string> strs(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    
    string ans = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << ans << endl;
    
    return 0;
}
