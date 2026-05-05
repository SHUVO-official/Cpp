//Ques: Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion

#include <bits/stdc++.h> 
using namespace std; 
int sumOdd(int a, int b)
    {
        if (a > b) return 0;   // Base case: যখন a বড় হয়ে যাবে b এর থেকে, তখন recursion থেমে যাবে

        if (a % 2 != 0)
            return a + sumOdd(a + 1, b);  // a কে যোগ করে recursion চালাবে পরের সংখ্যায়
        else
            return sumOdd(a + 1, b);      // যদি a even হয়, তাহলে শুধু পরের সংখ্যায় যাবে
    }

int main()
{
    int a = 2, b = 10;
    cout << sumOdd(a, b);
}

