#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i=1;
    cout<<"Enter the number";
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        {
          count++;
        }
        ++i;
    }
    if(count==2)
    {
        cout<<"This is a prime no.";
    }
    else{
        cout<<"This is not a prime number";
    }
}