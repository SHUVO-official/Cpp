//Ques: given an array of size n+1 consisting of integers from 1 to n. 
//One of the element is duplicate in the array. Find that duplicate element.

#include <bits/stdc++.h>
using namespace std;

int main()
{
                    //Method : 1 (Brute force)
    //Nested loop দিয়ে প্রতিটি element অন্যগুলোর সাথে মিলিয়ে দেখা হবে।
    //যদি মিল পাওয়া যায়, তখনই duplicate print করে loop break করা হবে।

    // vector<int> v = {6,3,2,4,1,7,1,5};
    // bool flag = false;

    // for(int i = 0; i < v.size()-1; i++)
    // {
    //     for(int j = i+1; j < v.size(); j++)
    //     {
    //         if(v[i] == v[j]) {
    //             cout << v[i];   // duplicate print হবে
    //             flag = true;    // flag true করে outer loop break
    //             break;
    //         }
    //     }
    //     if(flag == true) break;
    // }
    //Observation:
    //1)only space efficient
    //2)time consuming not efficient


                    
    
                        //method 2:
    //Method : 2 (Time efficient but not space efficient)
    //একটা extra vector ব্যবহার করে frequency count রাখা হবে।
    //যেই element আবার আসবে, সেটাই duplicate।

    // vector<int> v = {6,3,2,4,1,7,1,5};
    // int n = v.size();
    
    // // frequency রাখার জন্য extra vector
    // vector<int> freq(n+1, 0);

    // for(int i=0; i<n; i++)
    // {
    //     freq[v[i]]++;   // element count বাড়ানো হলো
    //     if(freq[v[i]] > 1) {   // যদি count > 1 হয়, duplicate পাওয়া গেছে
    //         cout << v[i];
    //         break;
    //     }
    // }
                    //Observation:1)time efficiant but space consuming




                //Method : 3 (Time & Space efficient using formula)
    //1 থেকে n পর্যন্ত যোগফল বের করে array এর যোগফল থেকে বাদ দিলে duplicate পাওয়া যাবে।

    vector<int> v = {6,3,2,4,1,7,1,5};
    int n = v.size() - 1; // কারণ array তে n+1 element আছে

    // 1 থেকে n পর্যন্ত যোগফল
    int expectedSum = n * (n + 1) / 2;

    // array এর যোগফল
    int actualSum = accumulate(v.begin(), v.end(), 0);

    // duplicate বের করা
    int duplicate = actualSum - expectedSum;

    cout << duplicate;




}
