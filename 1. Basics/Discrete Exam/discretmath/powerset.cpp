#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");

    int n;
    vector<int> v;

    fin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        fin >> x;
        v.push_back(x);
    }

    int total = 1 << n;

    cout << "Power Set: ";

    for(int mask=0; mask<total; mask++)
    {
        cout << "{";

        bool first = true;

        for(int i=0;i<n;i++)
        {
            if(mask & (1<<i))
            {
                if(!first)
                    cout << ",";

                cout << v[i];
                first = false;
            }
        }

        cout << "} ";
    }

    cout << "\nTotal subsets: " << total;

    fin.close();

    return 0;
}





























// #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("input.txt", "r");

//     int n;
//     int v[100];

//     fscanf(fin, "%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         v[i] = x;
//     }

//     int total = 1 << n;

//     printf("Power Set: ");

//     for (int mask = 0; mask < total; mask++)
//     {
//         printf("{");

//         int first = 1;

//         for (int i = 0; i < n; i++)
//         {
//             if (mask & (1 << i))
//             {
//                 if (!first)
//                     printf(",");

//                 printf("%d", v[i]);
//                 first = 0;
//             }
//         }

//         printf(" ");
//         printf("}");
//     }

//     printf("\nTotal subsets: %d", total);

//     fclose(fin);

//     return 0;
// }































// ```c
// #include <stdio.h>
// ```

// ব্যাখ্যা:
// এই লাইনে `stdio.h` header file যুক্ত করা হয়েছে।
// `printf()`, `fscanf()`, `fopen()`, `fclose()` ইত্যাদি function ব্যবহার করার জন্য `stdio.h` প্রয়োজন।

// ```c
// int main()
// {
// ```

// ব্যাখ্যা:
// `main()` হলো C program-এর প্রধান function।
// Program-এর execution এখান থেকেই শুরু হয়।
// `int` ব্যবহার করা হয়েছে কারণ function শেষে একটি integer value return করবে।
// `{` দিয়ে `main()` function-এর body শুরু হয়েছে।

// ```c
// FILE *fin = fopen("input.txt", "r");
// ```

// ব্যাখ্যা:
// এই লাইনে `input.txt` নামের একটি file read করার জন্য open করা হয়েছে।

// * `FILE *fin` → file pointer তৈরি করা হয়েছে।
// * `fopen()` → file open করার function।
// * `"input.txt"` → যে file open করা হবে তার নাম।
// * `"r"` → read mode, অর্থাৎ file থেকে data পড়া হবে।
// * `fin` → open করা file-টিকে নির্দেশ করবে।

// অর্থাৎ এই লাইনের কাজ হলো `input.txt` file-টি পড়ার জন্য open করা।

// ```c
// int n;
// ```

// ব্যাখ্যা:
// এখানে `n` নামে একটি integer variable তৈরি করা হয়েছে।
// এখানে input set-এ মোট কয়টি element আছে তা রাখা হবে।

// যেমন:

// n = 3

// ```c
// int v[100];
// ```

// ব্যাখ্যা:
// এখানে `v` নামে একটি integer array তৈরি করা হয়েছে।
// এই array-তে সর্বোচ্চ 100টি integer রাখা যাবে।

// এখানে মূল set-এর elementগুলো রাখা হবে।

// যেমন:

// Set = {1, 2, 3}

// তাহলে:

// v[0] = 1
// v[1] = 2
// v[2] = 3

// ```c
// fscanf(fin, "%d", &n);
// ```

// ব্যাখ্যা:
// এই লাইনে `input.txt` file থেকে প্রথম integer value পড়া হচ্ছে এবং `n` variable-এর মধ্যে রাখা হচ্ছে।

// ধরো `input.txt`-এর শুরুতে আছে:

// 3

// তাহলে:

// n = 3

// এখানে:

// * `fin` → কোন file থেকে পড়ব
// * `%d` → integer পড়ব
// * `&n` → `n` variable-এর address

// ```c
// for (int i = 0; i < n; i++)
// ```

// ব্যাখ্যা:
// এটি একটি `for` loop।
// এই loop ব্যবহার করে set-এর প্রতিটি element file থেকে পড়া হবে।

// যদি:

// n = 3

// তাহলে `i`-এর মান হবে:

// 0 → 1 → 2

// অর্থাৎ loop 3 বার চলবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// `for` loop-এর body এখানে শুরু হয়েছে।

// ```c
// int x;
// ```

// ব্যাখ্যা:
// এখানে `x` নামে একটি integer variable তৈরি করা হয়েছে।
// File থেকে প্রতিবার একটি element প্রথমে `x`-এর মধ্যে নেওয়া হবে।

