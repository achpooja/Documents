//WAP TO ADD TWO COMPLEX NUMBER(USE DMA ON OBJECT)

#include<iostream>
using namespace std;
class Complex
{
    int real,imaginary;
    public:
    void read()
    {
        cout<<"Enter real and imaginary number";
        cin>>real>>imaginary;
    }
    void sum(Complex C)
    {
        cout<<"The sum of two complex no. is "<<(this->real+C.real)<<"+"<<(this->imaginary+C.imaginary)<<"i"<<endl;
    }

};
 int main()
 {
     Complex *C1=new Complex;
     Complex *C2=new Complex;
     C1->read();
     C2->read();
     C1->sum(*C2);
     delete C1;
     delete C2;
     C1=NULL;
     C2=NULL;
     return 0;
 }
