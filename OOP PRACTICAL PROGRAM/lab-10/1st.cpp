// WAP TO ADD TWO COMPLEX NUMBER(USE DYNAMIC CONSTRUCTOR)

#include <iostream>
using namespace std;

class Complex
{
    int *real, *imaginary;

public:
    Complex()
    {
        real = new int;
        imaginary = new int;
        *real = 0;
        *imaginary = 0;
    }
    Complex(int r, int i)
    {
        real = new int;
        imaginary = new int;
        *real = r;
        *imaginary = i;
    }
    void sum(Complex c)
    {
        cout << "The sum of complex no. is " << (*(this->real) + *(c.real)) << " + " << (*(this->imaginary) + *(c.imaginary)) << "i"<<endl;
    }
    /* ~Complex()
     {
         delete real;
         delete imaginary;
     }*/
};
int main()
{
    Complex C1(3, 6), C2(2, 4);
    C1.sum(C2);
    return 0;
}