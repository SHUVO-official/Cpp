#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input1.txt");
            int n,m;
            vector<int> v1,v2;

            fin>>n;
            for(int i=1;i<=n;i++)
                {
                    int x;
                    fin>>x;
                    v1.push_back(x);
                }
            fin>>m;
            for(int i=1;i<=m;i++)
                {
                    int x;
                    fin>>x;
                    v2.push_back(x);
                }
                
            set<int> s1,s2;
            s1.insert(v1.begin(),v1.end());
            s2.insert(v2.begin(),v2.end());
            
            vector<int> res;
            for(int i:s1)
                {
                    if(s2.count(i))
                        {
                            res.push_back(i);
                        }
                }

            cout<<"Intersection: ";    
            for(int i:res)
                {
                    cout<<i<<" ";
                }    
        }





//         {C code}


// #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("input1.txt", "r");

//     int n, m;
//     int v1[100], v2[100];
//     int s1[100], s2[100];
//     int s1_size = 0, s2_size = 0;
//     int res[100], res_size = 0;

//     if (fin == NULL)
//     {
//         printf("Error: Cannot open input1.txt");
//         return 1;
//     }

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

//     /* Create unique elements for v1 */
//     for (int i = 0; i < n; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < s1_size; j++)
//         {
//             if (s1[j] == v1[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             s1[s1_size] = v1[i];
//             s1_size++;
//         }
//     }

//     /* Create unique elements for v2 */
//     for (int i = 0; i < m; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < s2_size; j++)
//         {
//             if (s2[j] == v2[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             s2[s2_size] = v2[i];
//             s2_size++;
//         }
//     }

//     /* Find Intersection */
//     for (int i = 0; i < s1_size; i++)
//     {
//         for (int j = 0; j < s2_size; j++)
//         {
//             if (s1[i] == s2[j])
//             {
//                 res[res_size] = s1[i];
//                 res_size++;
//                 break;
//             }
//         }
//     }

//     printf("Intersection: ");

//     for (int i = 0; i < res_size; i++)
//     {
//         printf("%d ", res[i]);
//     }

//     fclose(fin);

//     return 0;
// }        









// # C Program: Intersection of Two Sets

// ## Line by Line Explanation

// ---

// ## 1. Header File

// ```c
// #include <stdio.h>
// ```

// `stdio.h` হলো Standard Input Output header file।

// এখান থেকে আমরা ব্যবহার করছি:

// * `printf()` → output দেখানোর জন্য
// * `fscanf()` → file থেকে input নেওয়ার জন্য
// * `fclose()` → file বন্ধ করার জন্য

// ---

// # 2. Main Function

// ```c
// int main()
// {
// ```

// `main()` হলো C program-এর প্রধান function।

// Program-এর execution এখান থেকেই শুরু হয়।

// `int` থাকার কারণে function শেষে আমরা:

// ```c
// return 0;
// ```

// দিয়ে program successfully শেষ করি।

// ---

// # 3. Input File Open

// ```c
// FILE *fin = fopen("input1.txt", "r");
// ```

// এখানে `input1.txt` file open করা হচ্ছে।

// ### অংশগুলো:

// ```c
// FILE *fin
// ```

// `fin` হলো file pointer।

// ```c
// fopen()
// ```

// File open করার function।

// ```c
// "input1.txt"
// ```

// যে file থেকে data নেওয়া হবে তার নাম।

// ```c
// "r"
// ```

// `r` = Read mode।

// অর্থাৎ file থেকে শুধু data পড়ব।

// ---

// # 4. Variables Declare করা

// ```c
// int n, m;
// ```

// এখানে দুইটি integer variable নেওয়া হয়েছে:

// * `n` → প্রথম set-এর element সংখ্যা
// * `m` → দ্বিতীয় set-এর element সংখ্যা

// ---

// ```c
// int v1[100], v2[100];
// ```

// দুইটি array তৈরি করা হয়েছে।

// * `v1` → প্রথম set-এর elements রাখবে
// * `v2` → দ্বিতীয় set-এর elements রাখবে

// Maximum 100টি element রাখা যাবে।

// ---

