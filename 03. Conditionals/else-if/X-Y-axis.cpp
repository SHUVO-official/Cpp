#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout<<"Enter two axis:";
    cin >> x >> y;  // সঠিক ইনপুট সিনট্যাক্স

    if (x == 0 && y == 0) {
        cout << "The point is on the origin";
    }
    else if (x == 0) {
        cout << "The point is on y-axis";
    }
    else if (y == 0) {
        cout << "The point is on x-axis";
    }
    else {
        cout << "The point is not on any axis";  // টাইপো ঠিক করা হয়েছে
    }
    return 0;
}