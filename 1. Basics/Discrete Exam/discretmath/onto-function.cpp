#include <bits/stdc++.h>
using namespace std;
    int main()
        {
            ifstream fin("input4.txt");
            int n,m,k;
            vector<int> domain;
            vector<char> codomain,mapping;

            fin>>n;
            for(int i=0;i<n;i++)
                {
                    int x;
                    fin>>x;
                    domain.push_back(x);
                }
            fin>>m;
            for(int i=0;i<m;i++)
                {
                    char x;
                    fin>>x;
                    codomain.push_back(x);
                }    
            fin>>k;
            for(int i=0;i<k;i++)
                {
                    char x;
                    fin>>x;
                    mapping.push_back(x);
                }    

            set<char> s;
            s.insert(mapping.begin(),mapping.end());
            
            bool onto=true;
            for(char i:codomain)
                {
                    if(s.count(i)==0)
                        {
                            onto=false;
                        }
                }

            if(onto) cout<<"yes";
            else cout<<"No";    
        }





























//         #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("input4.txt", "r");

//     int n, m, k;
//     int domain[100];
//     char codomain[100], mapping[100];

//     if (fin == NULL)
//     {
//         printf("Error: Cannot open input4.txt");
//         return 1;
//     }

//     /* Input Domain */
//     fscanf(fin, "%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         fscanf(fin, "%d", &x);
//         domain[i] = x;
//     }

//     /* Input Codomain */
//     fscanf(fin, "%d", &m);

//     for (int i = 0; i < m; i++)
//     {
//         char x;
//         fscanf(fin, " %c", &x);
//         codomain[i] = x;
//     }

//     /* Input Mapping */
//     fscanf(fin, "%d", &k);

//     for (int i = 0; i < k; i++)
//     {
//         char x;
//         fscanf(fin, " %c", &x);
//         mapping[i] = x;
//     }

//     /* Create Unique Mapping */
//     char uniqueMapping[100];
//     int uniqueSize = 0;

//     for (int i = 0; i < k; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < uniqueSize; j++)
//         {
//             if (uniqueMapping[j] == mapping[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             uniqueMapping[uniqueSize] = mapping[i];
//             uniqueSize++;
//         }
//     }

//     /* Onto Check */
//     int onto = 1;

//     for (int i = 0; i < m; i++)
//     {
//         int found = 0;

//         for (int j = 0; j < uniqueSize; j++)
//         {
//             if (codomain[i] == uniqueMapping[j])
//             {
//                 found = 1;
//                 break;
//             }
//         }

//         if (found == 0)
//         {
//             onto = 0;
//             break;
//         }
//     }

//     /* Result */
//     if (onto)
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


















// ```c
// #include <stdio.h>
// ```

// ব্যাখ্যা:
// এই লাইনে `stdio.h` নামের Standard Input Output Header File যুক্ত করা হয়েছে।
// `printf()`, `fscanf()`, `fopen()`, `fclose()` ইত্যাদি input/output এবং file handling function ব্যবহার করার জন্য এই header file প্রয়োজন।
// `#include` দ্বারা header file-টি program-এর মধ্যে যুক্ত করা হয়।

// int main()
// {

// ````

// ব্যাখ্যা:
// `main()` হলো C program-এর প্রধান function।
// একটি C program সাধারণত `main()` function থেকেই execution শুরু করে।
// `int` লেখা হয়েছে কারণ `main()` function শেষে একটি integer value return করবে।
// `{` দিয়ে `main()` function-এর body শুরু হয়েছে।


// ```c
// FILE *fin = fopen("input4.txt", "r");
// ````

// ব্যাখ্যা:
// এই লাইনে `input4.txt` নামের একটি file open করা হয়েছে।

// * `FILE *fin` → একটি file pointer তৈরি করা হয়েছে।
// * `fopen()` → file open করার জন্য ব্যবহৃত function।
// * `"input4.txt"` → যে file-টি open করা হবে তার নাম।
// * `"r"` → read mode, অর্থাৎ file থেকে data পড়া হবে।
// * `fin` → open করা file-টির address/pointer ধরে রাখবে।

