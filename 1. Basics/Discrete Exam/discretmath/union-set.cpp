#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input2.txt");
            int n,m;
            vector<int> v1,v2;

            fin>>n;
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    v1.push_back(x);
                }

            fin>>m;
            for(int i=0;i<m;i++)
                {
                    int x;
                    fin>>x;
                    v2.push_back(x);
                } 
                
            set<int> s;
            s.insert(v1.begin(),v1.end());
            s.insert(v2.begin(),v2.end());
            
            for(auto i:s)
                {
                    cout<<i<<" ";
                }

        }





















  
        







// #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("input2.txt", "r");

//     int n, m;
//     int v1[100], v2[100];

//     fscanf(fin, "%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         v1[i] = x;
//     }

//     fscanf(fin, "%d", &m);

//     for (int i = 0; i < m; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         v2[i] = x;
//     }

//     int s[200];
//     int size = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < size; j++)
//         {
//             if (s[j] == v1[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             s[size] = v1[i];
//             size++;
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < size; j++)
//         {
//             if (s[j] == v2[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             s[size] = v2[i];
//             size++;
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", s[i]);
//     }

//     fclose(fin);

//     return 0;
// }

































// # Set Union Program — C Code-এর বাংলা ব্যাখ্যা

// এই প্রোগ্রামটির কাজ হলো **দুটি Set-এর Union বের করা**।

// অর্থাৎ, দুইটি Set-এর সবগুলো element একসাথে নেওয়া হবে, কিন্তু **একই element একাধিকবার থাকলে সেটি একবারই রাখা হবে।**

// ---

// ## ১. Header File

// ```c
// #include <stdio.h>
// ```

// এখানে `stdio.h` header file ব্যবহার করা হয়েছে।

// এটির মাধ্যমে আমরা কিছু গুরুত্বপূর্ণ function ব্যবহার করতে পারি, যেমন:

// * `printf()` → Output দেখানোর জন্য
// * `fscanf()` → File থেকে data পড়ার জন্য
// * `fopen()` → File খোলার জন্য
// * `fclose()` → File বন্ধ করার জন্য

// ---

// ## ২. Main Function

// ```c
// int main()
// {
// ```

// এখান থেকে C program-এর execution শুরু হয়।

// `main()` হলো C program-এর প্রধান function।

// ---

// ## ৩. Input File Open করা

// ```c
// FILE *fin = fopen("input2.txt", "r");
// ```

// এখানে `input2.txt` নামের একটি file **read mode (`"r"`)**-এ খোলা হয়েছে।

// * `FILE *fin` → File-এর জন্য একটি pointer
// * `fopen()` → File open করার function
// * `"input2.txt"` → যে file থেকে data নেওয়া হবে
// * `"r"` → Read mode

// অর্থাৎ:

// **input2.txt → file থেকে data পড়ব।**

// ---

// # ৪. Variable এবং Array Declaration

// ```c
// int n, m;
// ```

// এখানে দুটি integer variable নেওয়া হয়েছে।

// * `n` → প্রথম Set-এ কয়টি element আছে
// * `m` → দ্বিতীয় Set-এ কয়টি element আছে

// ---

// ```c
// int v1[100], v2[100];
// ```

// এখানে দুটি array নেওয়া হয়েছে।

// * `v1[100]` → প্রথম Set-এর element রাখবে
// * `v2[100]` → দ্বিতীয় Set-এর element রাখবে

// প্রতিটি array সর্বোচ্চ 100টি integer রাখতে পারবে।

// ---

// # ৫. প্রথম Set-এর Size নেওয়া

// ```c
// fscanf(fin, "%d", &n);
// ```

// এখানে `input2.txt` file থেকে প্রথম integer নেওয়া হচ্ছে এবং `n`-এর মধ্যে রাখা হচ্ছে।

// ধরো file-এ আছে:

// ```text
// 5
// ```

// তাহলে:

// ```text
// n = 5
// ```

// অর্থাৎ প্রথম Set-এ ৫টি element আছে।

// ---

// # ৬. প্রথম Set-এর Element নেওয়া

// ```c
// for (int i = 0; i < n; i++)
// {
// ```

// এই loop-টি `n` বার চলবে।

// যদি:

// ```text
// n = 5
// ```

// তাহলে `i` হবে:

// ```text
// 0
// 1
// 2
// 3
// 4
// ```

// ---

// ```c
// int x;
// ```

// প্রতিবার একটি element সাময়িকভাবে রাখার জন্য `x` variable নেওয়া হয়েছে।

// ---

// ```c
// fscanf(fin, "%d", &x);
// ```

// File থেকে একটি integer পড়া হচ্ছে এবং `x`-এর মধ্যে রাখা হচ্ছে।

