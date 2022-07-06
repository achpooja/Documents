

#include<iostream>
using namespace std;

class Time
{
    int hrs, mins;
    public:
    Time(int h, int m)
    {
        hrs = h;  
        mins = m;
    }
 operator int()
   {
      cout<<"Class type to basic type conversion"<<endl;
      return(hrs*60 + mins);
   }
   ~Time()
   {

   }
};
int main()
{
    int hr,min,duration;
    cout<<"Enter hours: "<<endl;
    cin>>hr;
    cout<<"Enter mins: "<<endl;
    cin>>min;
    Time t(hr,min);
    duration=t;
    cout<<"Total minutes are: "<<endl<<duration;
    return 0;

}

