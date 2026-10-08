#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input3.txt");
            int n,check;
            vector<int> v;

            fin>>n;
            for(int i=1;i<=n;i++)
                {
                    int x;
                    fin>>x;
                    v.push_back(x);
                }

            fin>>check;
            
            set<int> s;
            s.insert(v.begin(),v.end());

            if(s.count(check)) cout<<check<<" is the member of those set.";
            else cout<<check<<" is not the member.";    
        }




























// #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("input3.txt", "r");

//     int n, check;
//     int v[100];

//     fscanf(fin, "%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         v[i] = x;
//     }

//     fscanf(fin, "%d", &check);

//     int found = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == check)
//         {
//             found = 1;
//             break;
//         }
//     }

//     if (found)
//         printf("%d is the member of those set.", check);
//     else
//         printf("%d is not the member.", check);

//     fclose(fin);

//     return 0;
// }
































// ```c
// #include <stdio.h>
// ```

// **ব্যাখ্যা:**
// এই লাইনে `stdio.h` header file যুক্ত করা হয়েছে।
// `printf()`, `fscanf()`, `fopen()`, `fclose()` ইত্যাদি function ব্যবহার করার জন্য `stdio.h` প্রয়োজন।

// ```c
// int main()
// {
// ```

// **ব্যাখ্যা:**
// `main()` হলো C program-এর প্রধান function।
// Program-এর execution এখান থেকেই শুরু হয়।

// `int` ব্যবহার করা হয়েছে কারণ `main()` function শেষে একটি integer value return করবে।

// `{` দিয়ে `main()` function-এর body শুরু হয়েছে।

// ```c
// FILE *fin = fopen("input3.txt", "r");
// ```

// **ব্যাখ্যা:**
// এই লাইনে `input3.txt` নামের file-টি read করার জন্য open করা হয়েছে।

// * `FILE *fin` → একটি file pointer তৈরি করা হয়েছে।
// * `fopen()` → file open করার function।
// * `"input3.txt"` → যে file-টি open করা হবে।
// * `"r"` → read mode, অর্থাৎ file থেকে data পড়া হবে।
// * `fin` → open করা file-টিকে নির্দেশ করবে।

// অর্থাৎ এই লাইনের কাজ হলো `input3.txt` file-টি পড়ার জন্য open করা।

// ```c
// int n, check;
// ```

// **ব্যাখ্যা:**
// এখানে দুটি integer variable তৈরি করা হয়েছে।

// * `n` → Set-এ মোট কয়টি element আছে তা রাখবে।
// * `check` → কোন number-টি Set-এর member কি না, সেটা check করার জন্য রাখা হবে।

// যেমন:

// ```text
// Set = {10, 20, 30}
// check = 20
// ```

// এখানে `n = 3` এবং `check = 20`।

// ```c
// int v[100];
// ```

// **ব্যাখ্যা:**
// এখানে `v` নামে একটি integer array তৈরি করা হয়েছে।

// এই array-তে Set-এর elementগুলো রাখা হবে।

// সর্বোচ্চ 100টি integer রাখা যাবে।

// যেমন:

// ```text
// Set = {10, 20, 30}
// ```

// তাহলে:

// ```text
// v[0] = 10
// v[1] = 20
// v[2] = 30
// ```

// ```c
// fscanf(fin, "%d", &n);
// ```

// **ব্যাখ্যা:**
// এই লাইনে `input3.txt` file থেকে প্রথম integer value পড়া হচ্ছে এবং `n`-এর মধ্যে রাখা হচ্ছে।

// ধরো `input3.txt`-এর শুরুতে আছে:

// ```text
// 3
// ```

// তাহলে:

// ```text
// n = 3
// ```

// এখানে:

// * `fin` → কোন file থেকে data পড়ব।
// * `%d` → integer পড়ব।
// * `&n` → `n` variable-এর memory address।

// ```c
// for (int i = 0; i < n; i++)
// ```

// **ব্যাখ্যা:**
// এটি একটি `for` loop।

// এই loop ব্যবহার করে Set-এর সব element একে একে file থেকে পড়া হবে।

// যদি:

// ```text
// n = 3
// ```

// হয়, তাহলে `i`-এর মান হবে:

