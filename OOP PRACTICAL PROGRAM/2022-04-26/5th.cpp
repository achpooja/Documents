#include<iostream>

using namespace std;

class Distance
{
    int *km,*m,*cm;
    public:
    Distance()
    {
       km=new int;
        m=new int;
        cm=new int;
        *km=1;
        *m=300;
        *cm=50; 
    }
    Distance (int a,int b,int c)
    {
        km=new int;
        m=new int;
        cm=new int;
        *km=a;
        *m=b;
        *cm=c;
    }
    void addDistance(Distance *ptr1,Distance *ptr2)
    {
        int kilo,meter,cmeter;
        cmeter=(*(ptr1->cm)+*(ptr2->cm))%100;
        meter=((*(ptr1->m)+*(ptr2->m)+(*(ptr1->cm)+*(ptr2->cm))/100)%1000);
        kilo=(*(ptr1->km)+*(ptr2->km)+(*(ptr1->m)+*(ptr2->m)+(*(ptr1->cm)+*(ptr2->cm))/100)/1000);
        cout<<"The distance is "<< endl<< kilo<<"km "<<meter<<"m "<<cmeter<<"cm"<<endl;
    }
    ~Distance()
    {
        delete km;
        delete m;
        delete cm;
    }
};
int main()
{
    Distance *p1=new Distance;
    Distance *p2=new Distance(1,900,90);
      Distance *ptr=new Distance;
    ptr->addDistance(p1,p2);
    delete p1;
    delete p2;
    return 0;
}