// ```c
// int s1[100], s2[100];
// ```

// এগুলো `set`-এর মতো কাজ করার জন্য ব্যবহার করা হবে।

// C++-এ আমরা লিখেছিলাম:

// ```cpp
// set<int> s1, s2;
// ```

// কিন্তু C language-এ built-in `set` নেই।

// তাই array ব্যবহার করে set-এর কাজ করা হয়েছে।

// ---

// ```c
// int s1_size = 0, s2_size = 0;
// ```

// এখানে দুইটি set-এ বর্তমানে কয়টি unique element আছে সেটা রাখা হবে।

// শুরুতে কোনো element নেই।

// তাই:

// ```text
// s1_size = 0
// s2_size = 0
// ```

// ---

// ```c
// int res[100], res_size = 0;
// ```

// `res` array-তে intersection-এর result রাখা হবে।

// `res_size` → result-এ কয়টি element আছে সেটা রাখবে।

// শুরুতে:

// ```text
// res_size = 0
// ```

// ---

// # 5. File Open হয়েছে কি না Check

// ```c
// if (fin == NULL)
// {
//     printf("Error: Cannot open input1.txt");
//     return 1;
// }
// ```

// যদি `input1.txt` file পাওয়া না যায়, তাহলে `fin == NULL` হবে।

// তখন:

// ```c
// printf("Error: Cannot open input1.txt");
// ```

// Error message দেখাবে।

// এরপর:

// ```c
// return 1;
// ```

// দিয়ে program বন্ধ হয়ে যাবে।

// ---

// # 6. প্রথম Set-এর Size নেওয়া

// ```c
// fscanf(fin, "%d", &n);
// ```

// `input1.txt` থেকে প্রথম integer value নেওয়া হচ্ছে।

// ধরা যাক file:

// ```text
// 5
// 1 2 3 4 5
// ```

// তাহলে:

// ```text
// n = 5
// ```

// হবে।

// অর্থাৎ প্রথম set-এ 5টি element আছে।

// ---

// # 7. প্রথম Set-এর Elements নেওয়া

// ```c
// for (int i = 0; i < n; i++)
// {
//     int x;
//     fscanf(fin, "%d", &x);
//     v1[i] = x;
// }
// ```

// এখানে loop ব্যবহার করে প্রথম set-এর সব element input নেওয়া হচ্ছে।

// ---

// ### Loop শুরু

// ```c
// for (int i = 0; i < n; i++)
// ```

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

// অর্থাৎ loop মোট 5 বার চলবে।

// ---

// ```c
// int x;
// ```

// একটি temporary variable তৈরি করা হয়েছে।

// Input নেওয়ার সময় value প্রথমে `x`-এ যাবে।

// ---

// ```c
// fscanf(fin, "%d", &x);
// ```

// File থেকে একটি integer input নেওয়া হচ্ছে।

// যেমন:

// ```text
// 1
// ```

// তাহলে:

// ```text
// x = 1
// ```

// ---

// ```c
// v1[i] = x;
// ```

// `x`-এর value `v1` array-তে রাখা হচ্ছে।

// যেমন:

// ```text
// v1[0] = 1
// v1[1] = 2
// v1[2] = 3
// v1[3] = 4
// v1[4] = 5
// ```

// ---

// # 8. দ্বিতীয় Set-এর Size নেওয়া

// ```c
// fscanf(fin, "%d", &m);
// ```

// File থেকে দ্বিতীয় set-এর element সংখ্যা নেওয়া হচ্ছে।

// যেমন:

// ```text
// 4
// ```

// তাহলে:

// ```text
// m = 4
// ```

// ---

// # 9. দ্বিতীয় Set-এর Elements নেওয়া

// ```c
// for (int i = 0; i < m; i++)
// {
//     int x;
//     fscanf(fin, "%d", &x);
//     v2[i] = x;
// }
// ```

// এখানে দ্বিতীয় set-এর elements input নেওয়া হচ্ছে।

// যদি:

// ```text
// 3 4 5 6
// ```

// হয়, তাহলে:

// ```text
// v2[0] = 3
// v2[1] = 4
// v2[2] = 5
// v2[3] = 6
// ```

