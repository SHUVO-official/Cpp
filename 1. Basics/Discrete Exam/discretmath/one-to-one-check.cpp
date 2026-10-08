#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("in.txt");
            int n;
            vector<int> domain,range;

            fin>>n;
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    domain.push_back(x);
                }
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    range.push_back(x);
                }    
            
            set<int> s;
            s.insert(range.begin(),range.end());
            
            bool onetoone=true;
            if(s.size()!=n)
                {
                    onetoone=false;
                }
            for(int i=0;i<n;i++)
                {
                    for(int j=i+1;j<n;j++)
                        {
                            if((domain[i]==domain[j])&&(range[i]!=range[j]))
                                {
                                    onetoone=false;
                                }
                        }
                }    
            if(onetoone) cout<<"Yes";
            else cout<<"No";    
        }











//         {C code}



//         #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("in.txt", "r");

//     int n;
//     int domain[100], range[100];
//     int uniqueRange[100];
//     int uniqueSize = 0;

//     if (fin == NULL)
//     {
//         printf("Error: Cannot open in.txt");
//         return 1;
//     }

//     fscanf(fin, "%d", &n);

//     /* Input Domain */
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         domain[i] = x;
//     }

//     /* Input Range */
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         range[i] = x;
//     }

//     /* Create Unique Range */
//     for (int i = 0; i < n; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < uniqueSize; j++)
//         {
//             if (uniqueRange[j] == range[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             uniqueRange[uniqueSize] = range[i];
//             uniqueSize++;
//         }
//     }

//     /* One-to-One Check */
//     int onetoone = 1;

//     if (uniqueSize != n)
//     {
//         onetoone = 0;
//     }

//     /* Check Same Domain Elements */
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((domain[i] == domain[j]) && (range[i] != range[j]))
//             {
//                 onetoone = 0;
//             }
//         }
//     }

//     /* Result */
//     if (onetoone)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }

//     fclose(fin);

//     return 0;
// }


















// # C Program — One-to-One Function

// এই program-এর কাজ হলো একটি function **One-to-One কি না** তা পরীক্ষা করা।

// ---

// ## 1. Header File

// ```c
// #include <stdio.h>
// ```

// `stdio.h` হলো Standard Input Output header file।

// এখানে আমরা ব্যবহার করছি:

// * `fopen()` → file open করার জন্য
// * `fscanf()` → file থেকে input নেওয়ার জন্য
// * `printf()` → output দেখানোর জন্য
// * `fclose()` → file বন্ধ করার জন্য

// ---

// ## 2. Main Function

// ```c
// int main()
// {
// ```

// `main()` হলো C program-এর প্রধান function।

// Program-এর execution এখান থেকেই শুরু হয়।

// ---

// ## 3. File Open করা

// ```c
// FILE *fin = fopen("in.txt", "r");
// ```

// এখানে `in.txt` নামের file open করা হচ্ছে।

// ### এখানে:

// ```text
// FILE *fin
// ```

// `fin` হলো file pointer।

// ```text
// "in.txt"
// ```

// যে file থেকে data নেওয়া হবে তার নাম।

// ```text
// "r"
// ```

// `r` মানে **Read mode**।

// অর্থাৎ file থেকে শুধু data পড়া হবে।

// ---

// ## 4. Variable Declare করা

// ```c
// int n;
// ```

// `n`-এর মধ্যে domain ও range-এ মোট কয়টি element আছে সেটা রাখা হবে।

// ---

// ```c
// int domain[100], range[100];
// ```

// দুটি array তৈরি করা হয়েছে।

// * `domain` → domain-এর elements রাখবে
// * `range` → range-এর elements রাখবে

// এখানে সর্বোচ্চ 100টি element রাখা যাবে।

// ---

// ```c
// int uniqueRange[100];
// int uniqueSize = 0;
// ```

// `uniqueRange` array-তে range-এর duplicate বাদ দিয়ে unique elements রাখা হবে।

// `uniqueSize` দিয়ে unique element-এর সংখ্যা গণনা করা হবে।

// শুরুতে:

// ```text
// uniqueSize = 0
// ```

// ---

// ## 5. File Open হয়েছে কি না Check

// ```c
// if (fin == NULL)
// {
//     printf("Error: Cannot open in.txt");
//     return 1;
// }
// ```

// যদি `in.txt` file খুঁজে না পাওয়া যায় অথবা open করা না যায়, তাহলে `fin` হবে `NULL`।

// তখন:

// ```c
// printf("Error: Cannot open in.txt");
// ```

// error message দেখাবে।

// এরপর:

// ```c
// return 1;
// ```

// দিয়ে program বন্ধ হয়ে যাবে।

// ---

// # 6. n Input নেওয়া

// ```c
// fscanf(fin, "%d", &n);
// ```

// `in.txt` file থেকে প্রথম integer value নেওয়া হচ্ছে।

// যেমন file-এ:

// ```text
// 3
// ```

// থাকলে:

// ```text
// n = 3
// ```

// হবে।

// অর্থাৎ domain এবং range-এ 3টি করে element আছে।

