#include<iostream>
using namespace std;
 
 class Mountain
 {
 char name[50],location[50];
 float height;
 public:
 void read()
 {
     cout<<"Enter the name ,location and height of mountain:"<<endl;
     cin>>name>>location>>height;
 }
 void display()
 {
   cout<<"Name of mountain is "<<name<<endl
       <<"Location of mountain is "<<location<<endl
       <<"Height of mountain is "<<height<<endl;  
 }
 friend void cmpHeight(Mountain,Mountain);
 };
 void cmpHeight(Mountain m1,Mountain m2)
{
 cout<<"Information of highest moutain is"<<endl;

if(m1.height>m2.height)
{
 m1.display();
}
else
{
    m2.display();
}
 }
 int main()
 {
Mountain m1,m2;
m1.read();
m2.read();
cout<<"Information of 1st mountain "<<endl;
m1.display();
cout<<"Information of 2nd mountain "<<endl;
m2.display();
cmpHeight(m1,m2);
return 0;
 }