#include <bits/stdc++.h> 
using namespace std;
class Bike {
public:
    int tyresize, enginesize;
    // Constructor: object তৈরি হলে স্বয়ংক্রিয়ভাবে কল হয়
    Bike(int tyresize, int enginesize) {
        this->tyresize = tyresize;     // parameter এর মান object এর ভেতরে assign করা হচ্ছে
        this->enginesize = enginesize; // একইভাবে enginesize assign করা হচ্ছে
        cout << "Constructor call lagse!! " << endl; // constructor কল হয়েছে সেটা দেখানোর জন্য print
    }

    // Destructor: object destroy হলে স্বয়ংক্রিয়ভাবে কল হয়
    ~Bike() {
        cout << "Destructor call!!!" << endl; // destructor কল হয়েছে সেটা দেখানোর জন্য print
    }
};

int main() {
    // তিনটা object তৈরি করা হচ্ছে, constructor স্বয়ংক্রিয়ভাবে কল হবে
    Bike tvs(23, 100);          // tvs এর জন্য tyresize=23, enginesize=100
    Bike honda(50, 150);        // honda এর জন্য tyresize=50, enginesize=150
    Bike royalEnfield(13, 120); // royalEnfield এর জন্য tyresize=13, enginesize=120

    // প্রতিটি object এর মান print করা হচ্ছে
    cout << tvs.tyresize << " " << tvs.enginesize << endl;
    cout << honda.tyresize << " " << honda.enginesize << endl;
    cout << royalEnfield.tyresize << " " << royalEnfield.enginesize << endl;

    // main শেষ হলে সব object scope এর বাইরে চলে যাবে,
    // তখন destructor স্বয়ংক্রিয়ভাবে কল হবে প্রতিটি object এর জন্য
}
