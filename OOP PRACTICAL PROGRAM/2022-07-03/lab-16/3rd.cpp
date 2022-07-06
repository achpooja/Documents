//OVERLOADING UNARY OPERATOR USING FRIEND FUNCTION

#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex(int real,int img)
    {
        this->real = real;  
        this->img = img;
    }
    void display()
    {
        cout<<"Real: "<<real<<endl<<"Imaginary: "<<img<<endl;
    }
    friend void operator-(Complex &);
};
int main()
{
    Complex cobj(10,15);
    cout<<"Before negating the complex number "<<endl;
    cobj.display();
    cout<<"After negating the complex number "<<endl;
    -cobj;
    cobj.display();
    return 0;
}
void operator-(Complex &c)
{
    c.real=-c.real;
    c.img=-c.img;
}