// ```c
// fscanf(fin, "%d", &x);
// ```

// ব্যাখ্যা:
// `input.txt` file থেকে একটি integer value পড়া হচ্ছে এবং `x` variable-এর মধ্যে রাখা হচ্ছে।

// যেমন file থেকে `5` পড়লে:

// x = 5

// ```c
// v[i] = x;
// ```

// ব্যাখ্যা:
// `x`-এর মধ্যে থাকা value-টি `v` array-এর `i` নম্বর position-এ রাখা হচ্ছে।

// যেমন:

// i = 0
// x = 5

// তাহলে:

// v[0] = 5

// ```c
// }
// ```

// ব্যাখ্যা:
// Set-এর element input নেওয়ার `for` loop শেষ হয়েছে।

// ```c
// int total = 1 << n;
// ```

// ব্যাখ্যা:
// এই লাইনটি Power Set-এর মোট কয়টি subset হবে তা বের করে।

// Power Set-এর formula:

// 2ⁿ

// এখানে:

// `1 << n`

// মানে 1-কে `n` bit বামে shift করা।

// এটি mathematically:

// 2ⁿ

// এর সমান।

// যেমন:

// n = 3

// তাহলে:

// total = 2³
// = 8

// অর্থাৎ 3টি element-এর Power Set-এ মোট 8টি subset থাকবে।

// ```c
// printf("Power Set: ");
// ```

// ব্যাখ্যা:
// Screen-এ:

// Power Set:

// এই লেখাটি print করবে।

// `printf()` C language-এ output দেখানোর জন্য ব্যবহার করা হয়।

// ```c
// for (int mask = 0; mask < total; mask++)
// ```

// ব্যাখ্যা:
// এটি Power Set-এর প্রতিটি possible subset তৈরি করার জন্য ব্যবহৃত loop।

// যদি:

// total = 8

// তাহলে `mask`-এর মান হবে:

// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7

// প্রতিটি `mask` একটি আলাদা subset represent করবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// Power Set তৈরির `for` loop-এর body শুরু হয়েছে।

// ```c
// printf("{");
// ```

// ব্যাখ্যা:
// প্রতিটি subset-এর শুরুতে `{` print করা হচ্ছে।

// যেমন:

// {

// ```c
// int first = 1;
// ```

// ব্যাখ্যা:
// এই variable ব্যবহার করা হয়েছে comma `,` কোথায় দিতে হবে তা নিয়ন্ত্রণ করার জন্য।

// এখানে:

// `first = 1` → এখনো কোনো element print হয়নি।

// যখন প্রথম element print হবে, তখন:

// `first = 0`

// করা হবে।

// এটি boolean-এর মতো কাজ করছে:

// 1 = true
// 0 = false

// ```c
// for (int i = 0; i < n; i++)
// ```

// ব্যাখ্যা:
// বর্তমান `mask`-এর মধ্যে কোন কোন element থাকবে তা check করার জন্য এই loop ব্যবহার করা হয়েছে।

// যদি:

// n = 3

// তাহলে:

// i = 0
// i = 1
// i = 2

// প্রতিটি element একবার করে check হবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// Inner `for` loop-এর body শুরু হয়েছে।

// ```c
// if (mask & (1 << i))
// ```

// ব্যাখ্যা:
// এটি এই program-এর সবচেয়ে গুরুত্বপূর্ণ line।

// এখানে **bitwise AND (`&`)** ব্যবহার করে check করা হচ্ছে `v[i]` element-টি বর্তমান subset-এর মধ্যে থাকবে কি না।

// `1 << i` দিয়ে একটি নির্দিষ্ট bit select করা হয়।

// যেমন:

// i = 0 হলে:

// 1 << 0 = 001

// i = 1 হলে:

// 1 << 1 = 010

// i = 2 হলে:

// 1 << 2 = 100

// এরপর `mask`-এর সাথে `&` করে check করা হয় সেই bit `1` কি না।

// যদি result non-zero হয়, তাহলে element-টি subset-এর মধ্যে থাকবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// যদি বর্তমান element subset-এর মধ্যে থাকে, তাহলে এই `if` block execute হবে।

// ```c
// if (!first)
// ```

// ব্যাখ্যা:
// এখানে check করা হচ্ছে এটি প্রথম element কি না।

// `first = 1` হলে এটি প্রথম element।
// তখন comma দেওয়ার প্রয়োজন নেই।

// কিন্তু `first = 0` হলে বুঝতে হবে আগে একটি element already print হয়েছে।
// তখন নতুন element-এর আগে comma `,` দিতে হবে।

// `!first` মানে `first` false হলে condition true হবে।

