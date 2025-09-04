#include <iostream>
using namespace std;
    int main()
        {
            string one[8]=
                {
                    "   *  ",
                    "  **  ",
                    " ***  ",
                    "   *  ",
                    "   *  ",
                    "   *  ",
                    "   *  ",
                    " **** ",
                };
            string zero[8]=
                {
                    " ***** ",
                    "*     *",
                    "*     *",
                    "*     *",
                    "*     *",
                    "*     *",
                    "*     *",
                    " ***** ", 
                };
            for(int i=0;i<=7;i++)
                cout<<one[i]<<"  "<<zero[i]<<"  "<<zero[i]<<endl;       

        }