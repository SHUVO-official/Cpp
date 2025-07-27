#include <iostream>
using namespace std;

int main(){
//continue=next all line skip kooro
        for (int i = 1; i <= 100; i++)
        {
            if (i % 2 == 0)
                continue;
            cout << i << endl;
        }
        return 0;
    }