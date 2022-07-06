//CONVERT RECTANGULAR COORDINATES TO POALR COORDINATES USING CONVERSION ROUTINE IN DESTINATION CLASS
#include<iostream>
#include<math.h>

using namespace std;

class Rectangular
{
    double x,y;
    public:
    Rectangular(double x,double y) 
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout<<" x-coordinates: "<<x<<endl<<" y-coordinates: "<<y<<endl;
    }
     int getx()
     {
        return x;
     }
     int gety()
     {
        return y;   
     }
};

class Polar
{
    double radius,angle;
    public:
    Polar()
    {}
    Polar(double radius,double angle) 
    {
        this->radius = radius;  
        this->angle = angle;
    }
    void display()
    {
        cout<<" radius: "<<radius<<endl<<" angle: "<<angle<<endl;
    }
   Polar(Rectangular r)
   {
    radius = sqrt(r.getx()*r.getx()+r.gety()*r.gety());
    angle=atan(r.gety()/r.getx());
   }  
};

int main()
{
    Rectangular robj(10,15);
    Polar pobj;
    pobj=robj;
    robj.display();
    pobj.display();
    return 0;
}