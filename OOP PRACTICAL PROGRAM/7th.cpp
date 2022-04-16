/*

*/
#include<iostream>
using namespace std;
void computesphere(float &v,float &s,float r)
{
    v=(4*3.14*r*r*r/3);
    s=(4*3.14*r*r);
}
int main()
{
    float r,v,s;
    cout<<"Enter radius: "<<endl;
    cin>>r;
  computesphere(v,s,r);
  {
      cout<<"The volume is "<<v<<endl
          <<"The surface area is "<<s<<endl;
  }
  return 0;
}