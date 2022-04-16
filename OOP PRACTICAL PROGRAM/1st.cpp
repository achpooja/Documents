/*find factorial of given number*/
#include<iostream>
using namespace std;

int main()
{
    int fact=1,i,n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
        cout<<"The factorial of "<<n<<" is "<<fact<<endl;

    }
    return 0;
}