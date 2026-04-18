// তোমাকে একটি m x n বাইনারি ম্যাট্রিক্স (grid) দেওয়া হয়েছে।
// একটি move মানে হলো যেকোনো একটি সারি (row) বা কলাম (column) বেছে নিয়ে সেই সারি বা কলামের প্রতিটি মান উল্টে দেওয়া (অর্থাৎ সবগুলো 0 কে 1 করা এবং সবগুলো 1 কে 0 করা)।
// প্রতিটি সারিকে একটি বাইনারি সংখ্যা হিসেবে ধরা হবে, এবং পুরো ম্যাট্রিক্সের score হবে সবগুলো সারির বাইনারি সংখ্যার যোগফল।
// তোমাকে এমনভাবে move করতে হবে যাতে সর্বোচ্চ সম্ভব score পাওয়া যায়।

// আউটপুট: সর্বোচ্চ score রিটার্ন করো।


#include <iostream>
#include <vector>
using namespace std;


    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size();          
        int col = grid[0].size();       

        // Step 1: প্রথম column সবগুলোকে 1 বানানো
        // কারণ binary number এর সবচেয়ে বাম দিকের digit (MSB) সবচেয়ে বড় value দেয়
        for(int i = 0; i < row; i++) {
            if(grid[i][0] == 0) {       // যদি প্রথম column এ 0 থাকে
                for(int j = 0; j < col; j++) {
                    if(grid[i][j]==0) grid[i][j]==1;    //flip 0 to 1 or 1 to 0      
                    else  grid[i][j]==0;   
                }
            }
        }

        // Step 2: প্রতিটি column চেক করা
        // যদি কোনো column এ 0 এর সংখ্যা > 1 এর সংখ্যা হয়, তাহলে flip করো
        for(int j = 0; j < col; j++) {
            int no0 = 0, no1 = 0;
            for(int i = 0; i < row; i++) {
                if(grid[i][j] == 0) no0++;
                else no1++;
            }
            if(no0 > no1) {             // বেশি 0 থাকলে column flip করো
                for(int i = 0; i < row; i++) {
                    if(grid[i][j]==0) grid[i][j]==1;        
                    else  grid[i][j]==0;
                }
            }
        }

        // Step 3: প্রতিটি row কে binary number হিসেবে convert করে যোগফল বের করা
        int sum = 0;
        for(int i = 0; i < row; i++) {
            int x = 1;                  // binary place value (1,2,4,8,...)
            for(int j = col - 1; j >= 0; j--) {
                sum += grid[i][j] * x;  // digit * place value
                x *= 2;                 // পরের place value (double হবে)
            }
        }
        return sum;                     // সর্বোচ্চ score return করো
    }

int main() {
    vector<vector<int>> grid = {
        {0,0,1,1},
        {1,0,1,0},
        {1,1,0,0}
    };

    int ans=matrixScore(grid);
    cout <<"The sum is: "<<ans<< endl; // Output দেখাবে
    return 0;
}