// ---

// # 10. প্রথম Set থেকে Unique Elements তৈরি

// ```c
// for (int i = 0; i < n; i++)
// {
//     int found = 0;

//     for (int j = 0; j < s1_size; j++)
//     {
//         if (s1[j] == v1[i])
//         {
//             found = 1;
//             break;
//         }
//     }

//     if (found == 0)
//     {
//         s1[s1_size] = v1[i];
//         s1_size++;
//     }
// }
// ```

// এটা খুব গুরুত্বপূর্ণ অংশ।

// C++-এ:

// ```cpp
// set<int> s1;
// ```

// ব্যবহার করলে duplicate automatically বাদ যায়।

// কিন্তু C-তে `set` নেই।

// তাই আমাদের নিজে duplicate check করতে হচ্ছে।

// ---

// ## প্রথম Loop

// ```c
// for (int i = 0; i < n; i++)
// ```

// `v1` array-এর প্রতিটি element একে একে নেওয়া হচ্ছে।

// ---

// ## Found Variable

// ```c
// int found = 0;
// ```

// প্রথমে ধরে নেওয়া হচ্ছে element-টি `s1`-এর মধ্যে নেই।

// ```text
// found = 0 → পাওয়া যায়নি
// found = 1 → পাওয়া গেছে
// ```

// ---

// ## দ্বিতীয় Loop

// ```c
// for (int j = 0; j < s1_size; j++)
// ```

// `v1[i]`-এর value আগে `s1`-এ আছে কি না সেটা check করা হচ্ছে।

// ---

// ## Comparison

// ```c
// if (s1[j] == v1[i])
// ```

// যদি `s1`-এর কোনো element এবং `v1[i]` একই হয়, তাহলে duplicate পাওয়া গেছে।

// ---

// ```c
// found = 1;
// ```

// এর অর্থ:

// **এই element আগেই আছে।**

// ---

// ```c
// break;
// ```

// আর check করার প্রয়োজন নেই।

// তাই loop বন্ধ হয়ে যায়।

// ---

// # 11. Duplicate না থাকলে Add করা

// ```c
// if (found == 0)
// {
//     s1[s1_size] = v1[i];
//     s1_size++;
// }
// ```

// যদি element আগে থেকে না থাকে:

// ```text
// found == 0
// ```

// তাহলে সেটি `s1`-এ যোগ করা হবে।

// ---

// ```c
// s1[s1_size] = v1[i];
// ```

// নতুন element `s1` array-তে রাখা হচ্ছে।

// ---

// ```c
// s1_size++;
// ```

// Set-এর size 1 বাড়ানো হচ্ছে।

// ---

// # 12. দ্বিতীয় Set-এর Unique Elements তৈরি

// ```c
// for (int i = 0; i < m; i++)
// {
//     int found = 0;

//     for (int j = 0; j < s2_size; j++)
//     {
//         if (s2[j] == v2[i])
//         {
//             found = 1;
//             break;
//         }
//     }

//     if (found == 0)
//     {
//         s2[s2_size] = v2[i];
//         s2_size++;
//     }
// }
// ```

// এই অংশটি আগের অংশের মতোই।

// শুধু এখানে:

// ```text
// v2 → s2
// ```

// নিয়ে কাজ করা হচ্ছে।

// অর্থাৎ `v2` থেকে duplicate বাদ দিয়ে unique element `s2`-তে রাখা হচ্ছে।

// ---

// # 13. Intersection বের করা

// ```c
// for (int i = 0; i < s1_size; i++)
// {
//     for (int j = 0; j < s2_size; j++)
//     {
//         if (s1[i] == s2[j])
//         {
//             res[res_size] = s1[i];
//             res_size++;
//             break;
//         }
//     }
// }
// ```

// এটাই মূল কাজ।

// এখানে `s1` এবং `s2`-এর common elements বের করা হচ্ছে।

// ---

// ## Outer Loop

// ```c
// for (int i = 0; i < s1_size; i++)
// ```

// প্রথম set-এর প্রতিটি element নেওয়া হচ্ছে।

// ---