// ```text
// 0
// 1
// 2
// ```

// অর্থাৎ loop মোট 3 বার চলবে।

// ```c
// {
// ```

// **ব্যাখ্যা:**
// `for` loop-এর body এখানে শুরু হয়েছে।

// ```c
// int x;
// ```

// **ব্যাখ্যা:**
// এখানে `x` নামে একটি integer variable তৈরি করা হয়েছে।

// প্রতিবার file থেকে একটি Set element প্রথমে `x`-এর মধ্যে রাখা হবে।

// ```c
// fscanf(fin, "%d", &x);
// ```

// **ব্যাখ্যা:**
// এই লাইনে file থেকে একটি integer পড়া হচ্ছে এবং `x` variable-এর মধ্যে রাখা হচ্ছে।

// যেমন file থেকে:

// ```text
// 20
// ```

// পড়লে:

// ```text
// x = 20
// ```

// ```c
// v[i] = x;
// ```

// **ব্যাখ্যা:**
// `x`-এর মধ্যে থাকা value-টি `v` array-এর `i` নম্বর position-এ রাখা হচ্ছে।

// যেমন:

// ```text
// i = 0
// x = 10
// ```

// তাহলে:

// ```text
// v[0] = 10
// ```

// পরেরবার:

// ```text
// i = 1
// x = 20
// ```

// তাহলে:

// ```text
// v[1] = 20
// ```

// ```c
// }
// ```

// **ব্যাখ্যা:**
// Set-এর element input নেওয়ার `for` loop শেষ হয়েছে।

// ```c
// fscanf(fin, "%d", &check);
// ```

// **ব্যাখ্যা:**
// এখন file থেকে যে number-টি Set-এর member কি না check করতে হবে, সেই number-টি পড়া হচ্ছে।

// যেমন file-এ শেষে আছে:

// ```text
// 20
// ```

// তাহলে:

// ```text
// check = 20
// ```

// হবে।

// ```c
// int found = 0;
// ```

// **ব্যাখ্যা:**
// `found` variable ব্যবহার করা হয়েছে `check` number-টি Set-এর মধ্যে পাওয়া গেছে কি না তা বোঝানোর জন্য।

// শুরুতে:

// ```text
// found = 0
// ```

// এর অর্থ:

// **এখনো number-টি পাওয়া যায়নি।**

// এখানে:

// ```text
// 0 = পাওয়া যায়নি
// 1 = পাওয়া গেছে
// ```

// ```c
// for (int i = 0; i < n; i++)
// ```

// **ব্যাখ্যা:**
// এখন Set-এর প্রতিটি element-এর সাথে `check` number-টি compare করার জন্য loop চালানো হচ্ছে।

// যদি Set হয়:

// ```text
// {10, 20, 30}
// ```

// তাহলে প্রথমে `10`, তারপর `20`, তারপর `30` check করা হবে।

// ```c
// {
// ```

// **ব্যাখ্যা:**
// এই `for` loop-এর body শুরু হয়েছে।

// ```c
// if (v[i] == check)
// ```

// **ব্যাখ্যা:**
// এখানে Set-এর বর্তমান element `v[i]` এবং যে number-টি খুঁজছি `check`—এই দুইটি compare করা হচ্ছে।

// যদি:

// ```text
// v[i] == check
// ```

// হয়, তাহলে বুঝতে হবে `check` number-টি Set-এর মধ্যে আছে।

// যেমন:

// ```text
// v[i] = 20
// check = 20
// ```

// তাহলে condition সত্য হবে।

// ```c
// {
// ```

// **ব্যাখ্যা:**
// `v[i] == check` সত্য হলে এই `if` block execute হবে।

// ```c
// found = 1;
// ```

// **ব্যাখ্যা:**
// যেহেতু `check` number-টি Set-এর মধ্যে পাওয়া গেছে, তাই:

// ```text
// found = 1
// ```

// করা হচ্ছে।

// অর্থাৎ:

// **number-টি Set-এর member।**

// ```c
// break;
// ```

// **ব্যাখ্যা:**
// Number-টি পাওয়া যাওয়ার পর আর Set-এর বাকি elementগুলো check করার প্রয়োজন নেই।

