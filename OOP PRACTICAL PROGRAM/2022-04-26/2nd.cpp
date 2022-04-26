#include <iostream>
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
    void add(Complex ptr1, Complex ptr2)
    {
        cout << "The sum of complex numbers is " << (*(ptr1.real) + *(ptr2.real)) << " + i" << (*(ptr1.img) + *(ptr2.img));
    }
   /* ~Complex()
    {
        delete real;
        delete img;
    }*/
};
int main()
{
    Complex ptr1;
    Complex ptr2(3,2);
    Complex ptr;
    ptr.add(ptr1,ptr2);
    return 0;
}