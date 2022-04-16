/*WAP OF ENUMERATED DATATYPE MONTH*/
#include<iostream>
using namespace std;
enum month
{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
int main()
{
month m1,m2;
m1=aug;
m2=apr;
cout<<"m1 is "<<m1<<endl<<"m2 is "<<m2<<endl;
return 0;
}