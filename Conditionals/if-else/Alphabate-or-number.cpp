#include<iostream>
using namespace std;
    
int main() {
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
     int ascii=(int)ch;
     if((ascii>=65 && ascii<=90)  ||  (ascii>=97 && ascii<=122))
    {
        cout<<"The character is an alphabet.";

    }
    else {
        cout<<"The character is not an alphabet.";
    }

}