// ---

// ```c
// v1[i] = x;
// ```

// `x`-এর value প্রথম Set-এর array `v1`-এর মধ্যে রাখা হচ্ছে।

// যেমন:

// ```text
// 1 2 3 4 5
// ```

// তাহলে:

// ```text
// v1[0] = 1
// v1[1] = 2
// v1[2] = 3
// v1[3] = 4
// v1[4] = 5
// ```

// ---

// ```c
// }
// ```

// এখানে প্রথম Set-এর element নেওয়ার loop শেষ।

// ---

// # ৭. দ্বিতীয় Set-এর Size নেওয়া

// ```c
// fscanf(fin, "%d", &m);
// ```

// এখন file থেকে দ্বিতীয় Set-এর মোট element সংখ্যা নেওয়া হচ্ছে।

// ধরো:

// ```text
// 4
// ```

// তাহলে:

// ```text
// m = 4
// ```

// অর্থাৎ দ্বিতীয় Set-এ ৪টি element আছে।

// ---

// # ৮. দ্বিতীয় Set-এর Element নেওয়া

// ```c
// for (int i = 0; i < m; i++)
// {
// ```

// এই loop-টি দ্বিতীয় Set-এর প্রতিটি element নেওয়ার জন্য ব্যবহার করা হয়েছে।

// ---

// ```c
// int x;
// ```

// একটি element সাময়িকভাবে রাখার জন্য `x` নেওয়া হয়েছে।

// ---

// ```c
// fscanf(fin, "%d", &x);
// ```

// File থেকে একটি element পড়া হচ্ছে।

// ---

// ```c
// v2[i] = x;
// ```

// Element-টি দ্বিতীয় Set-এর array `v2`-তে রাখা হচ্ছে।

// ধরো দ্বিতীয় Set:

// ```text
// 3 4 5 6
// ```

// তাহলে:

// ```text
// v2[0] = 3
// v2[1] = 4
// v2[2] = 5
// v2[3] = 6
// ```

// ---

// # ৯. Union রাখার জন্য Array

// ```c
// int s[200];
// ```

// এখানে `s` নামে একটি array নেওয়া হয়েছে।

// এই array-তে দুইটি Set-এর **unique element** রাখা হবে।

// দুইটি array-তে সর্বোচ্চ:

// ```text
// 100 + 100 = 200
// ```

// টি element থাকতে পারে।

// তাই:

// ```c
// s[200]
// ```

// নেওয়া হয়েছে।

// ---

// # ১০. বর্তমানে কয়টি Unique Element আছে

// ```c
// int size = 0;
// ```

// শুরুতে `s` array-তে কোনো element নেই।

// তাই:

// ```text
// size = 0
// ```

// এরপর নতুন unique element যোগ হলে `size` এক করে বাড়ানো হবে।

// ---

// # ১১. প্রথম Set-এর Element Check করা

// ```c
// for (int i = 0; i < n; i++)
// {
// ```

// এখানে প্রথম Set-এর প্রতিটি element একে একে দেখা হচ্ছে।

// ---

// ```c
// int found = 0;
// ```

// `found` variable দিয়ে দেখা হবে element-টি আগে `s` array-তে আছে কি না।

// শুরুতে:

// ```text
// found = 0
// ```

// এর অর্থ:

// **এখনও element-টি পাওয়া যায়নি।**

// ---

// # ১২. আগে থেকে Element আছে কি না Check করা

// ```c
// for (int j = 0; j < size; j++)
// {
// ```

// এখানে `s` array-তে আগে যেসব element রাখা হয়েছে, সেগুলোর সাথে বর্তমান element compare করা হচ্ছে।

// ---

// ```c
// if (s[j] == v1[i])
// ```

// এখানে check করা হচ্ছে:

// **`v1[i]` element-টি `s` array-তে আগে থেকেই আছে কি না।**

// যদি থাকে, তাহলে condition true হবে।

// ---

// ```c
// found = 1;
// ```

// যদি element পাওয়া যায়, তাহলে:

// ```text
// found = 1
// ```

// এর অর্থ:

// **Element আগে থেকেই আছে।**

// ---

// ```c
// break;
// ```

// Element পাওয়া গেলে আর loop চালানোর দরকার নেই।

// তাই `break` দিয়ে loop বন্ধ করা হচ্ছে।

// ---

// # ১৩. Element না থাকলে Add করা

// ```c
// if (found == 0)
// ```

// এর অর্থ:

// **যদি element আগে থেকে পাওয়া না যায়।**

// ---

// ```c
// s[size] = v1[i];
// ```

// তাহলে element-টি `s` array-তে যোগ করা হবে।

// ---