// অর্থাৎ, এই লাইনের কাজ হলো `input4.txt` file-টি পড়ার জন্য open করা।

// ```c
// int n, m, k;
// ```

// ব্যাখ্যা:
// এখানে তিনটি integer variable ঘোষণা করা হয়েছে।

// * `n` → Domain-এ মোট কয়টি element আছে তা রাখবে।
// * `m` → Codomain-এ মোট কয়টি element আছে তা রাখবে।
// * `k` → Mapping-এ মোট কয়টি element আছে তা রাখবে।

// `int` ব্যবহার করা হয়েছে কারণ এগুলো সংখ্যা।

// ```c
// int domain[100];
// ```

// ব্যাখ্যা:
// এখানে `domain` নামে একটি integer array তৈরি করা হয়েছে।
// এই array-তে সর্বোচ্চ 100টি integer value রাখা যাবে।

// যেমন Domain যদি হয়:

// {1, 2, 3, 4}

// তাহলে এগুলো `domain` array-এর মধ্যে সংরক্ষণ করা হবে।

// ```c
// char codomain[100], mapping[100];
// ```

// ব্যাখ্যা:
// এখানে দুটি character array তৈরি করা হয়েছে।

// * `codomain[100]` → Codomain-এর characterগুলো সংরক্ষণ করবে।
// * `mapping[100]` → Mapping-এর characterগুলো সংরক্ষণ করবে।

// `char` ব্যবহার করা হয়েছে কারণ এখানে character যেমন `a`, `b`, `c` রাখা হবে।

// ```c
// if (fin == NULL)
// ```

// ব্যাখ্যা:
// এই লাইনে পরীক্ষা করা হচ্ছে `input4.txt` file-টি সফলভাবে open হয়েছে কি না।

// যদি file open করতে না পারে, তাহলে `fopen()` `NULL` return করবে।
// তাই `fin == NULL` হলে বুঝতে হবে file open করা সম্ভব হয়নি।

// ```c
// {
// ```

// ব্যাখ্যা:
// `if` condition সত্য হলে যে codeগুলো execute হবে, সেগুলোর block এখানে শুরু হয়েছে।

// ```c
// printf("Error: Cannot open input4.txt");
// ```

// ব্যাখ্যা:
// যদি `input4.txt` file open করা না যায়, তাহলে screen-এ এই message দেখাবে:

// Error: Cannot open input4.txt

// `printf()` screen-এ output দেখানোর জন্য ব্যবহার করা হয়েছে।

// ```c
// return 1;
// ```

// ব্যাখ্যা:
// File open করতে না পারায় program এখানেই বন্ধ হয়ে যাবে।
// `return 1` সাধারণত program-এ error হয়েছে বোঝাতে ব্যবহার করা হয়।

// ```c
// }
// ```

// ব্যাখ্যা:
// এখানে `if (fin == NULL)` block শেষ হয়েছে।

// ```c
// /* Input Domain */
// ```

// ব্যাখ্যা:
// এটি একটি comment।
// Program execute করার সময় comment-এর কোনো কাজ নেই।
// এটি শুধু programmer-কে বোঝানোর জন্য লেখা হয়েছে যে এখান থেকে Domain-এর input নেওয়া হচ্ছে।

// ```c
// fscanf(fin, "%d", &n);
// ```

// ব্যাখ্যা:
// এই লাইনে `input4.txt` file থেকে একটি integer value পড়া হচ্ছে এবং `n` variable-এর মধ্যে রাখা হচ্ছে।

// * `fscanf()` → file থেকে data পড়ার function।
// * `fin` → কোন file থেকে data পড়তে হবে তা বলে।
// * `%d` → integer value পড়ার format specifier।
// * `&n` → `n` variable-এর memory address।

// ধরো file-এ আছে:

// 4

// তাহলে:

// n = 4

// ```c
// for (int i = 0; i < n; i++)
// ```

// ব্যাখ্যা:
// এটি একটি `for loop`।
// Domain-এর সব element একে একে পড়ার জন্য loop ব্যবহার করা হয়েছে।

// যদি `n = 4` হয়, তাহলে `i`-এর মান হবে:

