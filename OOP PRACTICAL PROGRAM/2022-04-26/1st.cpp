#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    void setvalue(int x, int y)
    {
        real = x;
        img = y;
    }
    void add(Complex *ptr1, Complex *ptr2)
    {
        cout << "The sum of complex numbers is " << ((ptr1->real) + (ptr2->real)) << " + i" << ((ptr1->img) + (ptr2->img));
    }
};
int main()
{
    Complex *ptr1 = new Complex;
    Complex *ptr2 = new Complex;
    Complex *ptr = new Complex;
    ptr1->setvalue(10, 3);
    ptr2->setvalue(2, 5);
    ptr->add(ptr1, ptr2);
    delete ptr1;
    delete ptr2;
    return 0;
}