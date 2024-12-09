#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"Enter the starting value";
    cin>>n1;
    int n2;
    cout<<"Enter the last value";
    cin>>n2;
    int sum=0;
    for(int i=n1;i<=n2;++i)
    {
        sum=sum+i;
    }
    cout<<sum;
}