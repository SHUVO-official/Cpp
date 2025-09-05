#include <iostream>
using namespace std;
    int fact(int x)
        {
            int fact=1;
            for(int i=2;i<=x;i++)
                fact*=i;
            return fact;    
        }
      
    int combination(int n,int r)
        {
            int nCr=fact(n)/(fact(r)*fact(n-r));
            return nCr;
        }  
    
    int permutation(int n,int r)
        {
            int nPr=fact(n)/fact(n-r);
            return nPr;
        }    

    int main()
        {
            int n,r;
            cin >> n >> r;

            fact(n);
            fact(r);
            fact(n-r);

            int nCr=combination(n,r);
            cout<<"Combination: nCr= "<<nCr<<endl;

            int nPr=permutation(n,r);
            cout<<"Permutation: nPr= "<<nPr;
        }