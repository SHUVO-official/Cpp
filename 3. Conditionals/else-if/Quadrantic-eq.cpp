#include <iostream>
#include <math.h>
using namespace std;
    int main()
        {
            double a,b,c,x,x1,x2,D;
            cout<<"Enter the values of a,b,c: ";
            cin>>a>>b>>c;
            D=(pow(b,2)-(4*a*c));
            if(a==0) 
                {
                    cout<<"The eq is not a quadrantic eq.";
                    return 0;
                }
            if(D==0)
                {
                    //real & equal
                    x=(-b)/(2*a);
                    cout<<"The 2 real & equal roots are: "<<x<<endl;
                }
            else if(D>0)
                {
                    //real & distinct
                    x1=((-b)+sqrt(D))/(2*a);
                    x2=((-b)-sqrt(D))/(2*a);
                    cout<<"The 2 real & distinct roots are: "<<x1<<endl<<x2;
                }
            else
                {
                    //unreal & distinct
                    double real_part=(-b)/(2*a);
                    double unreal_part=(sqrt(-D))/(2*a);
                    cout<<"x1="<<real_part<<"+"<<unreal_part<<"i"<<endl;
                    cout<<"x2="<<real_part<<"-"<<unreal_part<<"i"<<endl;
                }            

        }