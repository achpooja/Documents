//CONVERT POLAR COORDINATES TO RCTANGULAR COORDINATES USING CONVERSION ROUTINE IN DESTINATION CLASS

#include<iostream>
#include<math.h>
using namespace std;

class Polar
{
    double radius,angle;
    public:
    Polar(double radius,double angle)
    {
        this->radius = radius;
        this->angle = angle;
    }
    void display()
    {
        cout << "radius: " << radius <<endl<< " angle: " << angle<<endl;
    }
    int getAngle()
    {
        return angle;
    }
    int getRadius()
    {
        return radius;
    }
};

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
            cout << "x: " << x <<endl<<"y: " << y <<endl;
        }
        Rectangular(Polar p)
        {
            x=p.getRadius()*cos(p.getAngle());
            y=p.getRadius()*sin(p.getAngle());
        }
    
};

int main()
{
    Polar pobj(10,45);
    Rectangular robj;
    robj=pobj;
    pobj.display();
    robj.display();    
    return 0;
}