// 0 → 1 → 2 → 3

// অর্থাৎ loop মোট 4 বার চলবে।

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
// File থেকে Domain-এর একটি element প্রথমে `x`-এর মধ্যে নেওয়া হবে।

// ```c
// fscanf(fin, "%d", &x);
// ```

// ব্যাখ্যা:
// `input4.txt` file থেকে একটি integer value পড়া হচ্ছে এবং `x` variable-এর মধ্যে রাখা হচ্ছে।

// যেমন file থেকে `5` পড়লে:

// x = 5

// ```c
// domain[i] = x;
// ```

// ব্যাখ্যা:
// `x`-এর মধ্যে থাকা value-টি `domain` array-এর `i` নম্বর position-এ রাখা হচ্ছে।

// যেমন:

// x = 5
// i = 0

// তাহলে:

// domain[0] = 5

// ```c
// }
// ```

// ব্যাখ্যা:
// Domain input নেওয়ার `for` loop-এর body শেষ হয়েছে।

// ```c
// /* Input Codomain */
// ```

// ব্যাখ্যা:
// এটি comment।
// এখান থেকে Codomain-এর input নেওয়া হবে বোঝানোর জন্য এটি লেখা হয়েছে।

// ```c
// fscanf(fin, "%d", &m);
// ```

// ব্যাখ্যা:
// File থেকে Codomain-এ মোট কয়টি element আছে তা পড়া হচ্ছে এবং `m`-এর মধ্যে রাখা হচ্ছে।

// যেমন:

// 3

// তাহলে:

// m = 3

// ```c
// for (int i = 0; i < m; i++)
// ```

// ব্যাখ্যা:
// Codomain-এর প্রতিটি element পড়ার জন্য এই loop ব্যবহার করা হয়েছে।

// যদি:

// m = 3

// তাহলে loop চলবে 3 বার।

// ```c
// {
// ```

// ব্যাখ্যা:
// Codomain input নেওয়ার `for` loop-এর body শুরু হয়েছে।

// ```c
// char x;
// ```

// ব্যাখ্যা:
// এখানে `x` নামে একটি character variable তৈরি করা হয়েছে।
// Codomain-এর একটি character সাময়িকভাবে এখানে রাখা হবে।

// ```c
// fscanf(fin, " %c", &x);
// ```

// ব্যাখ্যা:
// File থেকে একটি character পড়া হচ্ছে এবং `x`-এর মধ্যে রাখা হচ্ছে।

// * `%c` → একটি character পড়ার format specifier।
// * `%c`-এর আগে একটি space `" %c"` দেওয়া হয়েছে।
// * এই space-এর কারণে আগের newline বা whitespace skip করে character পড়তে সুবিধা হয়।

// ```c
// codomain[i] = x;
// ```

// ব্যাখ্যা:
// File থেকে পড়া character-টি `codomain` array-এর `i` নম্বর position-এ রাখা হচ্ছে।

// যেমন:

// x = a
// i = 0

// তাহলে:

// codomain[0] = 'a'

// ```c
// }
// ```

// ব্যাখ্যা:
// Codomain input নেওয়ার loop শেষ হয়েছে।

// ```c
// /* Input Mapping */
// ```

// ব্যাখ্যা:
// এটি একটি comment।
// এখান থেকে Mapping-এর input নেওয়া হবে।

// ```c
// fscanf(fin, "%d", &k);
// ```

// ব্যাখ্যা:
// File থেকে Mapping-এ মোট কয়টি element আছে তা পড়া হচ্ছে এবং `k` variable-এর মধ্যে রাখা হচ্ছে।

// যেমন:

// 3

// তাহলে:

// k = 3

// ```c
// for (int i = 0; i < k; i++)
// ```

// ব্যাখ্যা:
// Mapping-এর প্রতিটি element পড়ার জন্য এই loop ব্যবহার করা হয়েছে।

// যদি `k = 3` হয়, তাহলে loop 3 বার চলবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// Mapping input নেওয়ার loop-এর body শুরু হয়েছে।

// ```c
// char x;
// ```

