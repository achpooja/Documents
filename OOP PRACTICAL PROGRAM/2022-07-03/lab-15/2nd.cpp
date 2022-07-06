//has a relationship

#include<iostream>
using namespace std;

class  Address
{
    char country[100],municipality[100];
    int province,ward;
    public:
    void readAdd()
    {
        cout<<"Enter country name: "<<endl;
        cin>>country;
        cout<<"Enter municipality: "<<endl;
        cin>>municipality;
        cout<<"Enter province: "<<endl;
        cin>>province;
        cout<<"Enter ward: "<<endl;
        cin>>ward;
     }

     void displayAdd()
     {
        cout<<"Country name: "<<country<<endl;
        cout<<"Province no: "<<province<<endl;
        cout<<"Municipality name: "<<municipality<<endl;
        cout<<"Ward no: "<<ward<<endl;
     }
};

class Student
{
    char name[100];
    int roll;
    int semester;
    Address a;
    public:
    void readStudent()
    {
    
        cout<<"Enter the name of student:"<< endl;
        cin>>name;
        cout<<"Enter the roll no: "<<endl;
        cin>>roll;
        cout<<"Enter the semester:"<<endl;
        cin>>semester;
        a.readAdd();
    }
    void displayStudent()
    {
        cout<<endl<<endl<<"Name is : "<<name<<endl;
        cout<<"Roll no is: "<<roll<<endl;
        cout<<"Semester is: "<<semester<<endl;
        a.displayAdd();
    }
};

int main()
{
    Student sobj;
    sobj.readStudent();
    sobj.displayStudent();
    return 0;
}