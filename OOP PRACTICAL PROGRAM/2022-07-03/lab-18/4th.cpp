//CONVERT RECTANGULAR COORDINATES TO POALR COORDINATES USING CONVERSION FUNCTION IN SOURCE CLASS
#include<iostream>
#include<math.h>

using namespace std;
//class Polar;


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
  
};
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

    operator Polar()
   {
    double radius,angle;
    radius = sqrt(x*x+y*y);
    angle=atan(y/x);
    Polar p(radius,angle);
    return p;  
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