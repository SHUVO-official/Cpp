#include <bits/stdc++.h>
using namespace std;

    class BankAccount
    {
        public:

        // Data Members
        string depositorName;
        string accountNumber;
        string accountType;
        string pin;

        double balance;
        double totalInterest;

        vector<string> transactions;

        // Constructor
        BankAccount(string name, string accNo, string type, string p, double bal)
        {
            depositorName = name;
            accountNumber = accNo;
            accountType = type;
            pin = p;
            balance = bal;
            totalInterest = 0;
        }

        // Deposit Money
        void deposit(double amount)
        {
            if(amount < 500 || amount > 50000)
            {
                cout<<"Invalid Deposit Amount!"<<endl;
                return;
            }

            balance += amount;

            transactions.push_back("Deposited: " + to_string(amount));

            cout<<"Deposit Successful!"<<endl;
        }

        // Withdraw Money
        void withdraw(double amount)
        {
            if(amount <= 0)
            {
                cout<<"Invalid Amount!"<<endl;
            }
            else if(amount > balance)
            {
                cout<<"Insufficient Balance!"<<endl;
            }
            else
            {
                balance -= amount;

                transactions.push_back("Withdrawn: " + to_string(amount));

                cout<<"Withdrawal Successful!"<<endl;
            }
        }

        // Transfer Money
        void transfer(BankAccount &receiver, double amount)
        {
            if(amount <= 0)
            {
                cout<<"Invalid Transfer Amount!"<<endl;
            }
            else if(amount > balance)
            {
                cout<<"Insufficient Balance!"<<endl;
            }
            else
            {
                balance -= amount;
                receiver.balance += amount;

                transactions.push_back("Transferred: " + to_string(amount));
                receiver.transactions.push_back("Received: " + to_string(amount));

                cout<<"Transfer Successful!"<<endl;
            }
        }

        // Check Balance
        void checkBalance()
        {
            cout<<"Current Balance: "<<balance<<endl;
        }

        // Display Account Information
        void display()
        {
            cout<<"\n------ Account Information ------"<<endl;

            cout<<"Depositor Name: "<<depositorName<<endl;
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Account Type: "<<accountType<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }

        // Transaction History
        void transactionHistory()
        {
            cout<<"\n------ Transaction History ------"<<endl;

            if(transactions.empty())
            {
                cout<<"No Transactions Found!"<<endl;
                return;
            }

            for(int i = 0; i < transactions.size(); i++)
            {
                cout<<i + 1<<". "<<transactions[i]<<endl;
            }
        }

        // Change PIN
        void changePIN(string oldPIN, string newPIN)
        {
            if(pin == oldPIN)
            {
                pin = newPIN;
                cout<<"PIN Changed Successfully!"<<endl;
            }
            else
            {
                cout<<"Incorrect Old PIN!"<<endl;
            }
        }

        // Add Interest
        void addInterest(double rate)
        {
            if(accountType != "Savings")
            {
                cout<<"Interest is only available for Savings Account!"<<endl;
                return;
            }

            double interest = balance * rate / 100;

            balance += interest;
            totalInterest += interest;

            transactions.push_back("Interest Added: " + to_string(interest));

            cout<<"Interest Added: "<<interest<<endl;
        }

        // Mini Statement
        void miniStatement()
        {
            cout<<"\n------ Mini Statement ------"<<endl;

            int start = max(0, (int)transactions.size() - 5);

            for(int i = start; i < transactions.size(); i++)
            {
                cout<<transactions[i]<<endl;
            }

            cout<<"Available Balance: "<<balance<<endl;
        }
    };

    class Bank
    {
        private:

        vector<BankAccount> accounts;

        public:

        // Find Account
        int findAccount(string accNo)
        {
            for(int i = 0; i < accounts.size(); i++)
            {
                if(accounts[i].accountNumber == accNo)
                {
                    return i;
                }
            }

            return -1;
        }

        // Create Account
        void createAccount()
        {
            string name, accNo, type, pin;
            double bal;

            cout<<"Enter Depositor Name: ";
            getline(cin, name);

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            if(findAccount(accNo) != -1)
            {
                cout<<"Account Already Exists!"<<endl;
                return;
            }

            cout<<"Enter Account Type (Savings/Current): ";
            getline(cin, type);

            if(type != "Savings" && type != "Current")
            {
                cout<<"Invalid Account Type!"<<endl;
                return;
            }

            cout<<"Create 4-Digit PIN: ";
            getline(cin, pin);

            if(pin.length() != 4 || !all_of(pin.begin(), pin.end(), ::isdigit))
            {
                cout<<"Invalid PIN! Enter 4 digits."<<endl;
                return;
            }

            cout<<"Enter Initial Balance: ";
            cin>>bal;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if(bal < 0)
            {
                cout<<"Invalid Initial Balance!"<<endl;
                return;
            }

            accounts.push_back(BankAccount(name, accNo, type, pin, bal));

            cout<<"Account Created Successfully!"<<endl;
        }

        // Deposit
        void depositMoney()
        {
            string accNo;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            double amount;

            cout<<"Enter Deposit Amount: ";
            cin>>amount;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            accounts[index].deposit(amount);
        }

        // Withdraw
        void withdrawMoney()
        {
            string accNo, pin;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[index].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            double amount;

            cout<<"Enter Withdrawal Amount: ";
            cin>>amount;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            accounts[index].withdraw(amount);
        }

        // Transfer
        void transferMoney()
        {
            string sender, receiver, pin;

            cout<<"Enter Sender Account Number: ";
            getline(cin, sender);

            int s = findAccount(sender);

            if(s == -1)
            {
                cout<<"Sender Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[s].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            cout<<"Enter Receiver Account Number: ";
            getline(cin, receiver);

            int r = findAccount(receiver);

            if(r == -1)
            {
                cout<<"Receiver Account Not Found!"<<endl;
                return;
            }

            if(s == r)
            {
                cout<<"Cannot Transfer to Same Account!"<<endl;
                return;
            }

            double amount;

            cout<<"Enter Transfer Amount: ";
            cin>>amount;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            accounts[s].transfer(accounts[r], amount);
        }

        // Check Balance
        void balanceInquiry()
        {
            string accNo, pin;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[index].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            accounts[index].checkBalance();
        }

        // Account Information
        void accountInformation()
        {
            string accNo;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            accounts[index].display();
        }

        // Transaction History
        void showTransactions()
        {
            string accNo, pin;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[index].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            accounts[index].transactionHistory();
        }

        // Change PIN
        void changeAccountPIN()
        {
            string accNo, oldPIN, newPIN;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter Old PIN: ";
            getline(cin, oldPIN);

            cout<<"Enter New PIN: ";
            getline(cin, newPIN);

            if(newPIN.length() != 4 || !all_of(newPIN.begin(), newPIN.end(), ::isdigit))
            {
                cout<<"Invalid New PIN!"<<endl;
                return;
            }

            accounts[index].changePIN(oldPIN, newPIN);
        }

        // Search Account
        void searchAccount()
        {
            string accNo;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
            }
            else
            {
                cout<<"Account Found!"<<endl;
                accounts[index].display();
            }
        }

        // Delete Account
        void deleteAccount()
        {
            string accNo, pin;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[index].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            if(accounts[index].balance != 0)
            {
                cout<<"Please Withdraw or Transfer Remaining Balance First!"<<endl;
                return;
            }

            accounts.erase(accounts.begin() + index);

            cout<<"Account Deleted Successfully!"<<endl;
        }

        // Add Savings Interest
        void calculateInterest()
        {
            string accNo, pin;
            double rate;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[index].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            cout<<"Enter Interest Rate (%): ";
            cin>>rate;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if(rate < 0)
            {
                cout<<"Invalid Interest Rate!"<<endl;
                return;
            }

            accounts[index].addInterest(rate);
        }

        // Mini Statement
        void showMiniStatement()
        {
            string accNo, pin;

            cout<<"Enter Account Number: ";
            getline(cin, accNo);

            int index = findAccount(accNo);

            if(index == -1)
            {
                cout<<"Account Not Found!"<<endl;
                return;
            }

            cout<<"Enter PIN: ";
            getline(cin, pin);

            if(accounts[index].pin != pin)
            {
                cout<<"Incorrect PIN!"<<endl;
                return;
            }

            accounts[index].miniStatement();
        }

        // Main Menu
        void menu()
        {
            int choice;

            do
            {
                cout<<"\n================================"<<endl;
                cout<<"       BANK MANAGEMENT SYSTEM"<<endl;
                cout<<"================================"<<endl;

                cout<<"1. Create New Account"<<endl;
                cout<<"2. Deposit Money"<<endl;
                cout<<"3. Withdraw Money"<<endl;
                cout<<"4. Transfer Money"<<endl;
                cout<<"5. Check Balance"<<endl;
                cout<<"6. Account Information"<<endl;
                cout<<"7. Transaction History"<<endl;
                cout<<"8. Change PIN"<<endl;
                cout<<"9. Search Account"<<endl;
                cout<<"10. Delete Account"<<endl;
                cout<<"11. Add Savings Interest"<<endl;
                cout<<"12. Mini Statement"<<endl;
                cout<<"0. Exit"<<endl;

                cout<<"================================"<<endl;
                cout<<"Enter Your Choice: ";
                cin>>choice;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                switch(choice)
                {
                    case 1:
                        createAccount();
                        break;

                    case 2:
                        depositMoney();
                        break;

                    case 3:
                        withdrawMoney();
                        break;

                    case 4:
                        transferMoney();
                        break;

                    case 5:
                        balanceInquiry();
                        break;

                    case 6:
                        accountInformation();
                        break;

                    case 7:
                        showTransactions();
                        break;

                    case 8:
                        changeAccountPIN();
                        break;

                    case 9:
                        searchAccount();
                        break;

                    case 10:
                        deleteAccount();
                        break;

                    case 11:
                        calculateInterest();
                        break;

                    case 12:
                        showMiniStatement();
                        break;

                    case 0:
                        cout<<"Thank You for Using Our Banking System!"<<endl;
                        break;

                    default:
                        cout<<"Invalid Choice! Try Again."<<endl;
                }

            }
            while(choice != 0);
        }
    };

    int main()
    {
        Bank bank;

        bank.menu();

        return 0;
    }
