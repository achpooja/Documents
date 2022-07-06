#include<iostream>
using namespace std;

template <typename T>

void swap_var(T a, T b)
{
    T temp;
    temp=a;
     a=b;
     b=temp;
     cout<<"a="<<a<<endl<<"b="<<b<<endl;
}

int main()
{
    int a=3,b=5;
    swap_var(a,b);
    float x=1.2,y=3.3;
    swap_var(x,y);
    char m='A',n='B';
    swap_var(m,n);

}