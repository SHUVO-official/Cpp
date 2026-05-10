#include<iostream>
using namespace std;
    
int main() 
    { 
        int x;
    cout<<"Enter day number:";
    cin>>x;
    switch(x)
    {
        case 1://Jan
        cout<<"31";
        break;
         case 2://Feb
        cout<<"28";
        break;
         case 3://Mar
        cout<<"31";
        break; 
        case 4://Apr
        cout<<"30";
        break;
        case 5://May
        cout<<"31";
        break;
         case 6://Jun
        cout<<"30";
        break;
         case 7://Jul
        cout<<"31";
        break;
         case 8://Aug
        cout<<"30";
        break;
         case 9://Sep
        cout<<"31";
        break; 
        case 10://Oct
        cout<<"30";

         case 11://Nov
        cout<<"31";
        break; 
        case 12://Dec
        cout<<"30";
        break;
        default:
        cout<<"Invalid";
    }

        
    }