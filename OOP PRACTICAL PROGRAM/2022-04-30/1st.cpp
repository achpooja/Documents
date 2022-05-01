#include<iostream>
using namespace std;
class Bank_Account
{
    private:
    char name[100];
    long int acc,bal;
    public:
    void OpenAcount()
    {
        cout<<"Enter the account number:"<<endl;
        cin>>acc;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the balance:"<<endl;
        cin>>bal;

    }
    void DepositMoney()
    {
        long int amount;
        cout<<"Enter the ammount you want to deposite:"<<endl;
        cin>>amount;
        bal+=amount;
    }
    void WithdrawMoney()
    {
        long int amount;
        cout<<"Enter the amount you want to withdraw:"<<endl;
        cin>>amount;

    }
    void displayAccountInformation()
    {
        cout<<"Name:"<<name<<endl
            <<"Account no. :"<<acc<<endl
            <<"Balance:"<<bal<<endl;

    }
    
    int Search(int a)
    {
        if(acc==a)
        {
            displayAccountInformation();
            return(1);
        }
        return (0);
    }

};
int main()
{
    Bank_Account B[10];
    int choice ,a,found=0;
    while(1)
    {
        cout<<"1.Open an account \n2.search the record \n3.Deposite money \n4.Withdraw money \n5.Display account information \n6.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                  for(int i=1;i<=2;i++)
                  {
                      B[i].OpenAcount();
                  }
                  break;

            case 2:
            cout<<"Account number:";
            cin>>a;
            for(int i=1;i<=2;i++)
                {
                 found=B[i].Search(a);
                 if(found)
                 break;
                }      

            case 3:
            
                 for(int i=1;i<=2;i++)
                 {
                     B[i].DepositMoney();
                 } 
                 break;   

            case 4:
                  for(int i=1;i<=2;i++)
                  {
                      B[i].WithdrawMoney();
                  }      
                  break;

            case 5:
                 for(int i=1;i<=2;i++)
                 {
                     B[i].displayAccountInformation();
                 }  
                 break;    
            case 6:
            exit(0);



        }

    }
    return 0;
}