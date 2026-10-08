#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");

    int n, m;
    vector<int> A, B;

    fin >> n;

    for(int i=0; i<n; i++)
    {
        int x;
        fin >> x;
        A.push_back(x);
    }

    fin >> m;

    for(int i=0; i<m; i++)
    {
        int x;
        fin >> x;
        B.push_back(x);
    }

    cout << "A x B = {";

    bool first = true;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!first)
                cout << "; ";

            cout << "(" << A[i] << ", " << B[j] << ")";
            first = false;
        }
    }

    cout << "}";

    fin.close();

    return 0;
}



























// #include <stdio.h>

// int main()
// {
//     FILE *fin = fopen("input.txt", "r");

//     int n, m;
//     int A[100], B[100];

//     fscanf(fin, "%d", &n);

//     for(int i=0; i<n; i++)
//     {
//         fscanf(fin, "%d", &A[i]);
//     }

//     fscanf(fin, "%d", &m);

//     for(int i=0; i<m; i++)
//     {
//         fscanf(fin, "%d", &B[i]);
//     }

//     printf("A x B = {");

//     int first = 1;

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(!first)
//                 printf("; ");

//             printf("(%d, %d)", A[i], B[j]);

//             first = 0;
//         }
//     }

//     printf("}");

//     fclose(fin);

//     return 0;
// }



























// #include <stdio.h>
// // printf(), fscanf(), fclose(), fopen() ইত্যাদি ব্যবহার করার জন্য stdio.h
// // header file include করা হয়েছে।

// int main()
// {
//     // Program execution এখান থেকে শুরু হবে।

//     FILE *fin = fopen("input.txt", "r");
//     // input.txt file-টি read ("r") mode-এ open করা হচ্ছে।
//     // fin হলো file pointer, যার মাধ্যমে file থেকে data নেওয়া হবে।

//     int n, m;
//     // n = প্রথম set A-এর element সংখ্যা
//     // m = দ্বিতীয় set B-এর element সংখ্যা

//     int A[100], B[100];
//     // A এবং B-এর element রাখার জন্য দুটি array তৈরি করা হয়েছে।
//     // সর্বোচ্চ 100টি element রাখা যাবে।

//     fscanf(fin, "%d", &n);
//     // input.txt থেকে প্রথম integer নিয়ে n-এর মধ্যে রাখা হচ্ছে।
//     // &n ব্যবহার করা হয়েছে কারণ fscanf() variable-এর address নেয়।

//     for(int i=0; i<n; i++)
//     {
//         // A set-এর প্রতিটি element input নেওয়ার জন্য loop।

//         fscanf(fin, "%d", &A[i]);
//         // input.txt থেকে একটি করে value নিয়ে A[i]-তে রাখা হচ্ছে।
//     }

//     fscanf(fin, "%d", &m);
//     // input.txt থেকে B set-এর element সংখ্যা নিয়ে m-এর মধ্যে রাখা হচ্ছে।

//     for(int i=0; i<m; i++)
//     {
//         // B set-এর প্রতিটি element input নেওয়ার জন্য loop।

//         fscanf(fin, "%d", &B[i]);
//         // input.txt থেকে একটি করে value নিয়ে B[i]-তে রাখা হচ্ছে।
//     }

//     printf("A x B = {");
//     // Cartesian Product-এর output-এর শুরুতে
//     // "A x B = {" print করা হচ্ছে।

//     int first = 1;
//     // প্রথম pair print হয়েছে কি না তা check করার জন্য first variable।
//     // 1 মানে এখনো প্রথম pair print হয়নি।

//     for(int i=0; i<n; i++)
//     {
//         // A set-এর প্রতিটি element-এর জন্য loop।

//         for(int j=0; j<m; j++)
//         {
//             // B set-এর প্রতিটি element-এর জন্য nested loop।
//             // অর্থাৎ A-এর একটি element-এর সাথে B-এর সব element pair হবে।

//             if(!first)
//                 printf("; ");
//             // প্রথম pair ছাড়া প্রতিটি pair-এর আগে "; " print হবে।
//             // !first মানে first যদি 0 হয়, তাহলে condition true হবে।

//             printf("(%d, %d)", A[i], B[j]);
//             // Cartesian Product-এর একটি ordered pair print করা হচ্ছে।
//             // যেমন: (7, 2), (7, 4), (7, 6)

//             first = 0;
//             // প্রথম pair print হয়ে গেছে।
//             // তাই first-এর value 0 করা হলো।
//         }
//     }

//     printf("}");
//     // Cartesian Product-এর শেষে "}" print করা হচ্ছে।

//     fclose(fin);
//     // input.txt file বন্ধ করা হচ্ছে।

//     return 0;
//     // Program successfully শেষ হয়েছে বোঝাতে 0 return করা হচ্ছে।
// }