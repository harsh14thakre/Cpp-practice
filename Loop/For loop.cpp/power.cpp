#include<iostream>
using namespace std;
int main()
{
    int a,n=3,power=1;
    cout<<"Enter the value of a";
    cin>>a;
    for(int i=1;i<=n;++i)
    {
        power=power*a;
    }
    cout<<power;
}   