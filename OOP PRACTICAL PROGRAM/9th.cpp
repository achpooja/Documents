/*

*/
#include<iostream>
using namespace std;
class Person
{
    char name[50],gender;
    int age;
    long int telno;
    public:
    void read()
    {
    cout<<"Enter the name,gender,age and telephone"<<endl;
    cin>>name>>gender>>age>>telno;
    }
    void display()
    {
        cout<<"Name is "<<name<<endl
            <<"Gender is "<<gender<<endl   
            <<"Age is "<<age<<endl
            <<"Telephone no. is "<<telno<<endl;

    }
};
int main()
{
    Person p;
    p.read();
    p.display();
    return 0;
}