// ব্যাখ্যা:
// Mapping থেকে একটি character সাময়িকভাবে রাখার জন্য `x` নামে character variable তৈরি করা হয়েছে।

// ```c
// fscanf(fin, " %c", &x);
// ```

// ব্যাখ্যা:
// File থেকে একটি character পড়া হচ্ছে এবং `x`-এর মধ্যে রাখা হচ্ছে।

// যেমন:

// x = b

// ```c
// mapping[i] = x;
// ```

// ব্যাখ্যা:
// `x`-এর মধ্যে থাকা character-টি `mapping` array-তে রাখা হচ্ছে।

// যেমন:

// mapping[0] = 'a'
// mapping[1] = 'b'
// mapping[2] = 'b'

// ```c
// }
// ```

// ব্যাখ্যা:
// Mapping input নেওয়ার `for` loop শেষ হয়েছে।

// ```c
// /* Create Unique Mapping */
// ```

// ব্যাখ্যা:
// এটি একটি comment।
// এখন Mapping-এর duplicate value বাদ দিয়ে শুধু unique value তৈরি করা হবে।

// ```c
// char uniqueMapping[100];
// ```

// ব্যাখ্যা:
// এখানে `uniqueMapping` নামে একটি character array তৈরি করা হয়েছে।
// Mapping-এর duplicate বাদ দেওয়ার পর শুধু আলাদা/unique characterগুলো এখানে রাখা হবে।

// যেমন:

// Mapping = {a, b, b, c, a}

// তাহলে:

// uniqueMapping = {a, b, c}

// ```c
// int uniqueSize = 0;
// ```

// ব্যাখ্যা:
// `uniqueMapping`-এ বর্তমানে কয়টি unique element আছে তা রাখার জন্য `uniqueSize` variable ব্যবহার করা হয়েছে।

// শুরুতে কোনো element নেই।

// তাই:

// uniqueSize = 0

// ```c
// for (int i = 0; i < k; i++)
// ```

// ব্যাখ্যা:
// Mapping-এর প্রতিটি element একে একে পরীক্ষা করার জন্য loop চালানো হয়েছে।

// ```c
// {
// ```

// ব্যাখ্যা:
// এই `for` loop-এর body শুরু হয়েছে।

// ```c
// int found = 0;
// ```

// ব্যাখ্যা:
// `found` variable দিয়ে check করা হবে বর্তমান Mapping value আগে থেকেই `uniqueMapping`-এর মধ্যে আছে কি না।

// `found = 0` মানে:

// এখনো পাওয়া যায়নি।

// ```c
// for (int j = 0; j < uniqueSize; j++)
// ```

// ব্যাখ্যা:
// বর্তমান Mapping value আগে থেকেই `uniqueMapping` array-তে আছে কি না তা খুঁজে দেখার জন্য আরেকটি `for` loop ব্যবহার করা হয়েছে।

// এটি হলো একটি nested loop, অর্থাৎ একটি loop-এর ভিতরে আরেকটি loop।

// ```c
// {
// ```

// ব্যাখ্যা:
// Inner `for` loop-এর body শুরু হয়েছে।

// ```c
// if (uniqueMapping[j] == mapping[i])
// ```

// ব্যাখ্যা:
// এখানে বর্তমান Mapping value এবং `uniqueMapping`-এর আগের value compare করা হচ্ছে।

// যদি দুইটি value একই হয়, তাহলে বুঝতে হবে বর্তমান value আগে থেকেই আছে।

// ```c
// {
// ```

// ব্যাখ্যা:
// `if` condition সত্য হলে এই block execute হবে।

// ```c
// found = 1;
// ```

// ব্যাখ্যা:
// যদি একই value পাওয়া যায়, তাহলে `found`-কে `1` করা হচ্ছে।

// এখানে:

// 0 = পাওয়া যায়নি

// 1 = পাওয়া গেছে

// ```c
// break;
// ```

// ব্যাখ্যা:
// একই value পাওয়া গেলে আর search করার প্রয়োজন নেই।
// তাই `break` দিয়ে inner loop বন্ধ করা হচ্ছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// `if` block শেষ হয়েছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// Inner `for` loop শেষ হয়েছে।