// ## Inner Loop

// ```c
// for (int j = 0; j < s2_size; j++)
// ```

// প্রথম set-এর একটি element দ্বিতীয় set-এর সব element-এর সাথে compare করা হচ্ছে।

// ---

// ## Compare

// ```c
// if (s1[i] == s2[j])
// ```

// যদি দুই set-এর element একই হয়, তাহলে সেটা common element।

// অর্থাৎ সেটি **Intersection**-এর অংশ।

// ---

// # 14. Result Array-তে রাখা

// ```c
// res[res_size] = s1[i];
// ```

// Common element-টি `res` array-তে রাখা হচ্ছে।

// যেমন:

// ```text
// s1 = {1, 2, 3, 4, 5}
// s2 = {3, 4, 5, 6}
// ```

// প্রথম common value:

// ```text
// 3
// ```

// তাহলে:

// ```text
// res[0] = 3
// ```

// ---

// ```c
// res_size++;
// ```

// Result-এর size 1 বাড়ানো হচ্ছে।

// ---

// ```c
// break;
// ```

// একবার common element পাওয়া গেলে দ্বিতীয় set-এ আর search করার প্রয়োজন নেই।

// ---

// # 15. Output-এর Heading

// ```c
// printf("Intersection: ");
// ```

// Screen-এ:

// ```text
// Intersection:
// ```

// print করবে।

// ---

// # 16. Result Print

// ```c
// for (int i = 0; i < res_size; i++)
// {
//     printf("%d ", res[i]);
// }
// ```

// এখানে `res` array-এর সব element print করা হচ্ছে।

// যদি:

// ```text
// res = {3, 4, 5}
// ```

// তাহলে output:

// ```text
// Intersection: 3 4 5
// ```

// হবে।

// ---

// # 17. File Close

// ```c
// fclose(fin);
// ```

// `input1.txt` file-এর কাজ শেষ।

// তাই file বন্ধ করা হচ্ছে।

// ---

// # 18. Program End

// ```c
// return 0;
// ```

// এর অর্থ program successfully শেষ হয়েছে।

// ---

// ```c
// }
// ```

// `main()` function শেষ।

// ---

// # সম্পূর্ণ Program-এর Flow

// ```text
// input1.txt
//      ↓
// First Set Input
//      ↓
// Second Set Input
//      ↓
// Duplicate Remove
//      ↓
// Unique Set 1
//      +
// Unique Set 2
//      ↓
// Common Elements Check
//      ↓
// Intersection
//      ↓
// Print Result
// ```

// ---

// # Example

// ধরা যাক `input1.txt`:

// ```text
// 5
// 1 2 3 4 5
// 4
// 3 4 5 6
// ```

// তাহলে:

// ```text
// v1 = {1, 2, 3, 4, 5}

// v2 = {3, 4, 5, 6}
// ```

// Common elements:

// ```text
// 3, 4, 5
// ```

// তাই:

// ```text
// Intersection: 3 4 5
// ```

// ---

// # C++ থেকে C-তে কী পরিবর্তন হয়েছে?

// তোমার original C++ code-এ ছিল:

// ```cpp
// vector<int> v1, v2;
// ```

// C-তে:

// ```c
// int v1[100], v2[100];
// ```

// ---

// C++-এ ছিল:

// ```cpp
// set<int> s1, s2;
// ```

// C-তে `set` নেই, তাই:

// ```c
// int s1[100], s2[100];
// ```

// ব্যবহার করা হয়েছে।

// ---

// C++-এ ছিল:

// ```cpp
// s1.insert(v1.begin(), v1.end());
// ```

// C-তে manually duplicate check করে unique element রাখা হয়েছে।

// ---

// C++-এ ছিল:

// ```cpp
// if(s2.count(i))
// ```

// C-তে একই কাজ nested loop দিয়ে করা হয়েছে:

// ```c
// if (s1[i] == s2[j])
// ```

// ---

// # এক লাইনে Program-এর কাজ

// **দুইটি set input নিয়ে তাদের মধ্যে যে elements দুটিতেই আছে, সেগুলো বের করে Intersection হিসেবে print করা।**
