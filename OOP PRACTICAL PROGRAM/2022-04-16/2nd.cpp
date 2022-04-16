/*COPY CONSTRUCTOR*/

#include<iostream>
using namespace std;
class Example
{
    int a,b;
    public:
    Example()
    {
        a=0;
        b=0;
     
    }
    Example(int x,int y)
    {
        a=x;
        b=y;
       
    }
    Example(Example &obj)
    {
        a=obj.a;
        b=obj.b;
       

    }
    void display()
    {
        cout<<"a = "<<a<<endl
            <<"b = "<<b<<endl;
    }
};
int main()
{
    Example e1;
    Example e2(10,20);
    Example e3=e1;
    cout<<"Default constructor called"<<endl;
    e1.display();
    cout<<"Parameterized constructor called"<<endl;
    e2.display();
    cout<<"Copy constructor called"<<endl;
    e3.display();
    return 0;

}