// ```c
// if (found == 0)
// ```

// ব্যাখ্যা:
// এখানে পরীক্ষা করা হচ্ছে বর্তমান Mapping value আগে পাওয়া গেছে কি না।

// যদি:

// found == 0

// হয়, তাহলে value আগে পাওয়া যায়নি।
// অর্থাৎ এটি একটি নতুন/unique value।

// ```c
// {
// ```

// ব্যাখ্যা:
// নতুন value হলে এই block execute হবে।

// ```c
// uniqueMapping[uniqueSize] = mapping[i];
// ```

// ব্যাখ্যা:
// নতুন পাওয়া Mapping value-টি `uniqueMapping` array-তে রাখা হচ্ছে।

// যেমন:

// mapping[i] = 'c'

// এবং:

// uniqueSize = 2

// তাহলে:

// uniqueMapping[2] = 'c'

// ```c
// uniqueSize++;
// ```

// ব্যাখ্যা:
// নতুন একটি unique value যোগ হয়েছে।
// তাই `uniqueSize` 1 বাড়ানো হচ্ছে।

// যেমন:

// uniqueSize = 2

// এরপর:

// uniqueSize = 3

// ```c
// }
// ```

// ব্যাখ্যা:
// `if (found == 0)` block শেষ হয়েছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// Unique Mapping তৈরি করার outer `for` loop শেষ হয়েছে।

// ```c
// /* Onto Check */
// ```

// ব্যাখ্যা:
// এটি একটি comment।
// এখন program পরীক্ষা করবে function-টি Onto কি না।

// ```c
// int onto = 1;
// ```

// ব্যাখ্যা:
// শুরুতে ধরে নেওয়া হচ্ছে যে function-টি Onto।

// এখানে:

// onto = 1 → Onto / Yes

// পরে যদি কোনো Codomain element Mapping-এ পাওয়া না যায়, তাহলে `onto = 0` করা হবে।

// ```c
// for (int i = 0; i < m; i++)
// ```

// ব্যাখ্যা:
// Codomain-এর প্রতিটি element একে একে পরীক্ষা করার জন্য loop চালানো হয়েছে।

// যদি:

// Codomain = {a, b, c}

// তাহলে প্রথমে `a`, তারপর `b`, তারপর `c` check হবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// Onto checking loop-এর body শুরু হয়েছে।

// ```c
// int found = 0;
// ```

// ব্যাখ্যা:
// বর্তমান Codomain element Mapping-এর মধ্যে পাওয়া গেছে কি না তা রাখার জন্য `found` variable নেওয়া হয়েছে।

// শুরুতে:

// found = 0

// অর্থাৎ এখনো পাওয়া যায়নি।

// ```c
// for (int j = 0; j < uniqueSize; j++)
// ```

// ব্যাখ্যা:
// বর্তমান Codomain element-টি `uniqueMapping` array-এর মধ্যে আছে কি না তা খোঁজা হচ্ছে।

// অর্থাৎ Codomain-এর একটি value নিয়ে Mapping-এর সব unique value-এর সাথে compare করা হবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// Inner loop-এর body শুরু হয়েছে।

// ```c
// if (codomain[i] == uniqueMapping[j])
// ```

// ব্যাখ্যা:
// এখানে Codomain-এর বর্তমান element এবং Unique Mapping-এর element compare করা হচ্ছে।

// যদি দুইটি একই হয়, তাহলে বুঝতে হবে Codomain-এর element Mapping-এর মধ্যে আছে।

// ```c
// {
// ```

// ব্যাখ্যা:
// দুইটি value একই হলে এই `if` block execute হবে।

// ```c
// found = 1;
// ```

// ব্যাখ্যা:
// Codomain-এর element Mapping-এর মধ্যে পাওয়া গেছে।
// তাই:

// found = 1

// ```c
// break;
// ```

// ব্যাখ্যা:
// Element পাওয়া যাওয়ার পর আর search করার দরকার নেই।
// তাই inner loop বন্ধ করা হচ্ছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// `if` block শেষ হয়েছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// Inner `for` loop শেষ হয়েছে।

