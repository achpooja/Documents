/*PARAMETERIZED CONSTRUCTOR*/
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"Real number = "<<real<<endl <<"Imaginary number = "<<img<<endl;
    }
     Complex addComplex(Complex);
};
int main()
{
    Complex c1(22,10);
    Complex c2(20,19);
    Complex c3;
    cout<<"The first complex number is"<<endl;
    c1.display();
    cout<<"The second complex number is"<<endl;
    c2.display();
    c3=c1.addComplex(c2);
    cout<<"The resultant complex number is "<<endl;
    c3.display();
    return 0;
}
Complex Complex::addComplex(Complex c)
{
    Complex result;
    result.real=c.real+real;
    result.img=c.img+img;
    return result;
}
