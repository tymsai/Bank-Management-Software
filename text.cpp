
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount;
public:
    void open_account ();
    void deposite_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    cout<<"Enter your Full name :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your residential addess :: ";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you want to open savings (s) or current (c)";
    cin>>y;
    cout<<"Enter the amount of money to deposite in the account ::";
    cin>>balance;
    cout<<"Your account is created ";

}
void bank::deposite_money()
{
    int a ;
    cout<<"How much money do you want to deposit :: ";
    cin>>a;
    balance+=a;
    cout<<"Your net deposit amount is \n";
}
void bank::display_account()
{
    cout<<"Full name :: "<<name<<endl;
    cout<<"Residential address :: "<<add<<endl;
    cout<<"Account type :: "<<y<<endl;
    cout<<"Net amount in account :: "<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"Withdrew Process \n ::";
    cout<<"Enter the amount of money for withdrawl ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Withdrawing......"
    cout<<"Current net balance ::"<<balance;
}

int main()
{
    system("color 0a");
    string sec;
    string pass = "1234Abc*";
    cout<<"Enter the password to continue to account settings\n";
    getline(cin,sec);
    if(sec==pass)
    {
    int ch,x,n;
    bank obj;
    do
    {
    cout<<" 01) Open account \n";
    cout<<" 02) Deposite money \n";
    cout<<" 03) Withdeaw money \n";
    cout<<" 04) Display account\n";
    cout<<" 05) Exit\n";
    cout<<"Select the respective S.No. ";
    cin>>ch;

    switch(ch)
    {
        case 1:" 01) Open account \n";
        obj.open_account ();
        break;
        case 2:" 02) Deposite money \n";
        obj.deposite_money();
        break;
        case 3:" 03) Withdeaw money \n";
        obj.withdraw_money ();
        break;
        case 4:" 04) Display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< " Exit ";
            }
        default:
            cout<<" This is not exit please try again ";

    }
    cout<<"\n If you want to proceed in bank press :: Y\n";
    cout<<"\n If you want to Exit press :: N ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"  E X I T  ";
    }
    while (x=='y' || x=='Y');
    }
    else
    cout<<"Incorrect Password";

 getch();
 return 0;
}
