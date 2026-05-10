#include <bits/stdc++.h>
using namespace std;

class Bike {
public:
    int tyresize;        // প্রতিটি object এর নিজস্ব টায়ার সাইজ
    int enginesize;      // প্রতিটি object এর নিজস্ব ইঞ্জিন সাইজ
    const string brand;  // const member → একবার initialize করলে পরে বদলানো যাবে না

    // Constructor with Initialization List
    // এখানে : tyresize(t), enginesize(e), brand(b) → সরাসরি member initialize হচ্ছে
    Bike(int t, int e, string b) 
        : tyresize(t), enginesize(e), brand(b)   // initialization list
    {
        // constructor body → এখানে চাইলে extra কাজ করা যায়
        cout << "Bike created: " << brand << endl;
    }

    void showData() {
        cout << "Brand: " << brand 
             << ", Tyre: " << tyresize 
             << ", Engine: " << enginesize << endl;
    }
};

int main() {
    // Object তৈরি করার সময় initialization list দিয়ে মান সেট হবে
    Bike tvs(23, 100, "TVS");             // tyresize=23, enginesize=100, brand="TVS"
    Bike honda(50, 150, "Honda");         // tyresize=50, enginesize=150, brand="Honda"
    Bike royalEnfield(13, 120, "RoyalEnfield"); // tyresize=13, enginesize=120, brand="RoyalEnfield"

    // Object এর data print করা হচ্ছে
    tvs.showData();
    honda.showData();
    royalEnfield.showData();
}
