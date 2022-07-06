//EXAMPLE PROGRAM OF VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void functionName()
    {
        cout<<"\nYou are inside base class<<endl";
    }
};

class Derived:public Base
{
    public:
    void functionName()
    {
        cout<<"You are inside derived class<<endl";
    }
};

int main()
{    Base *bptr;
    Derived dobj;
    bptr=&dobj;
    bptr->functionName();
    Base bobj;
    bptr=&bobj;
    bptr->functionName();
    return 0;

}