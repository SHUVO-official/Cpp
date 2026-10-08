// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ifstream fin("input.txt");

//     int n;
//     vector<int> domain;

//     fin >> n;

//     for(int i=0;i<n;i++)
//     {
//         int x;
//         fin >> x;
//         domain.push_back(x);
//     }

//     int m;
//     vector<char> codomain;

//     fin >> m;

//     for(int i=0;i<m;i++)
//     {
//         char x;
//         fin >> x;
//         codomain.push_back(x);
//     }

//     int k;
//     vector<char> mapping;

//     fin >> k;

//     for(int i=0;i<k;i++)
//     {
//         char x;
//         fin >> x;
//         mapping.push_back(x);
//     }

//     bool onetoone = true;
//     bool onto = true;

//     // One-to-One Check
//     set<char> s1;
//     s1.insert(mapping.begin(), mapping.end());

//     if(s1.size() != k)
//     {
//         onetoone = false;
//     }

//     // Onto Check
//     for(char x : codomain)
//     {
//         if(s1.count(x) == 0)
//         {
//             onto = false;
//         }
//     }

//     // Result
//     if(onetoone && onto)
//     {
//         cout << "Function is Bijective (One-to-One and Onto)";
//     }
//     else if(onetoone)
//     {
//         cout << "Function is One-to-One";
//     }
//     else if(onto)
//     {
//         cout << "Function is Onto";
//     }
//     else
//     {
//         cout << "Function is Neither One-to-One nor Onto";
//     }

//     fin.close();

