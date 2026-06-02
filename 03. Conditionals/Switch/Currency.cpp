#include<iostream>
using namespace std;
    
int main() 
    {
        //X=amount   n1=1taka n500=500taka
        int x;
        int n1,n2,n5,n10,n20,n50,n100,n200,n500,n1000;
        n1=n2=n5=n10=n20=n50=n100=n200=n500=n1000= 0;
        cout<<"Enter the amount:";
        cin>>x;
        switch(x>=1000)
        {
            case 1:
            n1000+=x/1000;
            x-=n1000*1000;
            break;
        }
         switch(x>=500)
        {
            case 1:
            n500+=x/500;
            x-=n500*500;
            break;
        }
         switch(x>=200)
        {
            case 1:
            n200+=x/200;
            x-=n200*200;
            break;
        }
         switch(x>=1000)
        {
            case 1:
            n100+=x/100;
            x-=n100*100;
            break;
        }
         switch(x>=50)
        {
            case 1:
            n50+=x/50;
            x-=n50*50;
            break;
        }
         switch(x>=20)
        {
            case 1:
            n20+=x/20;
            x-=n20*20;
            break;
        }
         switch(x>=10)
        {
            case 1:
            n10+=x/10;
            x-=n10*10;
            break;
        }
         switch(x>=5)
        {
            case 1:
            n5+=x/5;
            x-=n5*5;
            break;
        }
         switch(x>=2)
        {
            case 1:
            n2+=x/2;
            x-=n2*2;
            break;
        }
         switch(x>=1)
        {
            case 1:
            n1+=x/1;
            x-=n1*1;
            break;
        }
        cout<<"Notes of 1000 are"<<n1000<<endl;
        cout<<"Notes of 500 are"<<n500<<endl;
        cout<<"Notes of 200 are"<<n200<<endl;
        cout<<"Notes of 100 are"<<n100<<endl;
        cout<<"Notes of 50 are"<<n50<<endl;
        cout<<"Notes of 20 are"<<n20<<endl;
        cout<<"Notes of 10 are"<<n10<<endl;
        cout<<"Notes of 5 are"<<n5<<endl;
        cout<<"Notes of 2 are"<<n2<<endl;
        cout<<"Notes of 1 are"<<n1;


    }