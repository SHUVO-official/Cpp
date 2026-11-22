#include <bits/stdc++.h>
using namespace std;

class BankAccount
    {
        public:

        // Data Members
        string depositorName;
        string accountNumber;
        double balance;

        BankAccount(string name, string accNo, double bal)
            {
                this->depositorName = name;
                this->accountNumber = accNo;
                this->balance = bal;
            }

        // Method to deposit money
        void deposit(double amount)
            {
                if(amount >= 500 && amount <= 50000)
                    {
                        balance = balance + amount;
                        cout<<"Deposit Successful!"<<endl;
                    }
                else
                    {
                        cout<<"Invalid Deposit Amount!"<<endl;
                    }
            }

        // Method to withdraw money
        void withdraw(double amount)
            {
                if(amount <= 0)
                {
                    cout<<"Invalid Withdrawal Amount!"<<endl;
                }
                else if(amount <= balance)
                {
                    balance = balance - amount;
                    cout<<"Withdrawal Successful!"<<endl;
                }
                else
                {
                    cout<<"Insufficient Balance!"<<endl;
                }
            }

        // Method to display account information
        void display()
            {
                cout<<"\n--- Account Information ---"<<endl;
                cout<<"Depositor Name: "<<depositorName<<endl;
                cout<<"Account Number: "<<accountNumber<<endl;
                cout<<"Current Balance: "<<balance<<endl;
            }
    };

int main()
    {
        string name, accNo;
        double bal;

        cout<<"Enter Depositor Name: ";
        getline(cin, name);

        cout<<"Enter Account Number: ";
        getline(cin, accNo);

        cout<<"Enter Initial Balance: ";
        cin>>bal;

        // Creating object
        BankAccount account(name, accNo, bal);

        // Deposit operation
        double depositAmount;

        cout<<"Enter Deposit Amount: ";
        cin>>depositAmount;

        account.deposit(depositAmount);

        // Withdraw operation
        double withdrawAmount;

        cout<<"Enter Withdrawal Amount: ";
        cin>>withdrawAmount;

        account.withdraw(withdrawAmount);
        account.display();
    }