// ```c
// if (found == 0)
// ```

// ব্যাখ্যা:
// এখন পরীক্ষা করা হচ্ছে Codomain-এর বর্তমান element Mapping-এর মধ্যে পাওয়া গেছে কি না।

// যদি:

// found == 0

// হয়, তাহলে element পাওয়া যায়নি।

// ```c
// {
// ```

// ব্যাখ্যা:
// Element পাওয়া না গেলে এই block execute হবে।

// ```c
// onto = 0;
// ```

// ব্যাখ্যা:
// যেহেতু Codomain-এর একটি element Mapping-এ পাওয়া যায়নি, তাই function আর Onto নয়।

// তাই:

// onto = 0

// ```c
// break;
// ```

// ব্যাখ্যা:
// একটি Codomain element-ই যদি Mapping-এ না থাকে, তাহলে আর অন্যগুলো check করার প্রয়োজন নেই।

// তাই loop বন্ধ করা হচ্ছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// `if (found == 0)` block শেষ হয়েছে।

// ```c
// }
// ```

// ব্যাখ্যা:
// Onto check করার outer `for` loop শেষ হয়েছে।

// ```c
// /* Result */
// ```

// ব্যাখ্যা:
// এটি একটি comment।
// এখন final result screen-এ দেখানো হবে।

// ```c
// if (onto)
// ```

// ব্যাখ্যা:
// এখানে পরীক্ষা করা হচ্ছে `onto`-এর value 1 কি না।

// যদি `onto = 1` হয়, তাহলে function Onto।

// ```c
// {
// ```

// ব্যাখ্যা:
// `onto` সত্য হলে এই block execute হবে।

// ```c
// printf("Yes");
// ```

// ব্যাখ্যা:
// Function Onto হলে screen-এ:

// Yes

// print করবে।

// ```c
// }
// ```

// ব্যাখ্যা:
// `if` block শেষ হয়েছে।

// ```c
// else
// ```

// ব্যাখ্যা:
// যদি `onto` সত্য না হয় অর্থাৎ `onto = 0` হয়, তাহলে `else` block execute হবে।

// ```c
// {
// ```

// ব্যাখ্যা:
// `else` block শুরু হয়েছে।

// ```c
// printf("No");
// ```

// ব্যাখ্যা:
// Function Onto না হলে screen-এ:

// No

// print করবে।

// ```c
// }
// ```

// ব্যাখ্যা:
// `else` block শেষ হয়েছে।

// ```c
// fclose(fin);
// ```

// ব্যাখ্যা:
// `input4.txt` file-এর সাথে কাজ শেষ হয়েছে।
// তাই `fclose()` function ব্যবহার করে file-টি বন্ধ করা হচ্ছে।

// যে file `fopen()` দিয়ে open করা হয়, কাজ শেষে সেটি `fclose()` দিয়ে close করা ভালো practice।

// ```c
// return 0;
// ```

// ব্যাখ্যা:
// এটি `main()` function থেকে `0` return করছে।
// `return 0` সাধারণত বোঝায় যে program সফলভাবে সম্পন্ন হয়েছে এবং কোনো error হয়নি।

// ```c
// }
// ```

// ব্যাখ্যা:
// এটি `main()` function-এর শেষ curly bracket।
// এর মাধ্যমে পুরো program শেষ হয়েছে।

// ````

// ### পুরো Code-এর মূল ধারণা

// **এই program-এর মূল কাজ হলো একটি function Onto কি না তা পরীক্ষা করা।**

// ```text
// Domain
//    ↓
// Codomain
//    ↓
// Mapping
//    ↓
// Duplicate Mapping বাদ
//    ↓
// প্রতিটি Codomain element খোঁজা
//    ↓
// সব পাওয়া গেলে → Yes
// কোনো একটি না পাওয়া গেলে → No
// ````

// এখানে সবচেয়ে গুরুত্বপূর্ণ অংশ হলো:

// **Onto function হওয়ার জন্য Codomain-এর প্রতিটি element-কে Mapping-এর মধ্যে অন্তত একবার পাওয়া যেতে হবে।**























