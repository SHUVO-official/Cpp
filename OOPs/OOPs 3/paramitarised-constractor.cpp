#include <bits/stdc++.h>
using namespace std;

class Bike {
public:
    int tyresize, enginesize;     // প্রতিটি object এর নিজস্ব data member
    static int totalBikes;        // static member: সব object এর জন্য একটাই থাকবে

    void setData(int t, int e) {
        tyresize = t;
        enginesize = e;
        totalBikes++;   // নতুন object data সেট করলে count বাড়বে
    }

    void showData() {
        cout << "Tyre: " << tyresize << ", Engine: " << enginesize << endl;
    }

    // Static function: object ছাড়াই call করা যায়
    static void showTotalBikes() {
        cout << "Total bikes: " << totalBikes << endl;
    }
};

// Static member initialize করতে হয় class এর বাইরে
int Bike::totalBikes = 0;

int main() {
    Bike tvs, honda, royalEnfield;

    tvs.setData(23, 100);          // totalBikes = 1
    honda.setData(50, 150);        // totalBikes = 2
    royalEnfield.setData(13, 120); // totalBikes = 3

    tvs.showData();
    honda.showData();
    royalEnfield.showData();

    // Static function দিয়ে মোট object সংখ্যা দেখা যাবে
    Bike::showTotalBikes();
}
