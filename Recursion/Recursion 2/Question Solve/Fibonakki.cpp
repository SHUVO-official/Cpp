#include <bits/stdc++.h>
using namespace std; 
int fibo(int n)
{
    // Base case:
    // যদি n == 1 বা n == 2 হয়, তাহলে Fibonacci মান হবে 1
    // কারণ F(1) = 1, F(2) = 1
    if(n==1 || n==2) return 1;

    // Recursive case:
    // Fibonacci নিয়ম: F(n) = F(n-1) + F(n-2)
    // তাই fibo(n) কল করলে আগের দুইটা সংখ্যা যোগ করে ফলাফল পাওয়া যাবে
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cin >> n;    
    cout << fibo(n);
}
