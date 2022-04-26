/*
 ABOUT CONSTRUCTOR
*/

#include<iostream>
#include<string.h>
using namespace std;
class Bank_Costumer
{
    char name[50];
    long double account;
    double balance;
    public:
    Bank_Costumer()
    {
        strcpy(name,"");
        account=0;
        balance=100;
    }
    Bank_Costumer(char n[50],long double a,double b)
    {
        strcpy(name,n);
        account=a;
        balance=b;

    }
    void display()
    {
        cout<<"Name is "<<name<<endl
             <<"Account no. is "<<account<<endl
             <<"Balance is "<<balance<<endl;
    }

};
int main()
{
  Bank_Costumer c1;
  Bank_Costumer c2("POOJA",12340,1000);
  Bank_Costumer c3("SABITA",67890,2000);
  cout<<"Default constructor called"<<endl;
  c1.display();
  cout<<"Parameterized constructor called"<<endl;
  c2.display();
  
  c3.display();
  return 0;
}