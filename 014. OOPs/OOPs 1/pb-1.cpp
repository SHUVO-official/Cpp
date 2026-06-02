#include <bits/stdc++.h>
using namespace std;
    class Book
        {
            public:
            char name;
            int price;
            int noofpages;


            int countbooks(int p)
                {
                    if(price<p) return 1;
                    else return 0;
                }
            bool isbookpresent(char book)
                {
                    if(name == book) return true;
                    else return false;
                }    
        };
    int main()
        {
            Book harrypotter;
            harrypotter.name='h';
            harrypotter.price=1000;
            harrypotter.noofpages=500;
   
            cout<<harrypotter.countbooks(2000)<<endl;
            cout<<harrypotter.isbookpresent('B')<<endl;

        }