// ```c
// size++;
// ```

// নতুন element যোগ হওয়ার কারণে `size` ১ বাড়ানো হচ্ছে।

// যেমন:

// ```text
// size = 3
// ```

// ছিল।

// একটি নতুন element যোগ করার পর:

// ```text
// size = 4
// ```

// হবে।

// ---

// # ১৪. দ্বিতীয় Set-এর Element Check করা

// ```c
// for (int i = 0; i < m; i++)
// {
// ```

// এখন দ্বিতীয় Set-এর প্রতিটি element check করা হচ্ছে।

// ---

// ```c
// int found = 0;
// ```

// প্রতিটি নতুন element-এর জন্য আবার `found = 0` করা হচ্ছে।

// অর্থাৎ শুরুতে ধরে নেওয়া হচ্ছে:

// **Element-টি এখনো `s` array-তে নেই।**

// ---

// ```c
// for (int j = 0; j < size; j++)
// {
// ```

// এখানে `s` array-তে আগে থেকে থাকা প্রতিটি element-এর সাথে বর্তমান `v2[i]` compare করা হচ্ছে।

// ---

// ```c
// if (s[j] == v2[i])
// ```

// যদি দ্বিতীয় Set-এর element আগে থেকেই `s`-এ থাকে, তাহলে condition true হবে।

// ---

// ```c
// found = 1;
// ```

// এর অর্থ element পাওয়া গেছে।

// ---

// ```c
// break;
// ```

// Element পাওয়া গেলে আর search করার প্রয়োজন নেই।

// তাই loop বন্ধ করা হচ্ছে।

// ---

// # ১৫. নতুন Element হলে Add করা

// ```c
// if (found == 0)
// ```

// যদি element আগে থেকে `s` array-তে না থাকে, তাহলে—

// ```c
// s[size] = v2[i];
// ```

// Element-টি `s` array-তে যোগ করা হবে।

// তারপর:

// ```c
// size++;
// ```

// `size` এক বাড়বে।

// ---

// # ১৬. Final Union Print করা

// ```c
// for (int i = 0; i < size; i++)
// {
// ```

// এখন `s` array-তে যতগুলো unique element আছে, সেগুলো একে একে print করা হবে।

// ---

// ```c
// printf("%d ", s[i]);
// ```

// `s[i]`-এর value screen-এ দেখানো হচ্ছে।

// প্রতিটি number-এর পরে একটি space দেওয়া হয়েছে।

// ---

// # ১৭. File Close করা

// ```c
// fclose(fin);
// ```

// `input2.txt` file-এর কাজ শেষ।

// তাই file-টি close করা হচ্ছে।

// ---

// # ১৮. Program শেষ করা

// ```c
// return 0;
// ```

// এর অর্থ program সফলভাবে শেষ হয়েছে।

// ---

// # পুরো Program-এর মূল Logic

// ধরো `input2.txt`-তে আছে:

// ```text
// 5
// 1 2 3 4 5
// 4
// 3 4 5 6
// ```

// তাহলে প্রথম Set:

// ```text
// A = {1, 2, 3, 4, 5}
// ```

// দ্বিতীয় Set:

// ```text
// B = {3, 4, 5, 6}
// ```

// এখন Union:

// ```text
// A ∪ B = {1, 2, 3, 4, 5, 6}
// ```

// কারণ `3, 4, 5` দুই Set-এই আছে, কিন্তু Union-এ এগুলো **একবারই** থাকবে।

// তাই Output:

// ```text
// 1 2 3 4 5 6
// ```

// ---

// ## সবচেয়ে গুরুত্বপূর্ণ অংশ

// এই অংশটি:

// ```c
// if (s[j] == v1[i])
// {
//     found = 1;
//     break;
// }
// ```

// এর কাজ হলো **আগে থেকেই element আছে কি না খুঁজে বের করা।**

// আর:

// ```c
// if (found == 0)
// {
//     s[size] = v1[i];
//     size++;
// }
// ```

// এর কাজ হলো **element আগে না থাকলে সেটিকে `s` array-তে যোগ করা।**

// একই কাজ দ্বিতীয় Set-এর ক্ষেত্রেও করা হয়েছে।

// ### সংক্ষেপে:

// ```text
// দুটি Set Input
//       ↓
// প্রথম Set-এর element নেওয়া
//       ↓
// Duplicate আছে কি না Check
//       ↓
// Unique হলে s array-তে রাখা
//       ↓
// দ্বিতীয় Set-এর element নেওয়া
//       ↓
// আগে আছে কি না Check
//       ↓
// না থাকলে s array-তে রাখা
//       ↓
// সব Unique Element Print
//       ↓
// Set Union পাওয়া গেল
// ```