//     return 0;
// }









                    //   {C code}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin = fopen("input.txt", "r");

    if (fin == NULL)
    {
        printf("Error: Cannot open input.txt");
        return 1;
    }

    int n;
    int domain[100];

    fscanf(fin, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        fscanf(fin, "%d", &x);
        domain[i] = x;
    }

    int m;
    char codomain[100];

    fscanf(fin, "%d", &m);

    for (int i = 0; i < m; i++)
    {
        char x;
        fscanf(fin, " %c", &x);
        codomain[i] = x;
    }

    int k;
    char mapping[100];

    fscanf(fin, "%d", &k);

    for (int i = 0; i < k; i++)
    {
        char x;
        fscanf(fin, " %c", &x);
        mapping[i] = x;
    }

    int onetoone = 1;
    int onto = 1;

    // One-to-One Check
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (mapping[i] == mapping[j])
            {
                onetoone = 0;
                break;
            }
        }

        if (onetoone == 0)
        {
            break;
        }
    }

    // Onto Check
    for (int i = 0; i < m; i++)
    {
        int found = 0;

        for (int j = 0; j < k; j++)
        {
            if (codomain[i] == mapping[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            onto = 0;
            break;
        }
    }

    // Result
    if (onetoone && onto)
    {
        printf("Function is Bijective (One-to-One and Onto)");
    }
    else if (onetoone)
    {
        printf("Function is One-to-One");
    }
    else if (onto)
    {
        printf("Function is Onto");
    }
    else
    {
        printf("Function is Neither One-to-One nor Onto");
    }

    fclose(fin);

    return 0;
}   











// # C Program — Line by Line Explanation

// ## 1. Header File

// ```c
// #include <stdio.h>
// ```

// ### Explanation:

// * `#include` → একটি header file program-এর মধ্যে যুক্ত করার নির্দেশ।
// * `stdio.h` → Standard Input Output header file।
// * `printf()`, `fscanf()`, `fclose()` ইত্যাদি function ব্যবহার করার জন্য এটি প্রয়োজন।

// ---

// ```c
// #include <stdlib.h>
// ```

// ### Explanation:

// * `stdlib.h` হলো Standard Library header file।
// * এই program-এ এটি বিশেষভাবে প্রয়োজনীয় না হলেও রাখা হয়েছে।
// * সাধারণত `malloc()`, `free()`, `exit()` ইত্যাদি function-এর জন্য এটি ব্যবহৃত হয়।

// ---

// ## 2. Main Function

// ```c
// int main()
// {
// ```

// ### Explanation:

// * `main()` হলো C program-এর প্রধান function।
// * Program execution এখান থেকেই শুরু হয়।
// * `int` বোঝায় `main()` শেষে একটি integer value return করবে।

// ---

// ## 3. Input File Open করা

// ```c
// FILE *fin = fopen("input.txt", "r");
// ```

// ### Explanation:

// এখানে `input.txt` নামের একটি file open করা হচ্ছে।

// * `FILE *fin` → file-এর একটি pointer তৈরি করা হয়েছে।
// * `fopen()` → file open করার function।
// * `"input.txt"` → যে file open করতে হবে তার নাম।
// * `"r"` → read mode।
// * অর্থাৎ file থেকে শুধু data পড়া হবে।

// সহজভাবে:

// **input.txt → Program-এর ভিতরে data আসবে।**

// ---

// ## 4. File Open হয়েছে কি না Check

// ```c
// if (fin == NULL)
// {
//     printf("Error: Cannot open input.txt");
//     return 1;
// }
// ```

// ### Explanation:

// যদি `input.txt` file না পাওয়া যায় অথবা open করা না যায়, তাহলে `fin` এর value `NULL` হবে।

// ```c
// if (fin == NULL)
// ```

// এর অর্থ:

// **File কি successfully open হয়নি?**

// যদি না হয়, তাহলে—

// ```c
// printf("Error: Cannot open input.txt");
// ```

// Screen-এ error message দেখাবে।

// তারপর—

// ```c
// return 1;
// ```

// Program বন্ধ হয়ে যাবে এবং `1` return করবে।

// ---

// # 5. Domain-এর জন্য Variable তৈরি

// ```c
// int n;
// int domain[100];
// ```

// ### Explanation:

// ```c
// int n;
// ```

// এখানে domain-এর মোট কয়টি element আছে সেটা রাখার জন্য `n` variable নেওয়া হয়েছে।

// ```c
// int domain[100];
// ```

// Domain-এর element রাখার জন্য একটি integer array তৈরি করা হয়েছে।

// এখানে সর্বোচ্চ 100টি value রাখা যাবে।

// উদাহরণ:

// ```text
// Domain = {1, 2, 3}
// ```

// তাহলে:

// ```text
// n = 3

// domain[0] = 1
// domain[1] = 2
// domain[2] = 3
// ```

// ---

// # 6. Domain-এর Size Input নেওয়া

// ```c
// fscanf(fin, "%d", &n);
// ```

// ### Explanation:

// `fscanf()` file থেকে data পড়ার জন্য ব্যবহৃত হয়।

// এখানে:

// ```c
// fin
// ```

// → কোন file থেকে data পড়বে।

// ```c
// "%d"
// ```

// → integer value পড়বে।

// ```c
// &n
// ```

// → পড়া value `n` variable-এর মধ্যে রাখবে।

// যদি input.txt-এ থাকে:

// ```text
// 3
// ```

// তাহলে:

// ```text
// n = 3
// ```

// হবে।

// ---

// # 7. Domain-এর Elements Input নেওয়া

// ```c
// for (int i = 0; i < n; i++)
// {
//     int x;
//     fscanf(fin, "%d", &x);
//     domain[i] = x;
// }
// ```

// ### Explanation:

// এখানে `for loop` ব্যবহার করে domain-এর সব element input নেওয়া হচ্ছে।

// ---

// ### প্রথম লাইন:

// ```c
// for (int i = 0; i < n; i++)
// ```

// এর অর্থ:

// * `i = 0` → শুরু হবে 0 থেকে।
// * `i < n` → যতক্ষণ `i`, `n` থেকে ছোট থাকবে।
// * `i++` → প্রতি বার `i` এর মান 1 করে বাড়বে।

// যদি:

// ```text
// n = 3
// ```

// তাহলে loop চলবে:

// ```text
// i = 0
// i = 1
// i = 2
// ```

// মোট 3 বার।

// ---

// ```c
// int x;
// ```

// একটি temporary integer variable তৈরি করা হয়েছে।

// ---

// ```c
// fscanf(fin, "%d", &x);
// ```

// File থেকে একটি integer value পড়ে `x`-এর মধ্যে রাখা হচ্ছে।

// ---

// ```c
// domain[i] = x;
// ```

// `x`-এর value domain array-তে রাখা হচ্ছে।

// যেমন input:

// ```text
// 10 20 30
// ```

// তাহলে:

// ```text
// domain[0] = 10
// domain[1] = 20
// domain[2] = 30
// ```

// ---

// # 8. Codomain-এর Variable

// ```c
// int m;
// char codomain[100];
// ```

// ### Explanation:

// ```c
// int m;
// ```

// Codomain-এ কয়টি element আছে সেটা রাখবে।

// ---

// ```c
// char codomain[100];
// ```

// Codomain-এর characterগুলো রাখবে।

// যেমন:

// ```text
// Codomain = {a, b, c}
// ```

// তাহলে:

// ```text
// codomain[0] = 'a'
// codomain[1] = 'b'
// codomain[2] = 'c'
// ```

// ---

// # 9. Codomain-এর Size Input

// ```c
// fscanf(fin, "%d", &m);
// ```

// File থেকে codomain-এর মোট element সংখ্যা পড়ে `m`-এর মধ্যে রাখা হচ্ছে।

// যেমন:

// ```text
// 3
// ```

// দিলে:

// ```text
// m = 3
// ```

// ---

// # 10. Codomain-এর Elements Input

// ```c
// for (int i = 0; i < m; i++)
// {
//     char x;
//     fscanf(fin, " %c", &x);
//     codomain[i] = x;
// }
// ```

// ### Explanation:

// এখানে codomain-এর প্রতিটি character input নেওয়া হচ্ছে।

// ```c
// char x;
// ```

// একটি character রাখার জন্য `x` variable।

// ---

// ```c
// fscanf(fin, " %c", &x);
// ```

// File থেকে একটি character পড়ছে।

// এখানে `%c` ব্যবহার করা হয়েছে কারণ আমরা character input নিচ্ছি।

// `%c`-এর আগে একটি space দেওয়া হয়েছে:

// ```c
// " %c"
// ```

// এই space-এর কারণে আগের input-এর newline বা whitespace skip করে actual character নেওয়া হয়।

// ---

// ```c
// codomain[i] = x;
// ```

// পাওয়া character-টি codomain array-তে রাখা হচ্ছে।

// ---

// # 11. Mapping-এর Variable

// ```c
// int k;
// char mapping[100];
// ```

// ### Explanation:

// ```c
// int k;
// ```

// Mapping-এ কয়টি value আছে সেটা রাখবে।

// ---

// ```c
// char mapping[100];
// ```

// Function-এর output/mapping values রাখবে।

// উদাহরণ:

// ```text
// f(1) = a
// f(2) = b
// f(3) = c
// ```

// তাহলে mapping হবে:

// ```text
// a b c
// ```

// ---

// # 12. Mapping-এর Size Input

// ```c
// fscanf(fin, "%d", &k);
// ```

// File থেকে mapping-এর মোট element সংখ্যা পড়ছে এবং `k`-তে রাখছে।

// ---

// # 13. Mapping-এর Elements Input

// ```c
// for (int i = 0; i < k; i++)
// {
//     char x;
//     fscanf(fin, " %c", &x);
//     mapping[i] = x;
// }
// ```

// ### Explanation:

// এই loop mapping-এর প্রতিটি character input নেয়।

// যেমন:

// ```text
// a b c
// ```

// তাহলে:

// ```text
// mapping[0] = 'a'
// mapping[1] = 'b'
// mapping[2] = 'c'
// ```

// ---

// # 14. One-to-One এবং Onto Variable

// ```c
// int onetoone = 1;
// int onto = 1;
// ```

// এখানে দুইটি flag variable ব্যবহার করা হয়েছে।

// ### `onetoone`

// ```c
// int onetoone = 1;
// ```

// এখানে `1` মানে:

// **প্রথমে ধরে নেওয়া হচ্ছে function One-to-One।**

// যদি পরে duplicate পাওয়া যায়, তাহলে:

// ```c
// onetoone = 0;
// ```

// করা হবে।

// অর্থাৎ:

// ```text
// 1 = True
// 0 = False
// ```

// ---

// ### `onto`

// ```c
// int onto = 1;
// ```

// প্রথমে ধরে নেওয়া হচ্ছে function Onto।

// যদি codomain-এর কোনো element mapping-এর মধ্যে পাওয়া না যায়, তাহলে:

// ```c
// onto = 0;
// ```

// হবে।

// ---

// # 15. One-to-One Check

// ```c
// for (int i = 0; i < k; i++)
// {
//     for (int j = i + 1; j < k; j++)
//     {
//         if (mapping[i] == mapping[j])
//         {
//             onetoone = 0;
//             break;
//         }
//     }

//     if (onetoone == 0)
//     {
//         break;
//     }
// }
// ```

// এটাই program-এর গুরুত্বপূর্ণ অংশগুলোর একটি।

// এখানে check করা হচ্ছে mapping-এর কোনো দুইটি value একই কি না।

// ---

// ## Outer Loop

// ```c
// for (int i = 0; i < k; i++)
// ```

// প্রথম element থেকে একে একে সব element নেওয়া হচ্ছে।

// ---

// ## Inner Loop

// ```c
// for (int j = i + 1; j < k; j++)
// ```

// `i`-এর পরের elementগুলোর সাথে comparison করা হচ্ছে।

// যেমন mapping:

// ```text
// a b c
// ```

// তাহলে comparison হবে:

// ```text
// a vs b
// a vs c
// b vs c
// ```

// ---

// ## Comparison

// ```c
// if (mapping[i] == mapping[j])
// ```

// দুইটি mapping value একই কি না check করছে।

// যদি:

// ```text
// mapping[i] = a
// mapping[j] = a
// ```

// তাহলে:

// ```text
// a == a
// ```

// True হবে।

// ---

// ## Duplicate পাওয়া গেলে

// ```c
// onetoone = 0;
// ```

// এর অর্থ:

// **Function One-to-One নয়।**

// ---

// ```c
// break;
// ```

// বর্তমান loop বন্ধ করে দেয়।

// ---

// ## Outer Loop-ও বন্ধ করা

// ```c
// if (onetoone == 0)
// {
//     break;
// }
// ```

// যেহেতু duplicate পাওয়া গেছে, তাই আর check করার দরকার নেই।

// ---

// # 16. Onto Check

// ```c
// for (int i = 0; i < m; i++)
// {
//     int found = 0;

//     for (int j = 0; j < k; j++)
//     {
//         if (codomain[i] == mapping[j])
//         {
//             found = 1;
//             break;
//         }
//     }

//     if (found == 0)
//     {
//         onto = 0;
//         break;
//     }
// }
// ```

// এখানে check করা হচ্ছে:

// **Codomain-এর প্রতিটি element mapping-এর মধ্যে আছে কি না।**

// ---

// ## Codomain-এর প্রতিটি Element নেওয়া

// ```c
// for (int i = 0; i < m; i++)
// ```

// Codomain-এর সব element একে একে নেওয়া হচ্ছে।

// ---

// ## Found Variable

// ```c
// int found = 0;
// ```

// প্রথমে ধরে নেওয়া হচ্ছে যে codomain-এর element পাওয়া যায়নি।

// ```text
// 0 = Not Found
// 1 = Found
// ```

// ---

// ## Mapping-এর সাথে Compare

// ```c
// for (int j = 0; j < k; j++)
// ```

// Codomain-এর একটি element mapping-এর সব element-এর সাথে compare করা হচ্ছে।

// ---

// ```c
// if (codomain[i] == mapping[j])
// ```

// যদি codomain-এর element এবং mapping-এর element একই হয়—

// ```c
// found = 1;
// ```

// অর্থাৎ:

// **Element পাওয়া গেছে।**

// ---

// ```c
// break;
// ```

// Element পাওয়া গেলে আর search করার দরকার নেই।

// ---

// ## Element না পাওয়া গেলে

// ```c
// if (found == 0)
// {
//     onto = 0;
//     break;
// }
// ```

// যদি কোনো codomain element mapping-এর মধ্যে না পাওয়া যায়, তাহলে:

// ```text
// onto = 0
// ```

// অর্থাৎ:

// **Function Onto নয়।**

// ---

// # 17. Final Result

// এখন program সিদ্ধান্ত দেবে function-এর type কী।

// ```c
// if (onetoone && onto)
// {
//     printf("Function is Bijective (One-to-One and Onto)");
// }
// ```

// যদি:

// ```text
// onetoone = 1
// onto = 1
// ```

// দুটিই true হয়, তাহলে function হলো:

// **Bijective**

// অর্থাৎ:

// **One-to-One + Onto**

// ---

// ## শুধু One-to-One হলে

// ```c
// else if (onetoone)
// {
//     printf("Function is One-to-One");
// }
// ```

// যদি One-to-One true হয় কিন্তু Onto false হয়, তাহলে:

// **Function is One-to-One**

// ---

// ## শুধু Onto হলে

// ```c
// else if (onto)
// {
//     printf("Function is Onto");
// }
// ```

// যদি Onto true হয় কিন্তু One-to-One false হয়, তাহলে:

// **Function is Onto**

// ---

// ## কোনোটিই না হলে

// ```c
// else
// {
//     printf("Function is Neither One-to-One nor Onto");
// }
// ```

// যদি:

// ```text
// onetoone = 0
// onto = 0
// ```

// তাহলে function:

// **Neither One-to-One nor Onto**

// ---

// # 18. File Close

// ```c
// fclose(fin);
// ```

// File-এর কাজ শেষ হয়ে যাওয়ার পর file close করা হচ্ছে।

// File open করলে কাজ শেষে সেটি close করা ভালো practice।

// ---

// # 19. Program End

// ```c
// return 0;
// ```

// এর অর্থ program successfully শেষ হয়েছে।

// সাধারণভাবে:

// ```text
// return 0 = Program সফলভাবে শেষ
// ```

// ---

// ```c
// }
// ```

// এটি `main()` function-এর শেষ নির্দেশ করে।

// ---

// # সম্পূর্ণ Program-এর মূল Logic

// এই program মূলত ৩টি জিনিস input নেয়:

// ```text
// 1. Domain
// 2. Codomain
// 3. Mapping
// ```

// তারপর দুইটি পরীক্ষা করে:

// ```text
// 1. One-to-One কি না
// 2. Onto কি না
// ```

// শেষে চারটির যেকোনো একটি result দেয়:

// ```text
// 1. Bijective
// 2. One-to-One
// 3. Onto
// 4. Neither One-to-One nor Onto
// ```

// ---

// # সহজভাবে পুরো Algorithm

// ```text
// START
//    ↓
// input.txt Open
//    ↓
// Domain Input
//    ↓
// Codomain Input
//    ↓
// Mapping Input
//    ↓
// One-to-One Check
//    ↓
// Onto Check
//    ↓
// Both True?
//    ├── YES → Bijective
//    │
//    └── NO
//         ↓
//    One-to-One True?
//    ├── YES → One-to-One
//    │
//    └── NO
//         ↓
//    Onto True?
//    ├── YES → Onto
//    │
//    └── NO → Neither
//    ↓
// File Close
//    ↓
// END
// ```

// # সবচেয়ে গুরুত্বপূর্ণ বিষয়

// ### One-to-One

// একই output দুইবার আসতে পারবে না।

// ```text
// a → x
// b → y
// c → z
// ```

// ✅ One-to-One

// কিন্তু:

// ```text
// a → x
// b → x
// c → z
// ```

// ❌ One-to-One নয়।

// ---

// ### Onto

// Codomain-এর **প্রতিটি element** অন্তত একবার mapping-এর output হিসেবে থাকতে হবে।

// ```text
// Codomain = {x, y, z}

// Mapping = {x, y, z}
// ```

// ✅ Onto

// কিন্তু:

// ```text
// Codomain = {x, y, z}

// Mapping = {x, y}
// ```

// ❌ Onto নয়।

// ---

// ### Bijective

// যদি একই সাথে:

// ```text
// One-to-One = TRUE
// Onto = TRUE
// ```

// তাহলে:

// ```text
// Bijective
// ```

// হবে।
