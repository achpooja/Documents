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
    void addDistance(Distance p1,Distance p2)
    {
        int kilo,meter,cmeter;
        cmeter=(*(p1.cm)+*(p2.cm))%100;
        meter=((*(p1.m)+*(p2.m)+(*(p1.cm)+*(p2.cm))/100)%1000);
        kilo=(*(p1.km)+*(p2.km)+(*(p1.m)+*(p2.m)+(*(p1.cm)+*(p2.cm))/100)/1000);
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
    Distance p1;
    Distance p2(1,900,90);
      Distance ptr;
    ptr.addDistance(p1,p2);

    return 0;
}