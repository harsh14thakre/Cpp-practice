#include<iostream>
using namespace std;
int main()
{
    int a,i=1,lcm,ans;
    cout<<"Enter the first value";
    cin>>a;
    int b;
    cout<<"Enter the second value";
    cin>>b;
    if(a>b)
    {
        while(i<=b)
        {
          if(a%i==0 && b%i==0)
          {
            ans=i;
          }
          ++i;
        }
        cout<<"HCF="<<ans;
        lcm=a*b/ans;
        cout<<"LCM="<<ans;
    }
    if(a<b)
    {
        while(i<=a)
        {
          if(a%i==0 && b%i==0)
          {
            ans=i;
          }
          ++i;
        }
        cout<<"HCF="<<ans;
        lcm=a*b/ans;
        cout<<"LCM="<<lcm;
    }
}