// ---

// # 7. Domain Input নেওয়া

// ```c
// for (int i = 0; i < n; i++)
// {
//     int x;
//     fscanf(fin, "%d", &x);
//     domain[i] = x;
// }
// ```

// এই loop domain-এর সব element input নেয়।

// যদি:

// ```text
// 1 2 3
// ```

// থাকে, তাহলে:

// ```text
// domain[0] = 1
// domain[1] = 2
// domain[2] = 3
// ```

// হবে।

// ---

// ## `for` loop

// ```c
// for (int i = 0; i < n; i++)
// ```

// যদি `n = 3` হয়, তাহলে:

// ```text
// i = 0
// i = 1
// i = 2
// ```

// এই তিনবার loop চলবে।

// ---

// ## Temporary Variable

// ```c
// int x;
// ```

// একটি temporary variable তৈরি করা হয়েছে।

// ---

// ## File থেকে Value নেওয়া

// ```c
// fscanf(fin, "%d", &x);
// ```

// File থেকে একটি integer value পড়ে `x`-এর মধ্যে রাখা হচ্ছে।

// ---

// ## Domain Array-তে রাখা

// ```c
// domain[i] = x;
// ```

// `x`-এর value domain array-তে রাখা হচ্ছে।

// ---

// # 8. Range Input নেওয়া

// ```c
// for (int i = 0; i < n; i++)
// {
//     int x;
//     fscanf(fin, "%d", &x);
//     range[i] = x;
// }
// ```

// এই অংশটি domain input নেওয়ার মতোই।

// শুধু এখানে data `range` array-তে রাখা হচ্ছে।

// যেমন:

// ```text
// Domain = {1, 2, 3}
// Range  = {4, 5, 6}
// ```

// তাহলে:

// ```text
// range[0] = 4
// range[1] = 5
// range[2] = 6
// ```

// ---

// # 9. Range-এর Unique Element বের করা

// ```c
// for (int i = 0; i < n; i++)
// {
//     int found = 0;

//     for (int j = 0; j < uniqueSize; j++)
//     {
//         if (uniqueRange[j] == range[i])
//         {
//             found = 1;
//             break;
//         }
//     }

//     if (found == 0)
//     {
//         uniqueRange[uniqueSize] = range[i];
//         uniqueSize++;
//     }
// }
// ```

// এই অংশটি original C++ code-এর:

// ```cpp
// set<int> s;
// s.insert(range.begin(), range.end());
// ```

// এর কাজ করছে।

// কারণ C language-এ built-in `set` নেই।

// তাই আমরা array দিয়ে duplicate বাদ দিয়ে unique value বের করছি।

// ---

// ## `found` Variable

// ```c
// int found = 0;
// ```

// প্রথমে ধরে নেওয়া হচ্ছে যে value-টি আগে পাওয়া যায়নি।

// ```text
// found = 0 → পাওয়া যায়নি
// found = 1 → পাওয়া গেছে
// ```

// ---

// ## Inner Loop

// ```c
// for (int j = 0; j < uniqueSize; j++)
// ```

// বর্তমান range value আগে `uniqueRange`-এর মধ্যে আছে কি না তা পরীক্ষা করছে।

// ---

// ## Comparison

// ```c
// if (uniqueRange[j] == range[i])
// ```

// যদি দুইটি value একই হয়, তাহলে duplicate পাওয়া গেছে।

// ---

// ```c
// found = 1;
// ```

// এর অর্থ:

// **এই value আগে থেকেই আছে।**

// ---

// ```c
// break;
// ```

// Value পাওয়া গেছে, তাই আর search করার দরকার নেই।

// ---

// ## নতুন Value হলে

// ```c
// if (found == 0)
// {
//     uniqueRange[uniqueSize] = range[i];
//     uniqueSize++;
// }
// ```

// যদি value আগে না থাকে, তাহলে সেটি `uniqueRange`-এ যোগ করা হবে।

// এবং:

// ```c
// uniqueSize++;
// ```

// দিয়ে unique element-এর সংখ্যা 1 বাড়ানো হবে।

// ---

// # 10. One-to-One Variable

// ```c
// int onetoone = 1;
// ```

// শুরুতে ধরে নেওয়া হচ্ছে function **One-to-One**।

// এখানে:

// ```text
// 1 = True
// 0 = False
// ```

// যদি পরে সমস্যা পাওয়া যায়, তাহলে:

// ```c
// onetoone = 0;
// ```

// করা হবে।

// ---

// # 11. Range Duplicate Check

// ```c
// if (uniqueSize != n)
// {
//     onetoone = 0;
// }
// ```

// এখানে সবচেয়ে গুরুত্বপূর্ণ check হচ্ছে।

// যদি:

// ```text
// uniqueSize == n
// ```

// হয়, তাহলে সব range value unique।

// অর্থাৎ duplicate নেই।

// কিন্তু যদি:

// ```text
// uniqueSize != n
// ```

// হয়, তাহলে range-এ duplicate আছে।

// তাই:

