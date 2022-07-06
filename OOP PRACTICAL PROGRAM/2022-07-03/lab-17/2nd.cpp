#include<iostream>
using namespace std;

class Height
{
    int feet,inches;
    public:
    Height(int h)
    {
        cout<<"Basic type to class type conversion"<<endl;
        feet=h/12;
        inches=h%12;
    }
    void show()
    {
        cout<<feet<<" feet"<<" & "<< inches<<" inch"<<endl;
    }
};
int main()
{
    int inches;
    cout<<"Enter your height in inches"<<endl;
    cin>> inches;
    Height hobj=inches;
    hobj.show();
    return 0;
}