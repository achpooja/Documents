//has a relationship 

#include<iostream>
using namespace std;

class Engine
{
    public:
    void startEngine()
    {
        cout << "Engine started" << endl;
    }
    void stopEngine()
    {
        cout << "Engine stopped" << endl;
    }
};

class Car
{
    Engine e;
    public:
    
        void startCar()
        {
            e.startEngine();
            cout << "Car started" << endl;
        }
        void stopCar()
        {
            e.stopEngine();
            cout << "Car stopped" << endl;
        }
    
};

int main()
{
    Car cobj;
    cobj.startCar();
    cobj.stopCar();
    return 0;
}