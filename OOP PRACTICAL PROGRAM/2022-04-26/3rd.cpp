#include<iostream>
using namespace std;

class Complex
{
    int *real, *img;

public:
   Complex()
    {
       real=new int;
       img=new int;
       *real=4;
       *img=5;
    }
    Complex (int x, int y)
    {
        real=new int;
        img=new int;
        *real = x;
        *img = y;
    }
    void add(Complex *c1, Complex *c2)
    {
        cout<< "The sum of complex numbers is " << (*(c1->real) + *(c2->real)) << " + i" << (*(c1->img) + *(c2->img));
    }
    ~Complex()
    {
        delete real;
        delete img;
    }
};
int main()
{
    Complex *ptr1=new Complex(3,2);
    Complex *ptr2=new Complex;
    Complex *ptr=new Complex;
    ptr->add(ptr1,ptr2);
    delete ptr1;
    delete ptr2;
    return 0;
}