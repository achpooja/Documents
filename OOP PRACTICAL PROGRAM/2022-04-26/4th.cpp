#include<iostream>

using namespace std;

class Distance
{
    int km,m,cm;
    public:
    void setvalue(int a,int b,int c)
    {
        km=a;
        m=b;
        cm=c;
    }
    void addDistance(Distance *ptr1,Distance *ptr2)
    {
        int kilo,meter,cmeter;
        cmeter=((ptr1->cm)+(ptr2->cm))%100;
        meter=(((ptr1->m)+(ptr2->m)+((ptr1->cm)+(ptr2->cm))/100)%1000);
        kilo=((ptr1->km)+(ptr2->km)+((ptr1->m)+(ptr2->m)+((ptr1->cm)+(ptr2->cm))/100)/1000);
        cout<<"The distance is "<< endl<< kilo<<"km "<<meter<<"m "<<cmeter<<"cm"<<endl;
    }
};
int main()
{
    Distance *ptr1=new Distance;
    Distance *ptr2=new Distance;
      Distance *ptr=new Distance;
    ptr1->setvalue(1,900,90);
    ptr2->setvalue(1,400,50);
    ptr->addDistance(ptr1,ptr2);
    return 0;
}