#include<iostream>
using namespace std;
class Time
{
    int hour,minute,second;
    public:
    void getTime(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void displayTime()
    {
    cout<<"The time is "<<hour<<":"<<minute<<":"<<second<<endl;
    }
    friend Time addTime(Time,Time);
};
Time addTime(Time t1,Time t2)
{
    Time t;
    t.second=t1.second+t2.second;
    t.minute=t.second/60;
    t.second=t.second%60;
    t.minute+=t1.minute+t2.minute;
    t.hour=t.minute/60;
    t.minute=t.minute%60;
    t.hour+=t1.hour+t2.hour;
    return t;
}
 int main()
 {
     int hr,min,sec;
     Time t1,t2,t3;
     cout<<"For first time:"<<endl;
     cin>>hr>>min>>sec;
     t1.getTime(hr,min,sec);
     cout<<"The first time is "<<endl;
     t1.displayTime();
     cout<<"For second time:"<<endl;
     cin>>hr>>min>>sec;
     t2.getTime(hr,min,sec);
     cout<<"The second time is "<<endl;
     t2.displayTime();
     t3=addTime(t1,t2);
     cout<<"The resultant time is "<<endl;
     t3.displayTime();
     return 0;
 }