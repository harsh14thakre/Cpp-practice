#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1,digit=0,sum=0;
    cout<<"Enter any no.";
    cin>>n;
    for(;n!=0;)
    {
       digit=n%10;
    }
    for(int i=1;i<=digit;++i)
    {
        if(digit%i==0)
        {
            factorial=factorial*i;
            sum=sum+factorial;
            n=n/10;
        }
    }
    cout<<"This is a strong no";
}