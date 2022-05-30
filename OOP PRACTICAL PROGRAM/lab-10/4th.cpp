// WAP TO ADD TWO DISTANCE(KM,M,CM).USE DYNAMIC CONSTRUCTOR

#include<iostream>
using namespace std;
 class Distance
 {
     int *km,*met,*cmet;
     public:
     Distance()
     {}
     Distance( int k,int m,int cm)
     {
         km=new int;
         met=new int;
         cmet=new int;

         *km=k;
         *met=m;
         *cmet=cm;
     }

     void add(Distance D)
     {
       int a,b,c;
       a=(*(this->cmet)+*(D.cmet))%100;
       b=((*(this->met)+*(D.met))+(*(this->cmet)+*(D.cmet))/100)%1000;
       c=(*(this->km)+*(D.km))+((*(this->met)+*(D.met))+(*(this->cmet)+*(D.cmet))/100)/1000;

       cout<<"The add of two distances is "<<c<<" km "<<b<<" m "<<a<<" cm "<<endl;
     
     }
     ~Distance()
     {
         delete km;
         delete met;
         delete cmet;
     }
 };
 int main()
 {
 /*Distance *ptr1=new Distance(2,800,90);
 Distance *ptr2=new Distance(3,300,30);
 */
Distance D1(2,300,90);
Distance D2(3,800,30);
 D1.add(D2);
 return 0;
 
 }