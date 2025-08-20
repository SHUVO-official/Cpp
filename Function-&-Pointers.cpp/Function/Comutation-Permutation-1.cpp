#include <iostream>
using namespace std;
int main()
    {
        int n,r;
        cin >> n >> r;

        int nfact=1;
        for(int i=1;i<=n;i++)
            nfact*=i;

        int rfact=1;
        for(int i=1;i<=r;i++)
            rfact*=i;

        int nrfact=1;
        for(int i=1;i<=n-r;i++)
            nrfact*=i;
            
        int nCr=1;
        nCr=nfact/(rfact*nrfact);
        cout<<"Commutation:nCr =  "<<nCr<<endl;
        
        int nPr=1;
        nPr=nfact/(nrfact);
        cout<<"Permutation:nPr =  "<<nPr;
    }