// ```text
// onetoone = 0
// ```

// অর্থাৎ function One-to-One নয়।

// ### Example:

// ```text
// Domain = {1, 2, 3}
// Range  = {4, 5, 6}
// ```

// Unique range:

// ```text
// {4, 5, 6}
// ```

// তাই:

// ```text
// uniqueSize = 3
// n = 3
// ```

// সুতরাং:

// ```text
// uniqueSize == n
// ```

// ✅ One-to-One হওয়ার সম্ভাবনা আছে।

// ---

// কিন্তু:

// ```text
// Domain = {1, 2, 3}
// Range  = {4, 4, 6}
// ```

// Unique range:

// ```text
// {4, 6}
// ```

// তাই:

// ```text
// uniqueSize = 2
// n = 3
// ```

// অর্থাৎ:

// ```text
// uniqueSize != n
// ```

// তাই:

// ```text
// onetoone = 0
// ```

// ❌ One-to-One নয়।

// ---

// # 12. Domain-এর Duplicate Relation Check

// ```c
// for (int i = 0; i < n; i++)
// {
//     for (int j = i + 1; j < n; j++)
//     {
//         if ((domain[i] == domain[j]) && (range[i] != range[j]))
//         {
//             onetoone = 0;
//         }
//     }
// }
// ```

// এখানে আরও একটি condition check করা হচ্ছে।

// ---

// ## Outer Loop

// ```c
// for (int i = 0; i < n; i++)
// ```

// Domain-এর প্রতিটি element নেওয়া হচ্ছে।

// ---

// ## Inner Loop

// ```c
// for (int j = i + 1; j < n; j++)
// ```

// বর্তমান element-এর পরের elementগুলোর সাথে comparison করা হচ্ছে।

// ---

// ## Main Condition

// ```c
// if ((domain[i] == domain[j]) && (range[i] != range[j]))
// ```

// এখানে দুইটি condition আছে।

// ### Condition 1:

// ```text
// domain[i] == domain[j]
// ```

// অর্থাৎ দুইটি domain value একই।

// ### Condition 2:

// ```text
// range[i] != range[j]
// ```

// অর্থাৎ তাদের range/output আলাদা।

// দুইটি condition-ই true হলে:

// ```c
// onetoone = 0;
// ```

// হবে।

// ---

// # 13. `&&` এর অর্থ

// ```c
// &&
// ```

// এর অর্থ **AND**।

// অর্থাৎ দুইটি condition-ই সত্য হতে হবে।

// যেমন:

// ```text
// domain[i] == domain[j]     → TRUE
// range[i] != range[j]       → TRUE
// ```

// তাহলে:

// ```text
// TRUE && TRUE = TRUE
// ```

// এবং One-to-One false হবে।

// ---

// # 14. Final Result

// ```c
// if (onetoone)
//     cout << "Yes";
// else
//     cout << "No";
// ```

// C language-এ এর সঠিক version:

// ```c
// if (onetoone)
// {
//     printf("Yes");
// }
// else
// {
//     printf("No");
// }
// ```

// যদি:

// ```text
// onetoone = 1
// ```

// তাহলে output:

// ```text
// Yes
// ```

// আর যদি:

// ```text
// onetoone = 0
// ```

// তাহলে output:

// ```text
// No
// ```

// ---

// # 15. File Close

// ```c
// fclose(fin);
// ```

// `in.txt` file-এর কাজ শেষ হয়ে গেছে।

// তাই file বন্ধ করা হচ্ছে।

// ---

// # 16. Program End

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

// # Input File Format

// তোমার `in.txt` এমন হবে:

// ```text
// 3
// 1 2 3
// 4 5 6
// ```

// এখানে:

// ```text
// n = 3

// Domain = {1, 2, 3}

// Range = {4, 5, 6}
// ```

// Output:

// ```text
// Yes
// ```

// কারণ প্রত্যেকটি domain element-এর আলাদা range আছে।

// ---

// ## Another Example

// ```text
// 3
// 1 2 3
// 4 4 6
// ```

// এখানে:

// ```text
// Range = {4, 4, 6}
// ```

// `4` দুইবার এসেছে।

// তাই:

// ```text
// uniqueSize = 2
// n = 3
// ```

// অর্থাৎ:

// ```text
// uniqueSize != n
// ```

// তাই:

// ```text
// No
// ```

// Output হবে।

// ---

// # মূল Concept

// একটি function **One-to-One** হলে:

// **দুইটি different input-এর output একই হতে পারবে না।**

// অর্থাৎ:

// ```text
// a ≠ b
// ```

// হলে অবশ্যই:

// ```text
// f(a) ≠ f(b)
// ```

// হতে হবে।

// ### Example:

// ```text
// 1 → 4
// 2 → 5
// 3 → 6
// ```

// ✅ One-to-One

// কিন্তু:

// ```text
// 1 → 4
// 2 → 4
// 3 → 6
// ```

// ❌ One-to-One নয়।

// কারণ `1` এবং `2` দুইটি আলাদা input, কিন্তু দুটির output একই `4`।
