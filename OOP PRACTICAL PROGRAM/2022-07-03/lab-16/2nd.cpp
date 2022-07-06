//WAP TO DEFINE CLASS COMPLEX WITH DAT MEMBER REAL AND IMAGINARY
//OVERLOAD UNARY MINUS(-) OPERATOR TO NEGATE THE COMPLEX NUMBER

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
    void operator-()
     {
        real=-real;
        img=-img;
     }
     void display()
     {
        cout<<"Real: "<<real<<endl<<"Imaginary: "<<img<<endl;
     }
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