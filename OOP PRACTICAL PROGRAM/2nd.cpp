/*sum of 1st n natural number*/
#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
        cout<<"The sum of "<< n <<" natural number is "<<sum<<endl;

    }
    return 0;
}