#include <iostream>
using namespace std;
    int main()
        {
            int x[]={23,45,23,56,34,67,4,45,56,78,4,2,7};
            int n=sizeof(x)/sizeof(x[3]);
                                            //এখানে x[3]কে বাদে এই array er যেকোনো index-কে বসাতে পারতাম/অথবা এখানে 4 দ্বারা ভাগ দিলে মান পেতাম কারন array মুলত পাশাপাশি 4 Byte জায়গা দখল করে।

            // int n=sizeof(x)/4;

            cout<<n;
        }