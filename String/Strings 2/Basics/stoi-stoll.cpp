#include <bits/stdc++.h>   
#include <sstream>         // stringstream ব্যবহার করার জন্য আলাদা হেডার ফাইল
using namespace std;       

int main()
{
    //to_string() = integer to string
    int q=234234;
    string c=to_string(q);
    cout<<q<<endl;

    //stoi() = string to integer
    string str="12345678";
    int x=stoi(str);
    cout<<x<<endl;

    //stoll() = string to long long integer
    string a="12345678974234234";
    long long y=stoll(a);
    cout<<y;
}