// তাই `break` দিয়ে `for` loop বন্ধ করে দেওয়া হচ্ছে।

// ```c
// }
// ```

// **ব্যাখ্যা:**
// `if` block শেষ হয়েছে।

// ```c
// }
// ```

// **ব্যাখ্যা:**
// `check` number খোঁজার `for` loop শেষ হয়েছে।

// ```c
// if (found)
// ```

// **ব্যাখ্যা:**
// এখন পরীক্ষা করা হচ্ছে `found`-এর value কী।

// যদি:

// ```text
// found = 1
// ```

// হয়, তাহলে `check` number-টি Set-এর মধ্যে পাওয়া গেছে।

// C language-এ `1` কে true হিসেবে ধরা হয়।

// ```c
// printf("%d is the member of those set.", check);
// ```

// **ব্যাখ্যা:**
// যদি number-টি Set-এর মধ্যে পাওয়া যায়, তাহলে এই message print করবে।

// যেমন `check = 20` হলে:

// ```text
// 20 is the member of those set.
// ```

// এখানে `%d` দিয়ে `check`-এর integer value print করা হচ্ছে।

// ```c
// else
// ```

// **ব্যাখ্যা:**
// যদি `found` সত্য না হয় অর্থাৎ:

// ```text
// found = 0
// ```

// হয়, তাহলে `else` block execute হবে।

// এর অর্থ `check` number-টি Set-এর মধ্যে পাওয়া যায়নি।

// ```c
// printf("%d is not the member.", check);
// ```

// **ব্যাখ্যা:**
// যদি number-টি Set-এর মধ্যে না পাওয়া যায়, তাহলে এই message print করবে।

// যেমন:

// ```text
// 50 is not the member.
// ```

// ```c
// fclose(fin);
// ```

// **ব্যাখ্যা:**
// `input3.txt` file-এর কাজ শেষ হয়েছে।

// তাই `fclose()` function ব্যবহার করে file-টি বন্ধ করা হচ্ছে।

// যে file `fopen()` দিয়ে open করা হয়, কাজ শেষে সেটি `fclose()` দিয়ে close করা উচিত।

// ```c
// return 0;
// ```

// **ব্যাখ্যা:**
// `main()` function থেকে `0` return করা হচ্ছে।

// `return 0` সাধারণত বোঝায় যে program সফলভাবে শেষ হয়েছে এবং কোনো error হয়নি।

// ```c
// }
// ```

// **ব্যাখ্যা:**
// এটি `main()` function-এর শেষ curly bracket।

// এর মাধ্যমে পুরো program শেষ হয়েছে।

// ==================================================
// PROGRAM-এর মূল কাজ
// ==================

// এই program-এর কাজ হলো:

// **একটি নির্দিষ্ট number কোনো Set-এর member কি না তা check করা।**

// ধরো `input3.txt`-এ আছে:

// ```text
// 5
// 10 20 30 40 50
// 30
// ```

// তাহলে:

// ```text
// n = 5

// Set = {10, 20, 30, 40, 50}

// check = 30
// ```

// Program এরপর একে একে check করবে:

// ```text
// 10 == 30 → No
// 20 == 30 → No
// 30 == 30 → Yes
// ```

// তাই:

// ```text
// found = 1
// ```

// এবং output হবে:

// ```text
// 30 is the member of those set.
// ```

// আবার যদি input হয়:

// ```text
// 5
// 10 20 30 40 50
// 70
// ```

// তাহলে:

// ```text
// 10 == 70 → No
// 20 == 70 → No
// 30 == 70 → No
// 40 == 70 → No
// 50 == 70 → No
// ```

// কোথাও 70 পাওয়া যায়নি।

// তাই:

// ```text
// found = 0
// ```

// এবং output হবে:

// ```text
// 70 is not the member.
// ```

// ### সবচেয়ে গুরুত্বপূর্ণ Logic

// ```text
// Input Set
//    ↓
// Set-এর element array-তে রাখা
//    ↓
// check number নেওয়া
//    ↓
// প্রতিটি element-এর সাথে compare
//    ↓
// মিলে গেলে found = 1
//    ↓
// মিলে গেলে → Member
// না মিললে → Not Member
// ```

