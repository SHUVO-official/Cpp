// একটি পূর্ণসংখ্যার array-এর permutation হলো সেই array-এর উপাদানগুলোকে একটি নির্দিষ্ট ক্রমে সাজানো।
// উদাহরণস্বরূপ, যদি arr = [1,2,3] হয়, তাহলে এর সব permutation হবে:
// [1,2,3]
// [1,3,2]
// [2,1,3]
// [2,3,1]
// [3,1,2]
// [3,2,1]

// Next Permutation মানে হলো array-এর পরবর্তী lexicographically বড় permutation।
// অর্থাৎ, যদি সব permutation গুলো lexicographical order (dictionary order) অনুযায়ী সাজানো হয়, তাহলে বর্তমান permutation-এর পরের permutation-টাই হবে next permutation।

// যদি এমন কোনো বড় permutation না থাকে (মানে array পুরোটা descending order এ থাকে), তখন array-টাকে ascending order এ সাজাতে হবে (সবচেয়ে ছোট permutation)।

// ✨ উদাহরণ
// Input: nums = [1,2,3]  
// Output: [1,3,2]

// Input: nums = [3,2,1]  
// Output: [1,2,3]

// Input: nums = [1,1,5]  
// Output: [1,5,1]
                        // <code>

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
    void rev(vector<int>& v)
        {
            //pivot
            int n=v.size();
            int idx=-1;
            for(int i=n-2;i>=0;i--)
                {
                    if(v[i]<v[i+1])    
                        {
                            idx=i;
                            break;
                        }
                    
                }
            //jodi pivot nai
            if(idx==-1)
                {
                    reverse(v.begin(),v.end());
                    return;
                }  
            //pivot r pivot er samne jeta 1st boro oitar swap
            for(int i=n-1;i>idx;i--)
                {
                    if(v[idx]<v[i]) 
                        {
                            swap(v[idx],v[i]);
                            break;
                        }
                }
            //erpor pivot er samne ja ase sob reverse
            reverse(v.begin()+idx+1,v.end());
        }
    int main()
        {
            vector<int> v={1,2,4};

            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            rev(v);
            for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }

                
        }