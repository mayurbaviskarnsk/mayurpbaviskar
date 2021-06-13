#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
class bank
{
        char name[100],add[100],y;
        float balance;
    public :
        void Open_Account();
        void Deposite_Money();
        void Withdraw_Money();
        void Display_Account();
};
void bank :: Open_Account()
    {
        cout<<"****Fill The Following information to Create And Account\n";
        cout<<"enter your full name"<<endl;
        cin.ignore();
        cin.getline(name,100);
        cout<<"enter your address"<<endl;
        cin.ignore();
        cin.getline(add,100);
        cout<<"what type of account you want to open saving (s) current (c)"<<endl;
        cin>>y;
        cout<<"enter an amount you want to deposit"<<endl;
        cin>>balance;
        cout<<"your account is created successfully"<<endl;
    }
void bank :: Deposite_Money()
    {
        int a;
        cout<<"enter a amount you want to deposite"<<endl;
        cin>>a;
        balance+=a;
    }
void bank :: Withdraw_Money()
{
    float a;
    cout<<"enter a amount you want to withdraw"<<endl;
    cin>>a;
    balance-=a;
}
void bank :: Display_Account()
{
   cout<<"name ::"<<name<<endl;
   cout<<"add ::"<<add<<endl;
   cout<<"balance::"<<balance<<endl;
}
int main()
{
    int num=0,choice;
        bank obj;
        cout<<"************** WELCOME TO BANK *******************"<<endl;
        cout<<"enter your choice\n";
    while(num==0)
    {

        cout << "1) Create Account"<<endl;
        cout << "2) Deposite Money"<<endl;
        cout << "3) withdraw Money"<<endl;
        cout << "4) Display Account"<<endl;
        cout << "5) exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            obj.Open_Account();
            break;
        case 2:
            obj.Deposite_Money();
            break;
        case 3:
            obj.Withdraw_Money();
            break;
        case 4:
            obj.Display_Account();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"please enter a write choice\n";

        }

    }
        return 0;
}
