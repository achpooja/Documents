//WAP TO CLACULATE RESULT OF A STUDENT.ALSO DISPLAY INFORMATION OF EMPLOYE

#include<iostream>
using namespace std;

class Person
{
    protected:
    char name[50];
    int age;
    char address[50];
    public:
    void readPerson()
     { 
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter address:"<<endl;
        cin>>address;
     }
     void displayPerson()
     {
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<endl;
        cout<<"Address is:"<<address<<endl;
     }


    
};
class Student:public Person
{
    protected:
    int roll;
    public:
    void readStudent()
    {
        cout<<"Enter roll:"<<endl;
        cin>>roll;
    }
    void displayStudent()
    {
        cout<<"Roll is:"<<roll<<endl;
    }
};

class Employee:public Person
{
    protected:
    char designation[100];
    int id,salary;
    public:
    void readEmployee()
    {
        cout<<"Enter designation:"<<designation<<endl;
        cin>>designation;
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter salary:"<<endl;
        cin>>salary;
    }
    void displayEmployee()
    {
        cout<<"Designation is:"<<designation<<endl;
        cout<<"Id is:"<<id<<endl;
        cout<<"Salary is:"<<salary<<endl;
    }
};

class Examination:public Student
{
protected:
int pm;
int tm;
public:

    void readMarks()
    {
       cout<<"Enter theory marks:"<<endl;
       cin>>tm;
       cout<<"Enter practical marks:"<<endl;
       cin>>pm;
    }
    void displayMarks()
    {
        cout<<"Thory marks="<<tm<<endl 
            <<"Practical marks="<<pm<<endl;
    }

};

class Result:public Examination
{
    protected:
    int total;
    public:
    void calculate()
    {
        total=tm+pm;
        cout<<"Total Marks="<<total<<endl;
    }
};

int main()
{
    Result robj;
    robj.readPerson();
    robj.readStudent();
    robj.readMarks();
    robj.displayPerson();
    robj.displayStudent();
    robj.displayMarks();
    robj.calculate();

    Employee eobj;
    eobj.readPerson();
    eobj.readEmployee();
    eobj.displayPerson();
    eobj.displayEmployee();
    return 0;
}