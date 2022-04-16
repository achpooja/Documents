/*

*/
#include<iostream>
#include<math.h>
using namespace std;
class Point
{
    float x,y,z ;
    public:
    void read()
    {
        cout<<"Enter the coordinates:"<<endl;
        cin>>x>>y>>z;
    }
    void display()
    {
        cout<<"The coordinates are "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    void distance()
    {
        cout<<"The distance is "<<sqrt(pow(x,2)+pow(y,2)+pow(z,2))<<endl;
    }

};

int main()
{
    Point p;
    p.read();
    p.display();
    p.distance();
    return 0;

}
