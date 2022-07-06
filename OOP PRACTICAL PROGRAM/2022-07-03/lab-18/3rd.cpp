//CONVERT POLAR COORDINATES TO RECTANGULAR COORDINATES USING CONVERSION FUNCTION IN SOURCE CLASS

#include<iostream>
#include<math.h>

using namespace std;
//class Polar;
class Rectangular
{
    double x,y;
    public:
    Rectangular()
    {} 
    Rectangular(double x,double y) 
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout<<" x-coordinates: "<<x<<endl<<" y-coordinates: "<<y<<endl;
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
  operator Rectangular()
  {
    double x,y;
    x=radius*cos(angle);
    y=radius*sin(angle);
    Rectangular R(x,y);
    return R;
  }
};


int main()
{
     Polar Pobj(10,15);
     Rectangular Robj;
     Robj=Pobj;
    Pobj.display();
    Robj.display();
    return 0;
}