/*INLINE FUNCTION */
#include<iostream>
using namespace std;
inline int area(int,int);
inline int volume(int);
inline int add(int,int);
inline int product(int,int);
inline float division(float,float);
int main()
{
    int l,b,len,n1,n2;
    cout<<"Enter the length and breadth of rectangular "<<endl;
    cin>>l>>b;
    cout<<"The area of rectangular is "<<area(l,b)<<endl;
    cout<<"Enter the length of cube "<<endl;
    cin>>len;
    cout<<"The volume of cube is "<<volume(len)<<endl;
   cout<<"Enter the two numbers "<<endl;
    cin>>n1>>n2;
    cout<<"The add of two numbers is "<<add(n1,n2)<<endl
    <<"The product of two numbers is "<<product(n1,n2)<<endl
    <<"The division of two numbers is "<<division(n1,n2)<<endl;
    

    return 0;

}
int area(int a,int b)
{
    return(a*b);
}
int volume(int a)
{
    return(a*a*a);
}
int add(int a,int b)
{
    return(a+b);
}
int product(int a,int b)
{
    return(a*b);
}
float division(float a,float b)
{
    return(a/b);
}

