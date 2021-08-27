#include <iostream>
using namespace std;

class Account
{
public:
    string account_holder_name,account_type;
    int customer_number;
    long long int account_number;
    float balance;

    Account()
    {
        balance = 0;
    }


    void input()
    {
        cout<<"\nEnter Account Number: ";
        cin>>account_number;

        cout<<"\nEnter Account Type: ";
        cin>>account_type;

        cout<<"\nEnter Account Holder Name: ";
        cin>>account_holder_name;

        cout<<"\nEnter Customer Number:";
        cin>>customer_number;

    }

    void display()
    {
        cout<<"\n-----------------------------------------------------\n";
        cout<<"Account Holder Name: "<<account_holder_name<<endl;
        cout<<"Account Type: "<<account_type<<endl;
        cout<<"Customer Number: "<<customer_number<<endl;
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"-----------------------------------------------------";


    }

    void deposit()
    {
        int amount;
        cout<<"Enter Amount to be deposited: ";
        cin>>amount;
        balance+=amount;
        cout<<"\nAmount Deposited......"<<endl<<"Current Balance: "<<balance<<endl;

        display();
    }

    void withdraw()
    {
        int amount;
        cout<<"Enter money to be withdrawn: ";
        cin>>amount;
        if(balance<amount)
        {
            cout<<"You dont have enough balance!";
        }
        else
        {
            balance-=amount;
            cout<<"Money Withdrawn......."<<endl<<"Current Balance: "<<balance<<endl;
        }

        display();
    }




};

int main()
{
    char choice;
    Account acc;
    acc.input();
    cout<<"Enter You Choice: "<<endl<<"#1 DEPOSIT"<<endl<<"#2 WITHDRAW"<<endl<<"#3 END-PROCESS"<<endl;
    cin>>choice;

    switch(choice)
    {
    case '1':
        acc.deposit();
        break;
    case '2':
        acc.withdraw();
        break;
    case '3':
        cout<<"Process Exited.....";
        break;
    default:
        cout<<"Invalid option...Process Exiting ";
    }


}
