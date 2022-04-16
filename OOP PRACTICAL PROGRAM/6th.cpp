/*DEFAULT ARGUEMENT*/
#include<iostream>
using namespace std;
double SI(double principal,double time,int rate=1.5)
{
    return(principal*time*rate/100);
}
int main()
{
    double p,t;
    char choice;
    int r;
    cout<<"Enter the time and principal "<<endl;
    cin>>t>>p;
    cout<<"Do you want to use the default rate of 1.5% "<<endl<<"Enter Y or Y for yes \n OR \n N or n for no"<<endl;
    cin>>choice;
    if(choice=='Y' || choice=='y')
    {
        cout<<"The simple interest is "<<SI(p,t)<<endl;
    }
    else if(choice=='N' || choice=='n')
    {
     cout<<"Enter the new rate:"<<endl;
     cin>>r;
     cout<<"The simple interest is "<<SI(p,t,r)<<endl;
    }
    else
    {
        cout<<"Enter the valid rate:"<<endl;

    }
    return 0;
}
