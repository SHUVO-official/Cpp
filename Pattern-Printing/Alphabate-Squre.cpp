/*Ques: Print the given pattern
                               ABCD
                               ABCD
                               ABCD
                               ABCD
*/

#include <iostream>
using namespace std;
    int main()
    {
       int n;
       cout<<"Enter the number: ";
       cin>>n;
       for (int i=1;i<=n;i++)
       {
        for(int j=1;j<=n;j++)
        cout<<(char)(j+64);//এটার মানে char man ashbe karon A এর ascii value 65
        cout<<endl;
       } 
    }
