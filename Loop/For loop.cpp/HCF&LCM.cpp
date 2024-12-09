#include<iostream>
using namespace std;
int main()
{
  int a,b,ans,lcm;
  cout<<"Enter the value of a";
  cin>>a;
  cout<<"Enter the value of b";
  cin>>b;
  if(a>b)
  {
    for(int i=1;i<=b;++i)
    {
      if(a%i==0 && b%i==0)
      {
        ans=i;
      }
    }
          cout<<"HCF is"<<ans;
          lcm=a*b/ans;
          cout<<lcm;
  }
  if(a<b)
  {
    for(int i=1;i<=a;++i)
    {
      if(a%i==0 && b%i==0)
      {
        ans=i;
      }
    }
          cout<<"HCF is"<<ans;
          lcm=a*b/ans;
          cout<<lcm;
  }

}