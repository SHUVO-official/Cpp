// #include <bits/stdc++.h>
// using namespace std;
//     int maze(int row,int col)
//         {
//             if(row<1 || col<1) return 0;
//             if(row==1 && col==1) return 1;
//             int rightways=maze(row,col-1);  //right
//             int downways=maze(row-1,col);   //down
//             return rightways+downways;
//         }
//     int main()
//         {
//             cout<<maze(3,3); 
//         }


#include <bits/stdc++.h>
using namespace std;
void maze(int row, int col, string path) {
    // invalid move হলে return (row বা col < 1 হলে grid এর বাইরে চলে গেছি)
    if(row < 1 || col < 1) return;
                            // base case: যখন (1,1) cell এ পৌঁছাই
                            // তখন path string print করে দিই (একটা complete path পাওয়া গেছে)
    if(row == 1 && col == 1) {
        cout << path << endl;
        return;
    }
                            // ডানে move করলে → col কমে যাবে
                            // path এ "R" যোগ হবে
    maze(row, col-1, path + "R");

                            // নিচে move করলে → row কমে যাবে
                            // path এ "D" যোগ হবে
    maze(row-1, col, path + "D");
}

int main() {
    // 3×3 grid এর জন্য সব path বের করা হবে
    // শুরুতে path string খালি ("")
    maze(3,3,"");
    return 0;
}