// ```c
// printf(",");
// ```

// ব্যাখ্যা:
// প্রথম element-এর পরে পরবর্তী element এলে তাদের মাঝে comma দেওয়ার জন্য এই line ব্যবহার করা হয়েছে।

// যেমন:

// {1,2,3}

// এখানে `1` এবং `2`-এর মাঝে এবং `2` এবং `3`-এর মাঝে comma আছে।

// ```c
// printf("%d", v[i]);
// ```

// ব্যাখ্যা:
// বর্তমান element `v[i]` screen-এ print করা হচ্ছে।

// `%d` ব্যবহার করা হয়েছে কারণ `v[i]` একটি integer।

// যেমন:

// v[i] = 5

// তাহলে screen-এ:

// 5

// দেখাবে।

// ```c
// first = 0;
// ```

// ব্যাখ্যা:
// একটি element print হয়ে গেছে।
// তাই `first`-কে `0` করা হচ্ছে।

// এর অর্থ:

// এখন থেকে এটি আর প্রথম element নয়।

// তাই পরবর্তী element এলে তার আগে comma `,` দেওয়া হবে।

// ```c
// }
// ```

// ব্যাখ্যা:
// `if (mask & (1 << i))` block শেষ হয়েছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// বর্তমান subset-এর element check করার inner `for` loop শেষ হয়েছে।

// ```c
// printf("} ");
// ```

// ব্যাখ্যা:
// বর্তমান subset-এর শেষে `}` print করা হচ্ছে।

// এরপর `" "` একটি space print করছে।

// যেমন:

// {1,2} {3} {1,3}

// প্রতিটি subset-এর মধ্যে space রাখার জন্য এটি করা হয়েছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// সবগুলো subset তৈরি করার outer `for` loop শেষ হয়েছে।

// ```c
// printf("\nTotal subsets: %d", total);
// ```

// ব্যাখ্যা:
// এই লাইনে প্রথমে:

// `\n`

// দিয়ে নতুন line শুরু করা হচ্ছে।

// তারপর:

// Total subsets:

// এর পরে `total`-এর value print করা হচ্ছে।

// যদি:

// n = 3

// হয়, তাহলে:

// total = 8

// তাই output হবে:

// Total subsets: 8

// ```c
// fclose(fin);
// ```

// ব্যাখ্যা:
// `input.txt` file-এর কাজ শেষ।
// তাই `fclose()` function ব্যবহার করে file-টি বন্ধ করা হচ্ছে।

// যে file `fopen()` দিয়ে open করা হয়, কাজ শেষে সেটি `fclose()` দিয়ে close করা উচিত।

// ```c
// return 0;
// ```

// ব্যাখ্যা:
// এটি `main()` function থেকে `0` return করছে।

// `return 0` সাধারণত বোঝায় program সফলভাবে শেষ হয়েছে এবং কোনো error হয়নি।

// ```c
// }
// ```

// ব্যাখ্যা:
// এটি `main()` function-এর শেষ curly bracket।
// এর মাধ্যমে পুরো C program শেষ হয়েছে।

// ==============================
// PROGRAM-এর মূল ধারণা
// ====================

// ধরো input.txt-এ আছে:

// 3
// 1 2 3

// তাহলে:

// n = 3

// এবং:

// v = {1, 2, 3}

// Power Set-এর মোট subset:

// 2³ = 8

// তাই মোট 8টি subset হবে:

// {}
// {1}
// {2}
// {1,2}
// {3}
// {1,3}
// {2,3}
// {1,2,3}

// Program-এর:

// mask = 0 → {}
// mask = 1 → {1}
// mask = 2 → {2}
// mask = 3 → {1,2}
// mask = 4 → {3}
// mask = 5 → {1,3}
// mask = 6 → {2,3}
// mask = 7 → {1,2,3}

// অর্থাৎ `mask` এবং bitwise operation ব্যবহার করে program প্রতিটি possible subset তৈরি করছে।

// শেষে:

// Total subsets = 2ⁿ

// এই program-এর সবচেয়ে গুরুত্বপূর্ণ ৩টি অংশ হলো:

// 1. `int total = 1 << n;`
//    → মোট subset সংখ্যা বের করে।

// 2. `if (mask & (1 << i))`
//    → কোন element বর্তমান subset-এ থাকবে তা নির্ধারণ করে।

// 3. `printf("%d", v[i]);`
//    → নির্বাচিত element print করে।

// ```

// এভাবে পড়লে **Power Set-এর পুরো logicটা** `mask → bit → element select → subset print` এই চার ধাপে সহজে বুঝতে পারবে।
// ```

