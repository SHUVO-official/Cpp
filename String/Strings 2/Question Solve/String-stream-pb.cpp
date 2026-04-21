//Ques: Given asentence,split every single word of te sentence and print in a new line.

#include <bits/stdc++.h>   
#include <sstream>         // stringstream ব্যবহার করার জন্য আলাদা হেডার ফাইল
using namespace std;       

int main()
{
    string str="Shuvo is    a   tuition teacher.";  

    stringstream ss(str);  

    string temp;  
    // প্রতিবার লুপে একেকটা শব্দ রাখার জন্য temp নামের ভ্যারিয়েবল

    while(ss >> temp)      
    {
        cout << temp << endl;  
    }
}