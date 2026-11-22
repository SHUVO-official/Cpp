#include <bits/stdc++.h>
using namespace std;
    class BankAccount
        {
            public:
            string depositorname;
            string depositoraccount;
            double balance;
            BankAccount(string name,string accNo,double bal)
                {
                    this->depositorname=name;
                    this->depositoraccount=accNo;
                    this->balance=bal;
                }
            void deposit(double amount)
                {
                    if(amount>=500 && amount<=50000)
                        {
                            balance=balance+amount;
                            cout<<"------Deposit successfull------!!!"<<endl;
                        }
                    else cout<<"Invalid amount";    
                } 
            void withdraw(double amount)
                {
                    if(amount<=0) cout<<"Ivalid amount";
                    else if(amount<=balance) 
                        {
                            balance=balance-amount;
                            cout<<"------Withdraw successfull------"<<endl;
                        }
                    else cout<<"Insufficient balance";    
                }  
            void display()
                {
                    cout<<" <---***--- Account Information ---***---> "<<endl;
                    cout<<"Depositor Name: "<<depositorname<<endl;
                    cout<<"Account Number: "<<depositoraccount<<endl;
                    cout<<"Current Balance: "<<balance;
                }         
        };
    int main()
        {
            string name,accNo;
            double bal;

            cout<<"Enter Depositor Name: ";
            getline(cin,name);

            cout<<"Enter Account Number: ";
            getline(cin,accNo);

            cout<<"Enter Initial Balance: ";
            cin>>bal;

            BankAccount account(name,accNo,bal);

            double depositamount;
            cout<<"Enter deposit amount: ";
            cin>>depositamount;
            account.deposit(depositamount);

            double withdrawamount;
            cout<<"Enter withdraw amount: ";
            cin>>withdrawamount;
            account.withdraw(withdrawamount);

            account.display();

        }