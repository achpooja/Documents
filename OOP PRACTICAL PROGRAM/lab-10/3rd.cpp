//WAP TO ADD TWO COMPLEX NUMBER(USE STATIC MEMORY ALLOCATION)

#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:

    void read()
    {
        cout<<"Enter the real and imaginary no. "<<endl;
        cin>>real>>img;
    }
    
    void sum(Complex &C1,Complex &C2)
    {
        cout<<"The sum of two complex no. is "<<C1.real+C2.real<<" + "<<C1.img+C2.img<<"i"<<endl;
    }
    
};

int main()
{
    Complex obj1,obj2,obj3;
    obj1.read();
    obj2.read();
    obj3.sum(obj1,obj2);
    return 0;

}