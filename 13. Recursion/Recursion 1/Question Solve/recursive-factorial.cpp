#include <bits/stdc++.h>
using namespace std; 
// Recursive factorial function
int fact(int n)
{
    // base case: যখন n == 0 বা n == 1 হবে তখন factorial এর মান 1
    if(n==1 || n==0) return 1;
    // recursive case: প্রতিবার n * fact(n-1) কল করে factorial তৈরি হচ্ছে
    return n*fact(n-1);
                // Execution flow:
                // fact(5) → 5 * fact(4)
                // fact(4) → 4 * fact(3)
                // fact(3) → 3 * fact(2)
                // fact(2) → 2 * fact(1)
                // fact(1) → base case → 1
                // Multiply করলে: 5*4*3*2*1 = 120
    
}

int main()
{
    cout<<fact(5);
}
