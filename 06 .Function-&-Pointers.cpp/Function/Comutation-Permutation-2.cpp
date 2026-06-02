#include <iostream>
using namespace std;
    int fact(int x)
        {
            int fact=1;
            for(int i=2;i<=x;i++)
                fact*=i;

            return fact;    
        }

    int main()
        {
            int n,r;
            cin >> n >>r;

            int nfact=fact(n);
            int rfact=fact(r);
            int nrfact=fact(n-r);

            int nCr=nfact/(rfact*nrfact);
            cout<<"Combination:nCr =  "<<nCr<<endl;

            int nPr=nfact/(nrfact);
            cout<<"Permutaion:nPr =  "<<nPr;

        }