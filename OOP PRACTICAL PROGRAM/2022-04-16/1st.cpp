/*
 ABOUT CONSTRUCTOR
*/

#include<iostream>
#include<string.h>
using namespace std;
class Bank_Costumer
{
    char name[50];
    double account;
    long double balance;
    public:
    Bank_Costumer()
    {
        strcpy(name,"");
        account=0;
        balance=0;
    }
    Bank_Costumer(char n[50],double a,long double b)
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
  Bank_Costumer c2("POOJA",4567,10000);
  Bank_Costumer c3("SABITA",1234,20000);
  cout<<"Default constructor called"<<endl;
  c1.display();
  cout<<"Parameterized constructor called"<<endl;
  c2.display();
  
  c3.display();
  return 0;
}