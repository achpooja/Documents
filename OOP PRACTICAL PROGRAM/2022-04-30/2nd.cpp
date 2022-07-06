/// BANK ACCOUNT PROGRAM
//OBJECT ORIENTED PROGRAM IN C++



#include<iostream>
using namespace std;
class Bank_Account
{
    private:
    char name[10];
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
        long int amount,account;
        char ch;
       
        cout<<"Do you want to deposite money "<<endl;
        cin>>ch;
        if(ch=='d' || ch=='D')
        {
        cout<<"Enter the ammount you want to deposite:"<<endl;
        cin>>amount;
        bal+=amount;
        
        }
        else
        {
            cout<<"Enter the valid choice"<<endl;
        }
         

    }
    void WithdrawMoney()
    {
        long int amount;
        char ch;
       

        cout<<"Do you want to withdraw money "<<endl;
        cin>>ch;
        if(ch=='w'||ch=='W')
        {
        cout<<"Enter the amount you want to withdraw:"<<endl;
        cin>>amount;
        bal=bal-amount;
        }
        else{
            cout<<"Enter the valid choice"<<endl;
        }

    }
    void displayAccountInformation()
    {
        cout<<"Name:"<<name<<endl
            <<"Account no. :"<<acc<<endl
            <<"Balance:"<<bal<<endl;

    }

    int validateAccount(int account)
     {
        if(acc==account)
        {
            return 1;
        }
        else
        {
            return 0;
        }
     }    
};
int main()
{
    Bank_Account B[10];
    int choice,i;
    int account,result;
    while(1)
    {
        cout<<"1.Open an account  \n2.Deposite money \n3.Withdraw money \n4.Display account information \n6.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
       
        switch(choice)
        {
            case 1:
                      for(i=0;i<2;i++)       
                     
                     {
                         B[i].OpenAcount();
                     B[i].displayAccountInformation();
                     }
                  break;
                 

             case 2:

                      cout<<"Enter account number:";
                       cin>>account;
                    for(i=0;i<2;i++)
                    {
                        // cout<<"Enter account number:";
                        // cin>>account;
                       result= B[i].validateAccount(account);
                       if(result)
                       {
                                       
                    B[i].DepositMoney();
                    B[i].displayAccountInformation();
                     break;
                     }
                     }
                     if(!result)
                     {
                        cout<<"Error";
                        break;
                     }
                     break;
                  
            case 3:
            
                      cout<<"Enter account number:";
                       cin>>account;
                     for(i=0;i<2;i++)
                    {
                        // cout<<"Enter account number:";
                        // cin>>account;
                       result= B[i].validateAccount(account);
                       if(result)
                       {
                      B[i].WithdrawMoney();
                   
                     B[i].displayAccountInformation();
                     break;
                      }
                     }
                     if(!result)
                     {
                        cout<<"Error";
                        break;
                     }
                     break;

                   
                   
            case 4:
                
                 
                     B[i].displayAccountInformation();
                 
                 break;    
             case 5:
             exit(0);
             default:cout<<"Enter valid option"<<endl;

           


        }

    }
    return 0;
}